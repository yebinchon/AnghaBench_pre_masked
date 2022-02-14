
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_operation_ctx {int member_0; int member_1; } ;
struct nouveau_bo {int placement; int bo; } ;


 int FUNC_0 (struct nouveau_bo*) ;
 int FUNC_1 (int *,int *,struct ttm_operation_ctx*) ;

int
FUNC_2(struct nouveau_bo *VAR_0, bool VAR_1,
      bool VAR_2)
{
 struct ttm_operation_ctx VAR_3 = { VAR_1, VAR_2 };
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_0->bo, &VAR_0->placement, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_0);

 return 0;
}
