
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int dummy; } ;
struct dm_clone_region_hydration {int region_nr; } ;


 struct dm_clone_region_hydration* FUNC_0 (struct hash_table_bucket*,int ) ;
 int FUNC_1 (struct hash_table_bucket*,struct dm_clone_region_hydration*) ;

__attribute__((used)) static struct dm_clone_region_hydration *
FUNC_2(struct hash_table_bucket *VAR_0,
      struct dm_clone_region_hydration *VAR_1)
{
 struct dm_clone_region_hydration *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->region_nr);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
