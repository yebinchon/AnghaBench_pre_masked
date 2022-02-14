
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {unsigned int log2_blocks_per_bitmap_bit; unsigned int n_bitmap_blocks; struct bitmap_block_status* bbs; TYPE_1__* sb; } ;
struct bitmap_block_status {int dummy; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {unsigned int log2_sectors_per_block; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct bitmap_block_status *FUNC_1(struct dm_integrity_c *VAR_1, sector_t VAR_2)
{
 unsigned VAR_3 = VAR_2 >> (VAR_1->sb->log2_sectors_per_block + VAR_1->log2_blocks_per_bitmap_bit);
 unsigned VAR_4 = VAR_3 / (VAR_0 * 8);

 FUNC_0(VAR_4 >= VAR_1->n_bitmap_blocks);
 return &VAR_1->bbs[VAR_4];
}
