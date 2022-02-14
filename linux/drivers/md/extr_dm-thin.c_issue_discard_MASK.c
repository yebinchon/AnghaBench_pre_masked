
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool_dev; int pool; } ;
struct discard_op {int bio; struct thin_c* tc; } ;
typedef int sector_t ;
typedef scalar_t__ dm_block_t ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct discard_op *VAR_1, dm_block_t VAR_2, dm_block_t VAR_3)
{
 struct thin_c *VAR_4 = VAR_1->tc;
 sector_t VAR_5 = FUNC_1(VAR_4->pool, VAR_2);
 sector_t VAR_6 = FUNC_1(VAR_4->pool, VAR_3 - VAR_2);

 return FUNC_0(VAR_4->pool_dev->bdev, VAR_5, VAR_6,
          VAR_0, 0, &VAR_1->bio);
}
