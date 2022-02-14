
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_bufio_client {int sectors_per_block_bits; int block_size; TYPE_1__* bdev; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

sector_t FUNC_3(struct dm_bufio_client *VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1->bdev->bd_inode) >> VAR_0;
 if (FUNC_1(VAR_1->sectors_per_block_bits >= 0))
  VAR_2 >>= VAR_1->sectors_per_block_bits;
 else
  FUNC_2(VAR_2, VAR_1->block_size >> VAR_0);
 return VAR_2;
}
