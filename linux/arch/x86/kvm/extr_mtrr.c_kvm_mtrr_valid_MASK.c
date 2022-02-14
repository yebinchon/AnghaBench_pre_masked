
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

bool FUNC_6(struct kvm_vcpu *VAR_5, u32 VAR_6, u64 VAR_7)
{
 int VAR_8;
 u64 VAR_9;

 if (!FUNC_4(VAR_6))
  return 0;

 if (VAR_6 == VAR_1) {
  return FUNC_3(VAR_7);
 } else if (VAR_6 == VAR_2) {
  if (VAR_7 & ~0xcff)
   return 0;
  return FUNC_5(VAR_7 & 0xff);
 } else if (VAR_6 >= VAR_4 && VAR_6 <= VAR_3) {
  for (VAR_8 = 0; VAR_8 < 8 ; VAR_8++)
   if (!FUNC_5((VAR_7 >> (VAR_8 * 8)) & 0xff))
    return 0;
  return 1;
 }


 FUNC_0(!(VAR_6 >= 0x200 && VAR_6 < 0x200 + 2 * VAR_0));

 VAR_9 = (~0ULL) << FUNC_1(VAR_5);
 if ((VAR_6 & 1) == 0) {

  if (!FUNC_5(VAR_7 & 0xff))
   return 0;
  VAR_9 |= 0xf00;
 } else

  VAR_9 |= 0x7ff;
 if (VAR_7 & VAR_9) {
  FUNC_2(VAR_5, 0);
  return 0;
 }

 return 1;
}
