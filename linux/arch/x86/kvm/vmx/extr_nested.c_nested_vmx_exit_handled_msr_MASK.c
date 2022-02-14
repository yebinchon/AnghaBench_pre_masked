
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmcs12 {scalar_t__ msr_bitmap; } ;
struct kvm_vcpu {int dummy; } ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,scalar_t__,unsigned char*,int) ;
 int FUNC_2 (struct vmcs12*,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_2,
 struct vmcs12 *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2);
 gpa_t VAR_6;

 if (!FUNC_2(VAR_3, VAR_0))
  return 1;






 VAR_6 = VAR_3->msr_bitmap;
 if (VAR_4 == VAR_1)
  VAR_6 += 2048;
 if (VAR_5 >= 0xc0000000) {
  VAR_5 -= 0xc0000000;
  VAR_6 += 1024;
 }


 if (VAR_5 < 1024*8) {
  unsigned char VAR_7;
  if (FUNC_1(VAR_2, VAR_6 + VAR_5/8, &VAR_7, 1))
   return 1;
  return 1 & (VAR_7 >> (VAR_5 & 7));
 } else
  return 1;
}
