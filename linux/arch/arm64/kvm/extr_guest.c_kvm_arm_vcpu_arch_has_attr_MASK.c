
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int group; } ;


 int VAR_0 ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_device_attr*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_device_attr*) ;

int FUNC_2(struct kvm_vcpu *VAR_1,
          struct kvm_device_attr *VAR_2)
{
 int VAR_3;

 switch (VAR_2->group) {
 case 129:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
