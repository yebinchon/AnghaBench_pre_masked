
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_touchpad_plat {int x_end_stage; int x_start_stage; int y_end_stage; int y_start_stage; } ;
struct ad714x_touchpad_drv {int state; int input; int y_flt_pos; int x_flt_pos; int y_abs_pos; int x_abs_pos; } ;
struct ad714x_chip {unsigned short h_state; unsigned short c_state; int dev; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_touchpad_drv* touchpad; } ;
struct TYPE_3__ {struct ad714x_touchpad_plat* touchpad; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ad714x_chip*,int) ;
 int FUNC_5 (struct ad714x_chip*,int) ;
 int FUNC_6 (struct ad714x_chip*,int) ;
 int FUNC_7 (struct ad714x_chip*,int) ;
 int FUNC_8 (struct ad714x_chip*,int) ;
 int FUNC_9 (struct ad714x_chip*,int) ;
 int FUNC_10 (struct ad714x_chip*,int) ;
 int FUNC_11 (struct ad714x_chip*,int) ;

__attribute__((used)) static void FUNC_12(struct ad714x_chip *VAR_3, int VAR_4)
{
 struct ad714x_touchpad_plat *VAR_5 = &VAR_3->hw->touchpad[VAR_4];
 struct ad714x_touchpad_drv *VAR_6 = &VAR_3->sw->touchpad[VAR_4];
 unsigned short VAR_7, VAR_8;
 unsigned short VAR_9;

 VAR_9 = (((1 << (VAR_5->x_end_stage + 1)) - 1) -
  ((1 << VAR_5->x_start_stage) - 1)) +
  (((1 << (VAR_5->y_end_stage + 1)) - 1) -
  ((1 << VAR_5->y_start_stage) - 1));

 VAR_7 = VAR_3->h_state & VAR_9;
 VAR_8 = VAR_3->c_state & VAR_9;

 switch (VAR_6->state) {
 case 129:
  if (VAR_7) {
   VAR_6->state = 128;



   FUNC_10(VAR_3, VAR_4);
   FUNC_0(VAR_3->dev, "touchpad %d touched\n", VAR_4);
  }
  break;

 case 128:
  if (VAR_8 == VAR_9) {
   FUNC_7(VAR_3, VAR_4);
   FUNC_6(VAR_3, VAR_4);
   if ((!FUNC_9(VAR_3, VAR_4)) &&
    (!FUNC_8(VAR_3, VAR_4))) {
    FUNC_0(VAR_3->dev,
     "touchpad%d, 2 fingers or endpoint\n",
     VAR_4);
    FUNC_4(VAR_3, VAR_4);
    VAR_6->x_flt_pos = VAR_6->x_abs_pos;
    VAR_6->y_flt_pos = VAR_6->y_abs_pos;
    VAR_6->state = 130;
   }
  }
  break;

 case 130:
  if (VAR_8 == VAR_9) {
   if (VAR_7) {
    FUNC_7(VAR_3, VAR_4);
    FUNC_6(VAR_3, VAR_4);
    if ((!FUNC_9(VAR_3, VAR_4))
      && (!FUNC_8(VAR_3, VAR_4))) {
     FUNC_4(VAR_3, VAR_4);
     FUNC_5(VAR_3, VAR_4);
     FUNC_1(VAR_6->input, VAR_0,
      VAR_6->x_flt_pos);
     FUNC_1(VAR_6->input, VAR_1,
      VAR_6->y_flt_pos);
     FUNC_2(VAR_6->input, VAR_2,
      1);
    }
   } else {



    FUNC_11(VAR_3, VAR_4);
    VAR_6->state = 129;
    FUNC_2(VAR_6->input, VAR_2, 0);
    FUNC_0(VAR_3->dev, "touchpad %d released\n",
     VAR_4);
   }
   FUNC_3(VAR_6->input);
  }
  break;

 default:
  break;
 }
}
