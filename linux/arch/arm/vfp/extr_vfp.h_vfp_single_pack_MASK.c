
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_single {int sign; int exponent; int significand; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline s32 FUNC_0(struct vfp_single *VAR_2)
{
 u32 VAR_3;
 VAR_3 = (VAR_2->sign << 16) +
       (VAR_2->exponent << VAR_1) +
       (VAR_2->significand >> VAR_0);
 return (s32)VAR_3;
}
