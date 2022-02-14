
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int region_map; int fail_io; } ;


 int FUNC_0 (struct dm_clone_metadata*) ;
 int FUNC_1 (struct dm_clone_metadata*) ;
 int FUNC_2 (struct dm_clone_metadata*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dm_clone_metadata *VAR_0)
{
 if (!VAR_0->fail_io)
  FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_3(VAR_0->region_map);
 FUNC_2(VAR_0);
}
