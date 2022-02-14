
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct dm_target {int dummy; } ;
struct dm_dev {int bdev; } ;
typedef int sector_t ;
typedef enum blk_zoned_model { ____Placeholder_blk_zoned_model } blk_zoned_model ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_0, struct dm_dev *VAR_1,
     sector_t VAR_2, sector_t VAR_3, void *VAR_4)
{
 struct request_queue *VAR_5 = FUNC_0(VAR_1->bdev);
 enum blk_zoned_model *VAR_6 = VAR_4;

 return VAR_5 && FUNC_1(VAR_5) == *VAR_6;
}
