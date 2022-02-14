
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int root; int info; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dm_cache_metadata *VAR_2, dm_cblock_t VAR_3,
          bool *VAR_4)
{
 int VAR_5;
 __le64 VAR_6;
 dm_oblock_t VAR_7;
 unsigned VAR_8;

 VAR_5 = FUNC_0(&VAR_2->info, VAR_2->root, FUNC_1(VAR_3), &VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_6, &VAR_7, &VAR_8);
 *VAR_4 = !((VAR_8 & VAR_1) && (VAR_8 & VAR_0));

 return 0;
}
