
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kvm_vcpu {TYPE_5__* run; } ;
struct TYPE_7__ {int fpc; } ;
struct TYPE_8__ {TYPE_1__ fpu; } ;
struct TYPE_12__ {TYPE_2__ thread; } ;
struct TYPE_9__ {int acrs; int fpc; } ;
struct TYPE_10__ {TYPE_3__ regs; } ;
struct TYPE_11__ {TYPE_4__ s; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

int FUNC_3(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{





 FUNC_2();
 VAR_1->run->s.regs.fpc = VAR_0->thread.fpu.fpc;
 FUNC_1(VAR_1->run->s.regs.acrs);

 return FUNC_0(VAR_1, VAR_2);
}
