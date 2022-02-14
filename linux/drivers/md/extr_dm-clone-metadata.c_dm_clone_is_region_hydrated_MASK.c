
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int region_map; } ;


 scalar_t__ FUNC_0 (struct dm_clone_metadata*) ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;

bool FUNC_2(struct dm_clone_metadata *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_0) || FUNC_1(VAR_1, VAR_0->region_map);
}
