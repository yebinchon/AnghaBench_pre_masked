
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_ctx {int region_size; int region_size_bits; int region_table_entry_bits; int region_entries_per_slot; int region_entries_per_slot_bits; int nr_regions; int region_table; } ;
struct dm_target {int len; char* error; struct switch_ctx* private; } ;
typedef int sector_t ;
typedef int region_table_slot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_3, unsigned VAR_4)
{
 struct switch_ctx *VAR_5 = VAR_3->private;
 sector_t VAR_6 = VAR_3->len;
 sector_t VAR_7;

 if (!(VAR_5->region_size & (VAR_5->region_size - 1)))
  VAR_5->region_size_bits = FUNC_0(VAR_5->region_size);
 else
  VAR_5->region_size_bits = -1;

 VAR_5->region_table_entry_bits = 1;
 while (VAR_5->region_table_entry_bits < sizeof(region_table_slot_t) * 8 &&
        (region_table_slot_t)1 << VAR_5->region_table_entry_bits < VAR_4)
  VAR_5->region_table_entry_bits++;

 VAR_5->region_entries_per_slot = (sizeof(region_table_slot_t) * 8) / VAR_5->region_table_entry_bits;
 if (!(VAR_5->region_entries_per_slot & (VAR_5->region_entries_per_slot - 1)))
  VAR_5->region_entries_per_slot_bits = FUNC_0(VAR_5->region_entries_per_slot);
 else
  VAR_5->region_entries_per_slot_bits = -1;

 if (FUNC_2(VAR_6, VAR_5->region_size))
  VAR_6++;

 if (VAR_6 >= VAR_2) {
  VAR_3->error = "Region table too large";
  return -VAR_0;
 }
 VAR_5->nr_regions = VAR_6;

 VAR_7 = VAR_6;
 if (FUNC_2(VAR_7, VAR_5->region_entries_per_slot))
  VAR_7++;

 if (VAR_7 > VAR_2 / sizeof(region_table_slot_t)) {
  VAR_3->error = "Region table too large";
  return -VAR_0;
 }

 VAR_5->region_table = FUNC_3(FUNC_1(VAR_7,
      sizeof(region_table_slot_t)));
 if (!VAR_5->region_table) {
  VAR_3->error = "Cannot allocate region table";
  return -VAR_1;
 }

 return 0;
}
