
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int host_apf_reason; } ;
struct TYPE_4__ {int l1tf_flush_l1d; TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ,char*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct kvm_vcpu *VAR_0, u64 VAR_1,
    u64 VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5 = 1;

 VAR_0->arch.l1tf_flush_l1d = 1;
 switch (VAR_0->arch.apf.host_apf_reason) {
 default:
  FUNC_7(VAR_2, VAR_1);

  if (FUNC_2(VAR_0))
   FUNC_4(VAR_0, VAR_2);
  VAR_5 = FUNC_3(VAR_0, VAR_2, VAR_1, VAR_3,
    VAR_4);
  break;
 case 129:
  VAR_0->arch.apf.host_apf_reason = 0;
  FUNC_5();
  FUNC_0(VAR_2, 0);
  FUNC_6();
  break;
 case 128:
  VAR_0->arch.apf.host_apf_reason = 0;
  FUNC_5();
  FUNC_1(VAR_2);
  FUNC_6();
  break;
 }
 return VAR_5;
}
