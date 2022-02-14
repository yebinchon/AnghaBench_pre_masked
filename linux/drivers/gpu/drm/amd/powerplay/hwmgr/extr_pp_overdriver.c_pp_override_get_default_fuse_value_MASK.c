
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct phm_fuses_default {scalar_t__ key; int VFT0_b; int VFT0_m2; int VFT0_m1; int VFT1_b; int VFT1_m2; int VFT1_m1; int VFT2_b; int VFT2_m2; int VFT2_m1; } ;


 int VAR_0 ;
 struct phm_fuses_default* VAR_1 ;

int FUNC_0(uint64_t VAR_2,
   struct phm_fuses_default *VAR_3)
{
 const struct phm_fuses_default *VAR_4 = VAR_1;
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_4[VAR_5].key != 0; VAR_5++) {
  if (VAR_2 == VAR_4[VAR_5].key) {
   VAR_3->key = VAR_4[VAR_5].key;
   VAR_3->VFT2_m1 = VAR_4[VAR_5].VFT2_m1;
   VAR_3->VFT2_m2 = VAR_4[VAR_5].VFT2_m2;
   VAR_3->VFT2_b = VAR_4[VAR_5].VFT2_b;
   VAR_3->VFT1_m1 = VAR_4[VAR_5].VFT1_m1;
   VAR_3->VFT1_m2 = VAR_4[VAR_5].VFT1_m2;
   VAR_3->VFT1_b = VAR_4[VAR_5].VFT1_b;
   VAR_3->VFT0_m1 = VAR_4[VAR_5].VFT0_m1;
   VAR_3->VFT0_m2 = VAR_4[VAR_5].VFT0_m2;
   VAR_3->VFT0_b = VAR_4[VAR_5].VFT0_b;
   return 0;
  }
 }

 return -VAR_0;
}
