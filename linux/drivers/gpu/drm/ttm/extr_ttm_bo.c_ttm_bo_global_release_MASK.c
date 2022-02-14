
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_bo_global {int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ttm_bo_global*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ttm_bo_global VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct ttm_bo_global *VAR_4 = &VAR_0;

 FUNC_3(&VAR_2);
 if (--VAR_1 > 0)
  goto out;

 FUNC_0(&VAR_4->kobj);
 FUNC_1(&VAR_4->kobj);
 FUNC_5(&VAR_3);
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
out:
 FUNC_4(&VAR_2);
}
