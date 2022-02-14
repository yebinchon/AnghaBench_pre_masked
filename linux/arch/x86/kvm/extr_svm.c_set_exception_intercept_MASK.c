
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int intercept_exceptions; } ;
struct vmcb {TYPE_1__ control; } ;
struct vcpu_svm {int dummy; } ;


 struct vmcb* FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*) ;

__attribute__((used)) static inline void FUNC_2(struct vcpu_svm *VAR_0, int VAR_1)
{
 struct vmcb *VAR_2 = FUNC_0(VAR_0);

 VAR_2->control.intercept_exceptions |= (1U << VAR_1);

 FUNC_1(VAR_0);
}
