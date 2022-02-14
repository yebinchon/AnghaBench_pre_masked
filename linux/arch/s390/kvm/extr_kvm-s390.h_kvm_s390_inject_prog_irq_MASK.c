
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_s390_pgm_info {int dummy; } ;
struct TYPE_2__ {struct kvm_s390_pgm_info pgm; } ;
struct kvm_s390_irq {TYPE_1__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_vcpu *VAR_1,
        struct kvm_s390_pgm_info *VAR_2)
{
 struct kvm_s390_irq VAR_3 = {
  .type = VAR_0,
  .u.pgm = *VAR_2,
 };

 return FUNC_0(VAR_1, &VAR_3);
}
