
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntc_data {int n_comp; TYPE_1__* comp; } ;
struct TYPE_2__ {unsigned int ohm; } ;



__attribute__((used)) static void FUNC_0(struct ntc_data *VAR_0, unsigned int VAR_1,
   int *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 if (VAR_1 >= VAR_0->comp[0].ohm) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  return;
 }
 if (VAR_1 <= VAR_0->comp[VAR_0->n_comp - 1].ohm) {
  *VAR_2 = VAR_0->n_comp - 1;
  *VAR_3 = VAR_0->n_comp - 1;
  return;
 }


 VAR_4 = 0;
 VAR_5 = VAR_0->n_comp;
 while (VAR_4 < VAR_5) {
  VAR_6 = VAR_4 + (VAR_5 - VAR_4) / 2;
  if (VAR_1 >= VAR_0->comp[VAR_6].ohm) {
   VAR_5 = VAR_6;
  } else {
   VAR_4 = VAR_6 + 1;






   if (VAR_1 >= VAR_0->comp[VAR_4].ohm)
    VAR_5 = VAR_4;
  }




 }




 *VAR_2 = VAR_5;
 if (VAR_1 == VAR_0->comp[VAR_5].ohm)
  *VAR_3 = VAR_5;
 else
  *VAR_3 = VAR_5 - 1;
}
