
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu_hv_synic {int msg_page; int evt_page; int control; } ;
struct TYPE_6__ {int msg_page; int evt_page; int control; int msr; } ;
struct TYPE_7__ {TYPE_2__ synic; } ;
struct TYPE_8__ {TYPE_3__ u; int type; } ;
struct kvm_vcpu_hv {TYPE_4__ exit; } ;
struct TYPE_5__ {struct kvm_vcpu_hv hyperv; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_1 (struct kvm_vcpu_hv_synic*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu_hv_synic *VAR_2, u32 VAR_3)
{
 struct kvm_vcpu *VAR_4 = FUNC_1(VAR_2);
 struct kvm_vcpu_hv *VAR_5 = &VAR_4->arch.hyperv;

 VAR_5->exit.type = VAR_0;
 VAR_5->exit.u.synic.msr = VAR_3;
 VAR_5->exit.u.synic.control = VAR_2->control;
 VAR_5->exit.u.synic.evt_page = VAR_2->evt_page;
 VAR_5->exit.u.synic.msg_page = VAR_2->msg_page;

 FUNC_0(VAR_1, VAR_4);
}
