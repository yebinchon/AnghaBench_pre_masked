
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct nct7904_data {int vsen_mask; } ;


 int FUNC_0 (int) ;




 int* VAR_0 ;

__attribute__((used)) static umode_t FUNC_1(const void *VAR_1, u32 VAR_2, int VAR_3)
{
 const struct nct7904_data *VAR_4 = VAR_1;
 int VAR_5 = VAR_0[VAR_3];

 switch (VAR_2) {
 case 130:
 case 131:
  if (VAR_3 > 0 && (VAR_4->vsen_mask & FUNC_0(VAR_5)))
   return 0444;
  break;
 case 128:
 case 129:
  if (VAR_3 > 0 && (VAR_4->vsen_mask & FUNC_0(VAR_5)))
   return 0644;
  break;
 default:
  break;
 }

 return 0;
}
