
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_device_attr {int group; int attr; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int has_cmma; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_2, struct kvm_device_attr *VAR_3)
{
 int VAR_4;

 switch (VAR_3->group) {
 case 134:
  switch (VAR_3->attr) {
  case 133:
  case 135:
   VAR_4 = VAR_1.has_cmma ? 0 : -VAR_0;
   break;
  case 132:
   VAR_4 = 0;
   break;
  default:
   VAR_4 = -VAR_0;
   break;
  }
  break;
 case 130:
  switch (VAR_3->attr) {
  case 128:
  case 129:
   VAR_4 = 0;
   break;
  default:
   VAR_4 = -VAR_0;
   break;
  }
  break;
 case 146:
  switch (VAR_3->attr) {
  case 145:
  case 149:
  case 144:
  case 148:
  case 147:
  case 143:
   VAR_4 = 0;
   break;
  default:
   VAR_4 = -VAR_0;
   break;
  }
  break;
 case 142:
  switch (VAR_3->attr) {
  case 138:
  case 136:
  case 141:
  case 139:
   VAR_4 = 0;
   break;
  case 137:
  case 140:
   VAR_4 = FUNC_0() ? 0 : -VAR_0;
   break;
  default:
   VAR_4 = -VAR_0;
   break;
  }
  break;
 case 131:
  VAR_4 = 0;
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
