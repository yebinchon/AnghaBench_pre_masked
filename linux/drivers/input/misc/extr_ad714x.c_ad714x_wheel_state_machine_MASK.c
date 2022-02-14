
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_wheel_plat {int end_stage; int start_stage; } ;
struct ad714x_wheel_drv {int state; int input; int flt_pos; int abs_pos; } ;
struct ad714x_chip {unsigned short h_state; unsigned short c_state; int dev; TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_wheel_drv* wheel; } ;
struct TYPE_3__ {struct ad714x_wheel_plat* wheel; } ;


 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (struct ad714x_chip*,int) ;
 int FUNC_1 (struct ad714x_chip*,int) ;
 int FUNC_2 (struct ad714x_chip*,int) ;
 int FUNC_3 (struct ad714x_chip*,int) ;
 int FUNC_4 (struct ad714x_chip*,int) ;
 int FUNC_5 (struct ad714x_chip*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct ad714x_chip *VAR_2, int VAR_3)
{
 struct ad714x_wheel_plat *VAR_4 = &VAR_2->hw->wheel[VAR_3];
 struct ad714x_wheel_drv *VAR_5 = &VAR_2->sw->wheel[VAR_3];
 unsigned short VAR_6, VAR_7;
 unsigned short VAR_8;

 VAR_8 = ((1 << (VAR_4->end_stage + 1)) - 1) - ((1 << VAR_4->start_stage) - 1);

 VAR_6 = VAR_2->h_state & VAR_8;
 VAR_7 = VAR_2->c_state & VAR_8;

 switch (VAR_5->state) {
 case 129:
  if (VAR_6) {
   VAR_5->state = 128;



   FUNC_4(VAR_2, VAR_3);
   FUNC_6(VAR_2->dev, "wheel %d touched\n", VAR_3);
  }
  break;

 case 128:
  if (VAR_7 == VAR_8) {
   FUNC_3(VAR_2, VAR_3);
   FUNC_2(VAR_2, VAR_3);
   FUNC_0(VAR_2, VAR_3);
   VAR_5->flt_pos = VAR_5->abs_pos;
   VAR_5->state = 130;
  }
  break;

 case 130:
  if (VAR_7 == VAR_8) {
   if (VAR_6) {
    FUNC_3(VAR_2, VAR_3);
    FUNC_2(VAR_2, VAR_3);
    FUNC_0(VAR_2, VAR_3);
    FUNC_1(VAR_2, VAR_3);
    FUNC_7(VAR_5->input, VAR_0,
     VAR_5->flt_pos);
    FUNC_8(VAR_5->input, VAR_1, 1);
   } else {



    FUNC_5(VAR_2, VAR_3);
    VAR_5->state = 129;
    FUNC_8(VAR_5->input, VAR_1, 0);

    FUNC_6(VAR_2->dev, "wheel %d released\n",
     VAR_3);
   }
   FUNC_9(VAR_5->input);
  }
  break;

 default:
  break;
 }
}
