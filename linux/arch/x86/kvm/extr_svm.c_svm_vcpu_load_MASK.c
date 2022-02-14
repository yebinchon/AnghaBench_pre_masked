
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int ldt; int gs; int fs; int gs_base; } ;
struct vcpu_svm {scalar_t__ vmcb; scalar_t__ tsc_aux; int * host_user_msrs; TYPE_1__ host; scalar_t__ asid_generation; } ;
struct svm_cpu_data {scalar_t__ current_vmcb; } ;
struct TYPE_4__ {scalar_t__ tsc_scaling_ratio; } ;
struct kvm_vcpu {int cpu; TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 struct svm_cpu_data* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_10 ;
 struct vcpu_svm* FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct kvm_vcpu *VAR_11, int VAR_12)
{
 struct vcpu_svm *VAR_13 = FUNC_10(VAR_11);
 struct svm_cpu_data *VAR_14 = FUNC_6(VAR_10, VAR_12);
 int VAR_15;

 if (FUNC_11(VAR_12 != VAR_11->cpu)) {
  VAR_13->asid_generation = 0;
  FUNC_5(VAR_13->vmcb);
 }




 FUNC_8(VAR_7, VAR_13->host.fs);
 FUNC_8(VAR_8, VAR_13->host.gs);
 VAR_13->host.ldt = FUNC_4();

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  FUNC_7(VAR_9[VAR_15], VAR_13->host_user_msrs[VAR_15]);

 if (FUNC_9(VAR_5)) {
  u64 VAR_16 = VAR_11->arch.tsc_scaling_ratio;
  if (VAR_16 != FUNC_0(VAR_6)) {
   FUNC_1(VAR_6, VAR_16);
   FUNC_12(VAR_0, VAR_16);
  }
 }

 if (FUNC_9(VAR_4))
  FUNC_12(VAR_2, VAR_13->tsc_aux);

 if (VAR_14->current_vmcb != VAR_13->vmcb) {
  VAR_14->current_vmcb = VAR_13->vmcb;
  FUNC_3();
 }
 FUNC_2(VAR_11, VAR_12);
}
