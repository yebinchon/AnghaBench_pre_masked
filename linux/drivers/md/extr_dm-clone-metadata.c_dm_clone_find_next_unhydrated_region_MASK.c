
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int nr_regions; int region_map; } ;


 unsigned long FUNC_0 (int ,int ,unsigned long) ;

unsigned long FUNC_1(struct dm_clone_metadata *VAR_0,
         unsigned long VAR_1)
{
 return FUNC_0(VAR_0->region_map, VAR_0->nr_regions, VAR_1);
}
