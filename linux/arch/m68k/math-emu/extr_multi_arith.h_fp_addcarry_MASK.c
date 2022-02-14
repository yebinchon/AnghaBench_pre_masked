
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* m32; scalar_t__ m64; } ;
struct fp_ext {int exp; int lowmant; TYPE_1__ mant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct fp_ext *VAR_2)
{
 if (++VAR_2->exp == 0x7fff) {
  if (VAR_2->mant.m64)
   FUNC_0(VAR_0);
  VAR_2->mant.m64 = 0;
  FUNC_0(VAR_1);
  return 0;
 }
 VAR_2->lowmant = (VAR_2->mant.m32[1] << 7) | (VAR_2->lowmant ? 1 : 0);
 VAR_2->mant.m32[1] = (VAR_2->mant.m32[1] >> 1) |
      (VAR_2->mant.m32[0] << 31);
 VAR_2->mant.m32[0] = (VAR_2->mant.m32[0] >> 1) | 0x80000000;

 return 1;
}
