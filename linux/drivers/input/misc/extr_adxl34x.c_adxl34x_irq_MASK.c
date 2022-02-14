
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl34x_platform_data {int tap_axis_control; int orientation_enable; scalar_t__ fifo_mode; int * ev_codes_orient_3d; int * ev_codes_orient_2d; scalar_t__ ev_code_act_inactivity; int ev_code_ff; } ;
struct adxl34x {int orient2d_saved; int orient3d_saved; int input; scalar_t__ fifo_delay; int dev; struct adxl34x_platform_data pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adxl34x*,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct adxl34x*,struct adxl34x_platform_data*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct adxl34x*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_20, void *VAR_21)
{
 struct adxl34x *VAR_22 = VAR_21;
 struct adxl34x_platform_data *VAR_23 = &VAR_22->pdata;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;






 if (VAR_23->tap_axis_control & (VAR_16 | VAR_17 | VAR_18))
  VAR_25 = FUNC_0(VAR_22, VAR_1);
 else
  VAR_25 = 0;

 VAR_24 = FUNC_0(VAR_22, VAR_11);

 if (VAR_24 & VAR_9)
  FUNC_5(VAR_22->input, VAR_23->ev_code_ff);

 if (VAR_24 & VAR_14)
  FUNC_7(VAR_22->dev, "OVERRUN\n");

 if (VAR_24 & (VAR_15 | VAR_7)) {
  FUNC_4(VAR_22, VAR_23, VAR_25);

  if (VAR_24 & VAR_7)
   FUNC_4(VAR_22, VAR_23, VAR_25);
 }

 if (VAR_23->ev_code_act_inactivity) {
  if (VAR_24 & VAR_0)
   FUNC_8(VAR_22->input,
      VAR_23->ev_code_act_inactivity, 1);
  if (VAR_24 & VAR_10)
   FUNC_8(VAR_22->input,
      VAR_23->ev_code_act_inactivity, 0);
 }




 if (VAR_23->orientation_enable) {
  VAR_27 = FUNC_0(VAR_22, VAR_13);
  if ((VAR_23->orientation_enable & VAR_4) &&
      (VAR_27 & VAR_2)) {

   VAR_28 = FUNC_1(VAR_27);

   if (VAR_22->orient2d_saved != VAR_28) {
    VAR_22->orient2d_saved = VAR_28;
    FUNC_5(VAR_22->input,
     VAR_23->ev_codes_orient_2d[VAR_28]);
   }
  }

  if ((VAR_23->orientation_enable & VAR_5) &&
      (VAR_27 & VAR_3)) {

   VAR_28 = FUNC_2(VAR_27) - 1;

   if (VAR_22->orient3d_saved != VAR_28) {
    VAR_22->orient3d_saved = VAR_28;
    FUNC_5(VAR_22->input,
     VAR_23->ev_codes_orient_3d[VAR_28]);
   }
  }
 }

 if (VAR_24 & (VAR_6 | VAR_19)) {

  if (VAR_23->fifo_mode)
   VAR_26 = FUNC_3(FUNC_0(VAR_22, VAR_8)) + 1;
  else
   VAR_26 = 1;

  for (; VAR_26 > 0; VAR_26--) {
   FUNC_6(VAR_22);
   if (VAR_22->fifo_delay && (VAR_26 > 1))
    FUNC_10(3);
  }
 }

 FUNC_9(VAR_22->input);

 return VAR_12;
}
