
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool_c {TYPE_1__* metadata_dev; } ;
typedef int dm_block_t ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static dm_block_t FUNC_2(struct pool_c *VAR_0)
{





 dm_block_t VAR_1 = FUNC_0(VAR_0->metadata_dev->bdev) / 4;
 return FUNC_1((dm_block_t)1024ULL , VAR_1);
}
