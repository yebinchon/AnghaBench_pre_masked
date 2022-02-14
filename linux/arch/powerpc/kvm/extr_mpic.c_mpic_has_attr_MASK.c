
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct kvm_device *VAR_2, struct kvm_device_attr *VAR_3)
{
 switch (VAR_3->group) {
 case 129:
  switch (VAR_3->attr) {
  case 131:
   return 0;
  }

  break;

 case 128:
  return 0;

 case 130:
  if (VAR_3->attr > VAR_1)
   break;

  return 0;
 }

 return -VAR_0;
}
