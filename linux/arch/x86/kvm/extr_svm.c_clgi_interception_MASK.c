
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; int vcpu; } ;
struct TYPE_3__ {int int_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (struct vcpu_svm*) ;
 int FUNC_5 (struct vcpu_svm*) ;

__attribute__((used)) static int FUNC_6(struct vcpu_svm *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_2))
  return 1;

 VAR_3 = FUNC_1(&VAR_2->vcpu);

 FUNC_0(VAR_2);


 if (!FUNC_2(&VAR_2->vcpu)) {
  FUNC_5(VAR_2);
  VAR_2->vmcb->control.int_ctl &= ~VAR_1;
  FUNC_3(VAR_2->vmcb, VAR_0);
 }

 return VAR_3;
}
