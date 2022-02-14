
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long long intercept; int exit_required; } ;
struct vcpu_svm {TYPE_3__ nested; TYPE_2__* vmcb; int vcpu; } ;
struct TYPE_4__ {int exit_code; } ;
struct TYPE_5__ {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct vcpu_svm *VAR_2)
{
 if (!FUNC_0(&VAR_2->vcpu))
  return 1;

 if (!(VAR_2->nested.intercept & (1ULL << VAR_0)))
  return 1;

 VAR_2->vmcb->control.exit_code = VAR_1;
 VAR_2->nested.exit_required = 1;

 return 0;
}
