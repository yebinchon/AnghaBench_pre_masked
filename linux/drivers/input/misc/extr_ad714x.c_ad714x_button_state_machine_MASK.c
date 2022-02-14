
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_chip {int h_state; int l_state; int dev; TYPE_2__* sw; TYPE_1__* hw; } ;
struct ad714x_button_plat {int h_mask; int l_mask; int keycode; } ;
struct ad714x_button_drv {int state; int input; } ;
struct TYPE_4__ {struct ad714x_button_drv* button; } ;
struct TYPE_3__ {struct ad714x_button_plat* button; } ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_button_plat *VAR_2 = &VAR_0->hw->button[VAR_1];
 struct ad714x_button_drv *VAR_3 = &VAR_0->sw->button[VAR_1];

 switch (VAR_3->state) {
 case 128:
  if (((VAR_0->h_state & VAR_2->h_mask) == VAR_2->h_mask) &&
      ((VAR_0->l_state & VAR_2->l_mask) == VAR_2->l_mask)) {
   FUNC_0(VAR_0->dev, "button %d touched\n", VAR_1);
   FUNC_1(VAR_3->input, VAR_2->keycode, 1);
   FUNC_2(VAR_3->input);
   VAR_3->state = 129;
  }
  break;

 case 129:
  if (((VAR_0->h_state & VAR_2->h_mask) != VAR_2->h_mask) ||
      ((VAR_0->l_state & VAR_2->l_mask) != VAR_2->l_mask)) {
   FUNC_0(VAR_0->dev, "button %d released\n", VAR_1);
   FUNC_1(VAR_3->input, VAR_2->keycode, 0);
   FUNC_2(VAR_3->input);
   VAR_3->state = 128;
  }
  break;

 default:
  break;
 }
}
