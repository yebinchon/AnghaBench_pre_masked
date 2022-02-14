
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct nct7904_data {int fanin_mask; } ;






__attribute__((used)) static umode_t FUNC_0(const void *VAR_0, u32 VAR_1, int VAR_2)
{
 const struct nct7904_data *VAR_3 = VAR_0;

 switch (VAR_1) {
 case 129:
 case 130:
  if (VAR_3->fanin_mask & (1 << VAR_2))
   return 0444;
  break;
 case 128:
  if (VAR_3->fanin_mask & (1 << VAR_2))
   return 0644;
  break;
 default:
  break;
 }

 return 0;
}
