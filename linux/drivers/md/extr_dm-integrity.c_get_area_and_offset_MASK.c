
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {TYPE_1__* sb; int meta_dev; } ;
typedef unsigned int sector_t ;
typedef unsigned int __u8 ;
struct TYPE_2__ {unsigned int log2_interleave_sectors; } ;



__attribute__((used)) static void FUNC_0(struct dm_integrity_c *VAR_0, sector_t VAR_1,
    sector_t *VAR_2, sector_t *VAR_3)
{
 if (!VAR_0->meta_dev) {
  __u8 VAR_4 = VAR_0->sb->log2_interleave_sectors;
  *VAR_2 = VAR_1 >> VAR_4;
  *VAR_3 = (unsigned)VAR_1 & ((1U << VAR_4) - 1);
 } else {
  *VAR_2 = 0;
  *VAR_3 = VAR_1;
 }
}
