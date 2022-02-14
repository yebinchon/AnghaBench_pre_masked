
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int insn_emulation_fail; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_1__ stat; } ;
struct TYPE_8__ {scalar_t__ (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_6__ {scalar_t__ ndata; void* suberror; } ;
struct TYPE_7__ {TYPE_2__ internal; void* exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_7, int VAR_8)
{
 ++VAR_7->stat.insn_emulation_fail;
 FUNC_4(VAR_7);

 if (VAR_8 & VAR_1) {
  FUNC_2(VAR_7, VAR_2, 0);
  return 1;
 }

 if (VAR_8 & VAR_0) {
  VAR_7->run->exit_reason = VAR_3;
  VAR_7->run->internal.suberror = VAR_4;
  VAR_7->run->internal.ndata = 0;
  return 0;
 }

 FUNC_1(VAR_7, VAR_5);

 if (!FUNC_0(VAR_7) && VAR_6->get_cpl(VAR_7) == 0) {
  VAR_7->run->exit_reason = VAR_3;
  VAR_7->run->internal.suberror = VAR_4;
  VAR_7->run->internal.ndata = 0;
  return 0;
 }

 return 1;
}
