
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {int log2_metadata_run; int metadata_run; scalar_t__ start; scalar_t__ initial_sectors; TYPE_1__* sb; scalar_t__ meta_dev; } ;
typedef int sector_t ;
struct TYPE_2__ {int log2_interleave_sectors; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static sector_t FUNC_1(struct dm_integrity_c *VAR_0, sector_t VAR_1, sector_t VAR_2)
{
 sector_t VAR_3;

 if (VAR_0->meta_dev)
  return VAR_2;

 VAR_3 = VAR_1 << VAR_0->sb->log2_interleave_sectors;
 if (FUNC_0(VAR_0->log2_metadata_run >= 0))
  VAR_3 += (VAR_1 + 1) << VAR_0->log2_metadata_run;
 else
  VAR_3 += (VAR_1 + 1) * VAR_0->metadata_run;

 VAR_3 += (sector_t)VAR_0->initial_sectors + VAR_2;
 VAR_3 += VAR_0->start;

 return VAR_3;
}
