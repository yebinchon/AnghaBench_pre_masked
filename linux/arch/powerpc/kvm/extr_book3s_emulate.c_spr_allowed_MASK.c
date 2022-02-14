
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ papr_enabled; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum priv_level { ____Placeholder_priv_level } priv_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_3, enum priv_level VAR_4)
{

 if (VAR_3->arch.papr_enabled && (VAR_4 > VAR_2))
  return 0;


 if ((FUNC_0(VAR_3) & VAR_0) && VAR_4 > VAR_1)
  return 0;

 return 1;
}
