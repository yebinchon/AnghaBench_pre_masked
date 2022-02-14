
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svmm {int mirror; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_svmm*) ;

void
FUNC_2(struct nouveau_svmm **VAR_0)
{
 struct nouveau_svmm *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_0(&VAR_1->mirror);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
