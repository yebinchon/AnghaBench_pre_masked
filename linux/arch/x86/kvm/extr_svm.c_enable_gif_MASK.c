
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int hflags; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_4__ vcpu; TYPE_2__* vmcb; } ;
struct TYPE_5__ {int int_ctl; } ;
struct TYPE_6__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vcpu_svm*) ;

__attribute__((used)) static inline void FUNC_1(struct vcpu_svm *VAR_2)
{
 if (FUNC_0(VAR_2))
  VAR_2->vmcb->control.int_ctl |= VAR_1;
 else
  VAR_2->vcpu.arch.hflags |= VAR_0;
}
