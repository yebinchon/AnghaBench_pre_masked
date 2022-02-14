
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vfp_double {int significand; scalar_t__ exponent; scalar_t__ sign; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline s64 FUNC_0(struct vfp_double *VAR_2)
{
 u64 VAR_3;
 VAR_3 = ((u64)VAR_2->sign << 48) +
       ((u64)VAR_2->exponent << VAR_1) +
       (VAR_2->significand >> VAR_0);
 return (s64)VAR_3;
}
