
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef enum instruction_fetch_type { ____Placeholder_instruction_fetch_type } instruction_fetch_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int*,int,int *,int) ;

int FUNC_2(struct kvm_vcpu *VAR_3,
  enum instruction_fetch_type VAR_4, u32 *VAR_5)
{
 ulong VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 if (VAR_4 == VAR_2)
  VAR_6 -= 4;

 VAR_7 = FUNC_1(VAR_3, &VAR_6, sizeof(u32), VAR_5, 0);
 if (VAR_7 == VAR_1)
  return VAR_7;
 else
  return VAR_0;
}
