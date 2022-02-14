
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int metadata_space_map_root; int sm; } ;


 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,size_t*) ;

__attribute__((used)) static int FUNC_2(struct dm_clone_metadata *VAR_0)
{
 int VAR_1;
 size_t VAR_2;

 VAR_1 = FUNC_1(VAR_0->sm, &VAR_2);
 if (VAR_1)
  return VAR_1;

 return FUNC_0(VAR_0->sm, &VAR_0->metadata_space_map_root, VAR_2);
}
