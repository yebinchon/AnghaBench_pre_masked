
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int attr; scalar_t__ flags; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_1 (struct kvm*,struct kvm_device_attr*) ;
 int FUNC_2 (struct kvm*,struct kvm_device_attr*) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_2, struct kvm_device_attr *VAR_3)
{
 int VAR_4;

 if (VAR_3->flags)
  return -VAR_0;

 switch (VAR_3->attr) {
 case 130:
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  break;
 default:
  VAR_4 = -VAR_1;
  break;
 }
 return VAR_4;
}
