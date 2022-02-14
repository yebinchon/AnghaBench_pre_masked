
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_range {scalar_t__ logical_sector; scalar_t__ n_sectors; } ;



__attribute__((used)) static bool FUNC_0(struct dm_integrity_range *VAR_0, struct dm_integrity_range *VAR_1)
{
 return VAR_0->logical_sector < VAR_1->logical_sector + VAR_1->n_sectors &&
        VAR_0->logical_sector + VAR_0->n_sectors > VAR_1->logical_sector;
}
