
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char u8 ;
typedef unsigned int u64 ;
typedef int u32 ;
struct partition_meta_info {int* volname; int uuid; } ;
struct parsed_partitions {int limit; int pp_buf; TYPE_1__* parts; int bdev; } ;
struct TYPE_9__ {int* partition_name; int unique_partition_guid; int partition_type_guid; int starting_lba; int ending_lba; int num_partition_entries; } ;
typedef TYPE_2__ gpt_header ;
typedef TYPE_2__ gpt_entry ;
struct TYPE_8__ {int has_info; struct partition_meta_info info; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct parsed_partitions*,TYPE_2__**,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (char) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct parsed_partitions*,int,unsigned int,unsigned int) ;
 int FUNC_14 (int ,char*,int ) ;

int FUNC_15(struct parsed_partitions *VAR_3)
{
 gpt_header *VAR_4 = ((void*)0);
 gpt_entry *VAR_5 = ((void*)0);
 u32 VAR_6;
 unsigned VAR_7 = FUNC_1(VAR_3->bdev) / 512;

 if (!FUNC_4(VAR_3, &VAR_4, &VAR_5) || !VAR_4 || !VAR_5) {
  FUNC_7(VAR_4);
  FUNC_7(VAR_5);
  return 0;
 }

 FUNC_12("GUID Partition Table is valid!  Yea!\n");

 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_4->num_partition_entries) && VAR_6 < VAR_3->limit-1; VAR_6++) {
  struct partition_meta_info *VAR_8;
  unsigned VAR_9 = 0;
  unsigned VAR_10;
  u64 VAR_11 = FUNC_10(VAR_5[VAR_6].starting_lba);
  u64 VAR_12 = FUNC_10(VAR_5[VAR_6].ending_lba) -
      FUNC_10(VAR_5[VAR_6].starting_lba) + 1ULL;

  if (!FUNC_5(&VAR_5[VAR_6], FUNC_8(VAR_3->bdev)))
   continue;

  FUNC_13(VAR_3, VAR_6+1, VAR_11 * VAR_7, VAR_12 * VAR_7);


  if (!FUNC_3(VAR_5[VAR_6].partition_type_guid, VAR_2))
   VAR_3->parts[VAR_6 + 1].flags = VAR_0;

  VAR_8 = &VAR_3->parts[VAR_6 + 1].info;
  FUNC_2(&VAR_5[VAR_6].unique_partition_guid, VAR_8->uuid);


  VAR_10 = FUNC_11(FUNC_0(VAR_8->volname) - 1,
    FUNC_0(VAR_5[VAR_6].partition_name));
  VAR_8->volname[VAR_10] = 0;
  while (VAR_9 < VAR_10) {
   u8 VAR_13 = VAR_5[VAR_6].partition_name[VAR_9] & 0xff;
   if (VAR_13 && !FUNC_6(VAR_13))
    VAR_13 = '!';
   VAR_8->volname[VAR_9] = VAR_13;
   VAR_9++;
  }
  VAR_3->parts[VAR_6 + 1].has_info = 1;
 }
 FUNC_7(VAR_5);
 FUNC_7(VAR_4);
 FUNC_14(VAR_3->pp_buf, "\n", VAR_1);
 return 1;
}
