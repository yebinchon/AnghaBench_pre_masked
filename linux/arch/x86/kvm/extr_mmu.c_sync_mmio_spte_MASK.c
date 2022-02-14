
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ gfn_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int *,scalar_t__,unsigned int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_0, u64 *VAR_1, gfn_t VAR_2,
      unsigned VAR_3, int *VAR_4)
{
 if (FUNC_4(FUNC_1(*VAR_1))) {
  if (VAR_2 != FUNC_0(*VAR_1)) {
   FUNC_3(VAR_1);
   return 1;
  }

  (*VAR_4)++;
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  return 1;
 }

 return 0;
}
