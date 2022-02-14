
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_ff_private_data {int num_effects; int* effect_ids; } ;



__attribute__((used)) static u8 FUNC_0(struct hidpp_ff_private_data *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_effects; VAR_2++)
  if (VAR_0->effect_ids[VAR_2] == VAR_1)
   return VAR_2+1;

 return 0;
}
