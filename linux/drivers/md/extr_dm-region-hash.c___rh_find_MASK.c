
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int hash_lock; } ;
struct dm_region {int dummy; } ;
typedef int region_t ;


 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 struct dm_region* FUNC_1 (struct dm_region_hash*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct dm_region *FUNC_4(struct dm_region_hash *VAR_0, region_t VAR_1)
{
 struct dm_region *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_3(&VAR_0->hash_lock);
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  FUNC_2(&VAR_0->hash_lock);
 }

 return VAR_2;
}
