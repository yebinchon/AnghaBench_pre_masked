
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct x86_emulate_ctxt {int eflags; int eip; } ;
struct TYPE_6__ {struct x86_emulate_ctxt emulate_ctxt; } ;
struct kvm_vcpu {TYPE_2__* run; TYPE_3__ arch; } ;
struct TYPE_4__ {scalar_t__ ndata; int suberror; } ;
struct TYPE_5__ {TYPE_1__ internal; int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int ,int,int,int,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

int FUNC_5(struct kvm_vcpu *VAR_3, u16 VAR_4, int VAR_5,
      int VAR_6, bool VAR_7, u32 VAR_8)
{
 struct x86_emulate_ctxt *VAR_9 = &VAR_3->arch.emulate_ctxt;
 int VAR_10;

 FUNC_1(VAR_3);

 VAR_10 = FUNC_0(VAR_9, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
 if (VAR_10) {
  VAR_3->run->exit_reason = VAR_0;
  VAR_3->run->internal.suberror = VAR_1;
  VAR_3->run->internal.ndata = 0;
  return 0;
 }

 FUNC_3(VAR_3, VAR_9->eip);
 FUNC_4(VAR_3, VAR_9->eflags);
 FUNC_2(VAR_2, VAR_3);
 return 1;
}
