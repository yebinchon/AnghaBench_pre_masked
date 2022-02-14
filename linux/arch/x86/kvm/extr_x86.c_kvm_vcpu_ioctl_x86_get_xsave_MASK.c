
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct kvm_xsave {int * region; } ;
struct TYPE_6__ {TYPE_2__* guest_fpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct fxregs_state {int dummy; } ;
struct TYPE_4__ {int fxsave; } ;
struct TYPE_5__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct kvm_vcpu*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct kvm_xsave*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_3,
      struct kvm_xsave *VAR_4)
{
 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_4, 0, sizeof(struct kvm_xsave));
  FUNC_1((u8 *) VAR_4->region, VAR_3);
 } else {
  FUNC_2(VAR_4->region,
   &VAR_3->arch.guest_fpu->state.fxsave,
   sizeof(struct fxregs_state));
  *(u64 *)&VAR_4->region[VAR_2 / sizeof(u32)] =
   VAR_1;
 }
}
