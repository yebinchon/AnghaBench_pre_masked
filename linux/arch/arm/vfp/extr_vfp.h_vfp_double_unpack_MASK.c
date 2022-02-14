
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vfp_double {int sign; int exponent; int significand; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct vfp_double *VAR_1, s64 VAR_2)
{
 u64 VAR_3;

 VAR_1->sign = FUNC_1(VAR_2) >> 48;
 VAR_1->exponent = FUNC_0(VAR_2);

 VAR_3 = (u64) VAR_2;
 VAR_3 = (VAR_3 << (64 - VAR_0)) >> 2;
 if (VAR_1->exponent && VAR_1->exponent != 2047)
  VAR_3 |= (1ULL << 62);
 VAR_1->significand = VAR_3;
}
