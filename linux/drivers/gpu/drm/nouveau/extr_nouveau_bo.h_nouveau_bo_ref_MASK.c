
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int bo; } ;


 int VAR_0 ;
 struct nouveau_bo* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int
FUNC_3(struct nouveau_bo *VAR_1, struct nouveau_bo **VAR_2)
{
 struct nouveau_bo *VAR_3;

 if (!VAR_2)
  return -VAR_0;
 VAR_3 = *VAR_2;

 if (VAR_1) {
  FUNC_1(&VAR_1->bo);
  *VAR_2 = FUNC_0(&VAR_1->bo);
 } else {
  *VAR_2 = ((void*)0);
 }
 if (VAR_3)
  FUNC_2(&VAR_3->bo);

 return 0;
}
