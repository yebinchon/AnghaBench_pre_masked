
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {void* hva; } ;
struct TYPE_5__ {int pi_pending; TYPE_3__* pi_desc; TYPE_1__ virtual_apic_map; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {scalar_t__ pir; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*,int*) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;
 void *VAR_4;
 u16 VAR_5;

 if (!VAR_2->nested.pi_desc || !VAR_2->nested.pi_pending)
  return;

 VAR_2->nested.pi_pending = 0;
 if (!FUNC_3(VAR_2->nested.pi_desc))
  return;

 VAR_3 = FUNC_1((unsigned long *)VAR_2->nested.pi_desc->pir, 256);
 if (VAR_3 != 256) {
  VAR_4 = VAR_2->nested.virtual_apic_map.hva;
  if (!VAR_4)
   return;

  FUNC_0(VAR_2->nested.pi_desc->pir,
   VAR_4, &VAR_3);
  VAR_5 = FUNC_5(VAR_0);
  if ((u8)VAR_3 > ((u8)VAR_5 & 0xff)) {
   VAR_5 &= ~0xff;
   VAR_5 |= (u8)VAR_3;
   FUNC_6(VAR_0, VAR_5);
  }
 }

 FUNC_2(VAR_1);
}
