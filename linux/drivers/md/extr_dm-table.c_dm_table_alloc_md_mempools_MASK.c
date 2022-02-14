
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_target {int num_flush_bios; int per_io_data_size; } ;
struct dm_table {unsigned int num_targets; int mempools; int integrity_supported; struct dm_target* targets; } ;
typedef enum dm_queue_mode { ____Placeholder_dm_queue_mode } dm_queue_mode ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mapped_device*,int,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct dm_table*) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dm_table *VAR_3, struct mapped_device *VAR_4)
{
 enum dm_queue_mode VAR_5 = FUNC_3(VAR_3);
 unsigned VAR_6 = 0;
 unsigned VAR_7 = 0;
 struct dm_target *VAR_8;
 unsigned VAR_9;

 if (FUNC_5(VAR_5 == VAR_0)) {
  FUNC_0("no table type is set, can't allocate mempools");
  return -VAR_1;
 }

 if (FUNC_1(VAR_5))
  for (VAR_9 = 0; VAR_9 < VAR_3->num_targets; VAR_9++) {
   VAR_8 = VAR_3->targets + VAR_9;
   VAR_6 = FUNC_4(VAR_6, VAR_8->per_io_data_size);
   VAR_7 = FUNC_4(VAR_7, VAR_8->num_flush_bios);
  }

 VAR_3->mempools = FUNC_2(VAR_4, VAR_5, VAR_3->integrity_supported,
        VAR_6, VAR_7);
 if (!VAR_3->mempools)
  return -VAR_2;

 return 0;
}
