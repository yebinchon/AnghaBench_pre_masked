
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmstb_gisb_arb_device {int* gisb_offsets; scalar_t__ base; scalar_t__ big_endian; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct brcmstb_gisb_arb_device *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->gisb_offsets[VAR_2];

 if (VAR_3 < 0) {

  if (VAR_2 == VAR_0)
   return 1;
  else
   return 0;
 }

 if (VAR_1->big_endian)
  return FUNC_1(VAR_1->base + VAR_3);
 else
  return FUNC_0(VAR_1->base + VAR_3);
}
