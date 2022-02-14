
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ccu_mux_internal {int shift; int width; int n_predivs; int n_var_predivs; TYPE_2__* var_predivs; TYPE_1__* fixed_predivs; } ;
struct ccu_common {int features; int prediv; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_4__ {int index; int shift; int width; } ;
struct TYPE_3__ {int index; int div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct ccu_common *VAR_3,
         struct ccu_mux_internal *VAR_4,
         int VAR_5)
{
 u16 VAR_6 = 1;
 u32 VAR_7;

 if (!((VAR_3->features & VAR_1) ||
       (VAR_3->features & VAR_2) ||
       (VAR_3->features & VAR_0)))
  return 1;

 if (VAR_3->features & VAR_0)
  return VAR_3->prediv;

 VAR_7 = FUNC_0(VAR_3->base + VAR_3->reg);
 if (VAR_5 < 0) {
  VAR_5 = VAR_7 >> VAR_4->shift;
  VAR_5 &= (1 << VAR_4->width) - 1;
 }

 if (VAR_3->features & VAR_1) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_4->n_predivs; VAR_8++)
   if (VAR_5 == VAR_4->fixed_predivs[VAR_8].index)
    VAR_6 = VAR_4->fixed_predivs[VAR_8].div;
 }

 if (VAR_3->features & VAR_2) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_4->n_var_predivs; VAR_9++)
   if (VAR_5 == VAR_4->var_predivs[VAR_9].index) {
    u8 VAR_10;

    VAR_10 = VAR_7 >> VAR_4->var_predivs[VAR_9].shift;
    VAR_10 &= (1 << VAR_4->var_predivs[VAR_9].width) - 1;
    VAR_6 = VAR_10 + 1;
   }
 }

 return VAR_6;
}
