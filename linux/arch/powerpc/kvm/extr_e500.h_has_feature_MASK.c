
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmucfg; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum vcpu_ftr { ____Placeholder_vcpu_ftr } vcpu_ftr ;


 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static inline bool FUNC_0(const struct kvm_vcpu *VAR_2,
          enum vcpu_ftr VAR_3)
{
 bool VAR_4;
 switch (VAR_3) {
 case 128:
  VAR_4 = ((VAR_2->arch.mmucfg & VAR_0) == VAR_1);
  break;
 default:
  return 0;
 }
 return VAR_4;
}
