
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_single {int sign; int exponent; int significand; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct vfp_single *VAR_1, s32 VAR_2)
{
 u32 VAR_3;

 VAR_1->sign = FUNC_1(VAR_2) >> 16,
 VAR_1->exponent = FUNC_0(VAR_2);

 VAR_3 = (u32) VAR_2;
 VAR_3 = (VAR_3 << (32 - VAR_0)) >> 2;
 if (VAR_1->exponent && VAR_1->exponent != 255)
  VAR_3 |= 0x40000000;
 VAR_1->significand = VAR_3;
}
