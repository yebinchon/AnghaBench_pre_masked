
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_emulate_ctxt {int eflags; int tf; int mode; int eip; } ;
struct TYPE_3__ {int emulate_regs_need_sync_from_vcpu; struct x86_emulate_ctxt emulate_ctxt; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* get_cs_db_l_bits ) (struct kvm_vcpu*,int*,int*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct x86_emulate_ctxt*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_13 ;
 int FUNC_6 (struct kvm_vcpu*,int*,int*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_14)
{
 struct x86_emulate_ctxt *VAR_15 = &VAR_14->arch.emulate_ctxt;
 int VAR_16, VAR_17;

 VAR_13->get_cs_db_l_bits(VAR_14, &VAR_16, &VAR_17);

 VAR_15->eflags = FUNC_4(VAR_14);
 VAR_15->tf = (VAR_15->eflags & VAR_11) != 0;

 VAR_15->eip = FUNC_5(VAR_14);
 VAR_15->mode = (!FUNC_3(VAR_14)) ? VAR_7 :
       (VAR_15->eflags & VAR_12) ? VAR_8 :
       (VAR_17 && FUNC_2(VAR_14)) ? VAR_6 :
       VAR_16 ? VAR_5 :
         VAR_4;
 FUNC_0(VAR_0 != VAR_3);
 FUNC_0(VAR_2 != VAR_10);
 FUNC_0(VAR_1 != VAR_9);

 FUNC_1(VAR_15);
 VAR_14->arch.emulate_regs_need_sync_from_vcpu = 0;
}
