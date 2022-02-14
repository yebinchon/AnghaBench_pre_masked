
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int nr_regions; int region_map; } ;


 scalar_t__ FUNC_0 (struct dm_clone_metadata*) ;
 unsigned long FUNC_1 (int ,int ,unsigned long) ;

bool FUNC_2(struct dm_clone_metadata *VAR_0,
    unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(VAR_0))
  return 1;

 VAR_3 = FUNC_1(VAR_0->region_map, VAR_0->nr_regions, VAR_1);

 return (VAR_3 >= (VAR_1 + VAR_2));
}
