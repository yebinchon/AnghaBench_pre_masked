
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xive {int dummy; } ;
struct kvm_device_attr {int group; int addr; int attr; } ;
struct kvm_device {struct kvmppc_xive* private; } ;


 int VAR_0 ;

 int FUNC_0 (struct kvmppc_xive*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_device *VAR_1, struct kvm_device_attr *VAR_2)
{
 struct kvmppc_xive *VAR_3 = VAR_1->private;


 switch (VAR_2->group) {
 case 128:
  return FUNC_0(VAR_3, VAR_2->attr, VAR_2->addr);
 }
 return -VAR_0;
}
