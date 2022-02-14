
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct qxl_ttm_tt {int ttm; } ;


 int FUNC_0 (struct qxl_ttm_tt*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ttm_tt *VAR_0)
{
 struct qxl_ttm_tt *VAR_1 = (void *)VAR_0;

 FUNC_1(&VAR_1->ttm);
 FUNC_0(VAR_1);
}
