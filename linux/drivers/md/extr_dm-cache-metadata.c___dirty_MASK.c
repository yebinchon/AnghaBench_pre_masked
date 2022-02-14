
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; int root; int info; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct dm_cache_metadata *VAR_1, dm_cblock_t VAR_2, bool VAR_3)
{
 int VAR_4;
 unsigned VAR_5;
 dm_oblock_t VAR_6;
 __le64 VAR_7;

 VAR_4 = FUNC_1(&VAR_1->info, VAR_1->root, FUNC_3(VAR_2), &VAR_7);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_7, &VAR_6, &VAR_5);

 if (((VAR_5 & VAR_0) && VAR_3) || (!(VAR_5 & VAR_0) && !VAR_3))

  return 0;

 VAR_7 = FUNC_4(VAR_6, (VAR_5 & ~VAR_0) | (VAR_3 ? VAR_0 : 0));
 FUNC_0(&VAR_7);

 VAR_4 = FUNC_2(&VAR_1->info, VAR_1->root, FUNC_3(VAR_2),
          &VAR_7, &VAR_1->root);
 if (VAR_4)
  return VAR_4;

 VAR_1->changed = 1;
 return 0;

}
