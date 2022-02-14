
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct TYPE_3__ {int avic_vapic_bar; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct vcpu_svm *VAR_2, u64 VAR_3)
{
 VAR_2->vmcb->control.avic_vapic_bar = VAR_3 & VAR_1;
 FUNC_0(VAR_2->vmcb, VAR_0);
}
