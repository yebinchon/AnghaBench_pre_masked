
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_s390_irq {int dummy; } ;
struct kvm_s390_interrupt_info {int dummy; } ;
struct kvm_device_attr {int attr; int addr; } ;
struct kvm_device {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct kvm_s390_interrupt_info*) ;
 int FUNC_1 (struct kvm_s390_interrupt_info*,int) ;
 int FUNC_2 (struct kvm_s390_interrupt_info*) ;
 struct kvm_s390_interrupt_info* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_device *VAR_4,
    struct kvm_device_attr *VAR_5)
{
 struct kvm_s390_interrupt_info *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = VAR_5->attr;

 if (VAR_8 % sizeof(struct kvm_s390_irq) != 0)
  return -VAR_0;
 else if (VAR_8 > VAR_3)
  return -VAR_0;

 while (VAR_8 >= sizeof(struct kvm_s390_irq)) {
  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   return -VAR_1;

  VAR_7 = FUNC_1(VAR_6, VAR_5->addr);
  if (VAR_7) {
   FUNC_2(VAR_6);
   return VAR_7;
  }
  VAR_7 = FUNC_0(VAR_4->kvm, VAR_6);
  if (VAR_7) {
   FUNC_2(VAR_6);
   return VAR_7;
  }
  VAR_8 -= sizeof(struct kvm_s390_irq);
  VAR_5->addr += sizeof(struct kvm_s390_irq);
 }

 return VAR_7;
}
