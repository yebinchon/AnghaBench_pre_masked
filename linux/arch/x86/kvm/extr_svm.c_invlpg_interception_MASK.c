
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {int vcpu; TYPE_2__* vmcb; } ;
struct TYPE_3__ {int exit_info_1; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct vcpu_svm *VAR_1)
{
 if (!FUNC_3(VAR_0))
  return FUNC_0(&VAR_1->vcpu, 0);

 FUNC_1(&VAR_1->vcpu, VAR_1->vmcb->control.exit_info_1);
 return FUNC_2(&VAR_1->vcpu);
}
