
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive {int dummy; } ;
struct kvm_device_attr {int group; int addr; int attr; } ;
struct kvm_device {struct kvmppc_xive* private; } ;


 int VAR_0 ;







 int FUNC_0 (struct kvmppc_xive*) ;
 int FUNC_1 (struct kvmppc_xive*,int ,int ) ;
 int FUNC_2 (struct kvmppc_xive*,int ,int ) ;
 int FUNC_3 (struct kvmppc_xive*,int ,int ) ;
 int FUNC_4 (struct kvmppc_xive*,int ,int ) ;
 int FUNC_5 (struct kvmppc_xive*) ;

__attribute__((used)) static int FUNC_6(struct kvm_device *VAR_1,
           struct kvm_device_attr *VAR_2)
{
 struct kvmppc_xive *VAR_3 = VAR_1->private;

 switch (VAR_2->group) {
 case 133:
  switch (VAR_2->attr) {
  case 128:
   return FUNC_5(VAR_3);
  case 134:
   return FUNC_0(VAR_3);
  }
  break;
 case 131:
  return FUNC_2(VAR_3, VAR_2->attr,
           VAR_2->addr);
 case 130:
  return FUNC_3(VAR_3, VAR_2->attr,
           VAR_2->addr);
 case 132:
  return FUNC_1(VAR_3, VAR_2->attr,
          VAR_2->addr);
 case 129:
  return FUNC_4(VAR_3, VAR_2->attr,
            VAR_2->addr);
 }
 return -VAR_0;
}
