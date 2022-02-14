
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int cr0; int xcr0; TYPE_3__* guest_fpu; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {int xcomp_bv; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
struct TYPE_10__ {TYPE_2__ xsave; } ;
struct TYPE_8__ {TYPE_5__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_5)
{
 FUNC_1(&VAR_5->arch.guest_fpu->state);
 if (FUNC_0(VAR_1))
  VAR_5->arch.guest_fpu->state.xsave.header.xcomp_bv =
   VAR_4 | VAR_3;




 VAR_5->arch.xcr0 = VAR_2;

 VAR_5->arch.cr0 |= VAR_0;
}
