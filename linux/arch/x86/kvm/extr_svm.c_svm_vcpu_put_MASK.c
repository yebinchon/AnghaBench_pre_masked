
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int gs; int fs; int ldt; } ;
struct vcpu_svm {int * host_user_msrs; TYPE_3__ host; } ;
struct TYPE_6__ {int host_state_reload; } ;
struct kvm_vcpu {TYPE_2__ stat; } ;
struct TYPE_5__ {int gsbase; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_6)
{
 struct vcpu_svm *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 FUNC_0(VAR_6);

 ++VAR_6->stat.host_state_reload;
 FUNC_1(VAR_7->host.ldt);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_5(VAR_5[VAR_8], VAR_7->host_user_msrs[VAR_8]);
}
