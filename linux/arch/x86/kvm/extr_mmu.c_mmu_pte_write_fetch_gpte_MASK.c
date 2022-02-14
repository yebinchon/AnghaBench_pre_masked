
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,scalar_t__*,int) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_0, gpa_t *VAR_1,
        int *VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;






 if (FUNC_0(VAR_0) && *VAR_2 == 4) {

  *VAR_1 &= ~(gpa_t)7;
  *VAR_2 = 8;
 }

 if (*VAR_2 == 4 || *VAR_2 == 8) {
  VAR_4 = FUNC_1(VAR_0, *VAR_1, &VAR_3, *VAR_2);
  if (VAR_4)
   VAR_3 = 0;
 }

 return VAR_3;
}
