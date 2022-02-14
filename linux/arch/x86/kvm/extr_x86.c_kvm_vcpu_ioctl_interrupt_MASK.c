
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_external_vector; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
struct kvm_interrupt {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_5,
        struct kvm_interrupt *VAR_6)
{
 if (VAR_6->irq >= VAR_3)
  return -VAR_1;

 if (!FUNC_0(VAR_5->kvm)) {
  FUNC_2(VAR_5, VAR_6->irq, 0);
  FUNC_1(VAR_4, VAR_5);
  return 0;
 }





 if (FUNC_3(VAR_5->kvm))
  return -VAR_2;

 if (VAR_5->arch.pending_external_vector != -1)
  return -VAR_0;

 VAR_5->arch.pending_external_vector = VAR_6->irq;
 FUNC_1(VAR_4, VAR_5);
 return 0;
}
