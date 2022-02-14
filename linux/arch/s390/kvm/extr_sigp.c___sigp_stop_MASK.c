
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int vcpu_id; } ;
struct kvm_s390_irq {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3, struct kvm_vcpu *VAR_4)
{
 struct kvm_s390_irq VAR_5 = {
  .type = VAR_1,
 };
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6 == -VAR_0)
  VAR_6 = VAR_2;
 else if (VAR_6 == 0)
  FUNC_0(VAR_3, 4, "sent sigp stop to cpu %x",
      VAR_4->vcpu_id);

 return VAR_6;
}
