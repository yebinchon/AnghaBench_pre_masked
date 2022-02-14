
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; int root; int info; } ;
typedef int dm_cblock_t ;
typedef int __le64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dm_cache_metadata *VAR_0, dm_cblock_t VAR_1)
{
 int VAR_2;
 __le64 VAR_3 = FUNC_3(0, 0);

 FUNC_0(&VAR_3);
 VAR_2 = FUNC_1(&VAR_0->info, VAR_0->root, FUNC_2(VAR_1),
          &VAR_3, &VAR_0->root);
 if (VAR_2)
  return VAR_2;

 VAR_0->changed = 1;
 return 0;
}
