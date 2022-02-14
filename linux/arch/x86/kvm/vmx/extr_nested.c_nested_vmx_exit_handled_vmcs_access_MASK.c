
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u32 ;
struct vmcs12 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,scalar_t__,unsigned long*,int) ;
 int FUNC_2 (struct vmcs12*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_1,
 struct vmcs12 *VAR_2, gpa_t VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;
 u8 VAR_6;

 if (!FUNC_2(VAR_2))
  return 1;


 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_0(VAR_1, (((VAR_4) >> 28) & 0xf));


 if (VAR_5 >> 15)
  return 1;

 if (FUNC_1(VAR_1, VAR_3 + VAR_5/8, &VAR_6, 1))
  return 1;

 return 1 & (VAR_6 >> (VAR_5 & 7));
}
