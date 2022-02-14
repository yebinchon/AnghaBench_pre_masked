
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct nct7904_data {int tcpu_mask; int has_dts; } ;


 int FUNC_0 (int) ;
__attribute__((used)) static umode_t FUNC_1(const void *VAR_0, u32 VAR_1, int VAR_2)
{
 const struct nct7904_data *VAR_3 = VAR_0;

 switch (VAR_1) {
 case 131:
 case 134:
 case 128:
  if (VAR_2 < 5) {
   if (VAR_3->tcpu_mask & FUNC_0(VAR_2))
    return 0444;
  } else {
   if (VAR_3->has_dts & FUNC_0(VAR_2 - 5))
    return 0444;
  }
  break;
 case 130:
 case 129:
 case 133:
 case 132:
  if (VAR_2 < 5) {
   if (VAR_3->tcpu_mask & FUNC_0(VAR_2))
    return 0644;
  } else {
   if (VAR_3->has_dts & FUNC_0(VAR_2 - 5))
    return 0644;
  }
  break;
 default:
  break;
 }

 return 0;
}
