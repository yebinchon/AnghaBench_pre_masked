
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {TYPE_1__ pgm; } ;
struct kvm_s390_irq {TYPE_2__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_s390_irq*) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_vcpu *VAR_1, u16 VAR_2)
{
 struct kvm_s390_irq VAR_3 = {
  .type = VAR_0,
  .u.pgm.code = VAR_2,
 };

 return FUNC_0(VAR_1, &VAR_3);
}
