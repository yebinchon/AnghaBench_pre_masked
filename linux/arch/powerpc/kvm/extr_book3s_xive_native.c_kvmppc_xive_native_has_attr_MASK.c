
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int FUNC_0(struct kvm_device *VAR_3,
           struct kvm_device_attr *VAR_4)
{
 switch (VAR_4->group) {
 case 133:
  switch (VAR_4->attr) {
  case 128:
  case 134:
   return 0;
  }
  break;
 case 131:
 case 130:
 case 129:
  if (VAR_4->attr >= VAR_1 &&
      VAR_4->attr < VAR_2)
   return 0;
  break;
 case 132:
  return 0;
 }
 return -VAR_0;
}
