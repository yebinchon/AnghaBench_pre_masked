
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int io_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct vcpu_svm {struct kvm_vcpu vcpu; TYPE_3__* vmcb; int next_rip; } ;
struct TYPE_5__ {int exit_info_1; int exit_info_2; } ;
struct TYPE_6__ {TYPE_2__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct vcpu_svm *VAR_4)
{
 struct kvm_vcpu *VAR_5 = &VAR_4->vcpu;
 u32 VAR_6 = VAR_4->vmcb->control.exit_info_1;
 int VAR_7, VAR_8, VAR_9;
 unsigned VAR_10;

 ++VAR_4->vcpu.stat.io_exits;
 VAR_9 = (VAR_6 & VAR_2) != 0;
 VAR_8 = (VAR_6 & VAR_3) != 0;
 if (VAR_9)
  return FUNC_0(VAR_5, 0);

 VAR_10 = VAR_6 >> 16;
 VAR_7 = (VAR_6 & VAR_0) >> VAR_1;
 VAR_4->next_rip = VAR_4->vmcb->control.exit_info_2;

 return FUNC_1(&VAR_4->vcpu, VAR_7, VAR_10, VAR_8);
}
