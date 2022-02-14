
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int attr; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_1 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_2 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_3 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_4 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_5 (struct kvm*,struct kvm_device_attr*) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_1, struct kvm_device_attr *VAR_2)
{
 int VAR_3 = -VAR_0;

 switch (VAR_2->attr) {
 case 130:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 case 133:
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_4(VAR_1, VAR_2);
  break;
 case 132:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  break;
 case 131:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;
 }
 return VAR_3;
}
