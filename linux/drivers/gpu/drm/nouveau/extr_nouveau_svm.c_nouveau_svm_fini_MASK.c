
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_svm {int dummy; } ;
struct nouveau_drm {struct nouveau_svm* svm; } ;


 int FUNC_0 (struct nouveau_svm*) ;
 int FUNC_1 (struct nouveau_svm*,int ) ;

void
FUNC_2(struct nouveau_drm *VAR_0)
{
 struct nouveau_svm *VAR_1 = VAR_0->svm;
 if (VAR_1) {
  FUNC_1(VAR_1, 0);
  FUNC_0(VAR_0->svm);
  VAR_0->svm = ((void*)0);
 }
}
