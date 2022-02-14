
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {int zoned; unsigned int chunk_sectors; } ;
struct dm_target {scalar_t__ len; scalar_t__ begin; TYPE_1__* type; } ;
struct dm_table {int md; } ;
typedef enum blk_zoned_model { ____Placeholder_blk_zoned_model } blk_zoned_model ;
struct TYPE_2__ {scalar_t__ (* iterate_devices ) (struct dm_target*,int ,struct queue_limits*) ;int (* io_hints ) (struct dm_target*,struct queue_limits*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long long,unsigned long long) ;
 int VAR_1 ;
 int FUNC_1 (struct queue_limits*) ;
 scalar_t__ FUNC_2 (struct queue_limits*,struct queue_limits*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 unsigned int FUNC_4 (struct dm_table*) ;
 struct dm_target* FUNC_5 (struct dm_table*,unsigned int) ;
 scalar_t__ FUNC_6 (struct dm_target*,int ,struct queue_limits*) ;
 int FUNC_7 (struct dm_target*,struct queue_limits*) ;
 scalar_t__ FUNC_8 (struct dm_target*,int ,struct queue_limits*) ;
 int FUNC_9 (struct dm_table*,struct queue_limits*) ;
 scalar_t__ FUNC_10 (struct dm_table*,int,unsigned int) ;

int FUNC_11(struct dm_table *VAR_4,
         struct queue_limits *VAR_5)
{
 struct dm_target *VAR_6;
 struct queue_limits VAR_7;
 unsigned VAR_8;
 enum blk_zoned_model VAR_9 = VAR_0;
 unsigned int VAR_10 = 0;

 FUNC_1(VAR_5);

 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_4); VAR_8++) {
  FUNC_1(&VAR_7);

  VAR_6 = FUNC_5(VAR_4, VAR_8);

  if (!VAR_6->type->iterate_devices)
   goto combine_limits;




  VAR_6->type->iterate_devices(VAR_6, VAR_3,
       &VAR_7);

  if (VAR_9 == VAR_0 && VAR_7.zoned != VAR_0) {




   VAR_9 = VAR_7.zoned;
   VAR_10 = VAR_7.chunk_sectors;
  }


  if (VAR_6->type->io_hints)
   VAR_6->type->io_hints(VAR_6, &VAR_7);





  if (VAR_6->type->iterate_devices(VAR_6, VAR_2,
           &VAR_7))
   return -VAR_1;

combine_limits:




  if (FUNC_2(VAR_5, &VAR_7, 0) < 0)
   FUNC_0("%s: adding target device "
          "(start sect %llu len %llu) "
          "caused an alignment inconsistency",
          FUNC_3(VAR_4->md),
          (unsigned long long) VAR_6->begin,
          (unsigned long long) VAR_6->len);





  if (VAR_5->zoned == VAR_0 && VAR_7.zoned != VAR_0) {
   VAR_5->zoned = VAR_7.zoned;
  }
 }
 if (VAR_5->zoned != VAR_0) {




  VAR_9 = VAR_5->zoned;
  VAR_10 = VAR_5->chunk_sectors;
 }
 if (FUNC_10(VAR_4, VAR_9, VAR_10))
  return -VAR_1;

 return FUNC_9(VAR_4, VAR_5);
}
