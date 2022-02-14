
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; } ;


 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return FUNC_0(VAR_1);

 VAR_2 = FUNC_2(&VAR_1->vcpu);
 return FUNC_1(&VAR_1->vcpu, VAR_2);
}
