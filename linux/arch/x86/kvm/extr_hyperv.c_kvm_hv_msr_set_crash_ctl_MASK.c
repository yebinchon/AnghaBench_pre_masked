
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_hv {int hv_crash_ctl; int * hv_crash_param; } ;
struct TYPE_3__ {struct kvm_hv hyperv; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2, u64 VAR_3, bool VAR_4)
{
 struct kvm_hv *VAR_5 = &VAR_2->kvm->arch.hyperv;

 if (VAR_4)
  VAR_5->hv_crash_ctl = VAR_3 & VAR_0;

 if (!VAR_4 && (VAR_3 & VAR_0)) {

  FUNC_1(VAR_2, "hv crash (0x%llx 0x%llx 0x%llx 0x%llx 0x%llx)\n",
     VAR_5->hv_crash_param[0],
     VAR_5->hv_crash_param[1],
     VAR_5->hv_crash_param[2],
     VAR_5->hv_crash_param[3],
     VAR_5->hv_crash_param[4]);


  FUNC_0(VAR_1, VAR_2);
 }

 return 0;
}
