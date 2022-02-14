
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcb {int dummy; } ;
struct TYPE_2__ {struct vmcb* hsave; } ;
struct vcpu_svm {struct vmcb* vmcb; TYPE_1__ nested; int vcpu; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline struct vmcb *FUNC_1(struct vcpu_svm *VAR_0)
{
 if (FUNC_0(&VAR_0->vcpu))
  return VAR_0->nested.hsave;
 else
  return VAR_0->vmcb;
}
