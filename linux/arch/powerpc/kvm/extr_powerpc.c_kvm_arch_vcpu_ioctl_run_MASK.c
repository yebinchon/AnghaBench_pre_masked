
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {scalar_t__ mmio_vsx_copy_nums; scalar_t__ mmio_vmx_copy_nums; scalar_t__ epr_needed; scalar_t__ hcall_needed; scalar_t__ osi_needed; int mmio_vmx_offset; int mmio_vsx_offset; } ;
struct kvm_vcpu {int mmio_needed; TYPE_4__ arch; int mmio_is_write; } ;
struct TYPE_7__ {int epr; } ;
struct TYPE_6__ {int * args; int ret; } ;
struct TYPE_5__ {int * gprs; } ;
struct kvm_run {scalar_t__ immediate_exit; TYPE_3__ epr; TYPE_2__ papr_hcall; TYPE_1__ osi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int,int ) ;
 int FUNC_7 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;

int FUNC_10(struct kvm_vcpu *VAR_2, struct kvm_run *VAR_3)
{
 int VAR_4;

 FUNC_8(VAR_2);

 if (VAR_2->mmio_needed) {
  VAR_2->mmio_needed = 0;
  if (!VAR_2->mmio_is_write)
   FUNC_2(VAR_2, VAR_3);
 } else if (VAR_2->arch.osi_needed) {
  u64 *VAR_5 = VAR_3->osi.gprs;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
   FUNC_6(VAR_2, VAR_6, VAR_5[VAR_6]);
  VAR_2->arch.osi_needed = 0;
 } else if (VAR_2->arch.hcall_needed) {
  int VAR_7;

  FUNC_6(VAR_2, 3, VAR_3->papr_hcall.ret);
  for (VAR_7 = 0; VAR_7 < 9; ++VAR_7)
   FUNC_6(VAR_2, 4 + VAR_7, VAR_3->papr_hcall.args[VAR_7]);
  VAR_2->arch.hcall_needed = 0;





 }

 FUNC_0(VAR_2);

 if (VAR_3->immediate_exit)
  VAR_4 = -VAR_0;
 else
  VAR_4 = FUNC_7(VAR_3, VAR_2);

 FUNC_1(VAR_2);




 FUNC_9(VAR_2);
 return VAR_4;
}
