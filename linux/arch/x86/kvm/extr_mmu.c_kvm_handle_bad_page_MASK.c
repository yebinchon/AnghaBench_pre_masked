
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ kvm_pfn_t ;
typedef int gfn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_6, gfn_t VAR_7, kvm_pfn_t VAR_8)
{





 if (VAR_8 == VAR_2)
  return VAR_3;

 if (VAR_8 == VAR_1) {
  FUNC_0(FUNC_1(VAR_6, VAR_7), VAR_5);
  return VAR_4;
 }

 return -VAR_0;
}
