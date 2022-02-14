
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_lradc_data {scalar_t__ chan0_keycode; int vref; int chan0_map_count; scalar_t__ base; int input; TYPE_1__* chan0_map; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int keycode; scalar_t__ voltage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct sun4i_lradc_data *VAR_7 = VAR_6;
 u32 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14 = 0xffffffff;

 VAR_9 = FUNC_3(VAR_7->base + VAR_4);






 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_7->input, VAR_7->chan0_keycode, 0);
  VAR_7->chan0_keycode = 0;
 }

 if ((VAR_9 & VAR_0) && VAR_7->chan0_keycode == 0) {
  VAR_10 = FUNC_3(VAR_7->base + VAR_3) & 0x3f;
  VAR_11 = VAR_10 * VAR_7->vref / 63;

  for (VAR_8 = 0; VAR_8 < VAR_7->chan0_map_count; VAR_8++) {
   VAR_12 = FUNC_0(VAR_7->chan0_map[VAR_8].voltage - VAR_11);
   if (VAR_12 < VAR_14) {
    VAR_14 = VAR_12;
    VAR_13 = VAR_7->chan0_map[VAR_8].keycode;
   }
  }

  VAR_7->chan0_keycode = VAR_13;
  FUNC_1(VAR_7->input, VAR_7->chan0_keycode, 1);
 }

 FUNC_2(VAR_7->input);

 FUNC_4(VAR_9, VAR_7->base + VAR_4);

 return VAR_2;
}
