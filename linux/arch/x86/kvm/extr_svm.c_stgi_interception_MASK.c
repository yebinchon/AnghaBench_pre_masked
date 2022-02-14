
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vcpu_svm*) ;
 scalar_t__ FUNC_5 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_6(struct vcpu_svm *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_2))
  return 1;





 if (FUNC_5(VAR_2))
  FUNC_0(VAR_2, VAR_0);

 VAR_3 = FUNC_3(&VAR_2->vcpu);
 FUNC_2(VAR_1, &VAR_2->vcpu);

 FUNC_1(VAR_2);

 return VAR_3;
}
