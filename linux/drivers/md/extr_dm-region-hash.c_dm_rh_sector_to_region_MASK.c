
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int region_shift; } ;
typedef int sector_t ;
typedef int region_t ;



__attribute__((used)) static region_t FUNC_0(struct dm_region_hash *VAR_0, sector_t VAR_1)
{
 return VAR_1 >> VAR_0->region_shift;
}
