
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_cs_db_l_bits ) (struct kvm_vcpu*,int*,int*) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,int*,int*) ;

__attribute__((used)) static inline bool FUNC_2(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;
 VAR_0->get_cs_db_l_bits(VAR_1, &VAR_2, &VAR_3);
 return VAR_3;
}
