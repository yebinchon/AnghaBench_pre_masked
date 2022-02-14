
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct titsc {int pen_down; unsigned int x_plate_resistance; int step_mask; int mfd_tscadc; int dev; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct titsc*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned int FUNC_7 (struct titsc*,int ) ;
 int FUNC_8 (struct titsc*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_15, void *VAR_16)
{
 struct titsc *VAR_17 = VAR_16;
 struct input_dev *VAR_18 = VAR_17->input;
 unsigned int VAR_19, VAR_20, VAR_21 = 0;
 unsigned int VAR_22 = 0, VAR_23 = 0;
 unsigned int VAR_24, VAR_25, VAR_26;

 VAR_20 = FUNC_7(VAR_17, VAR_14);
 if (VAR_20 & VAR_7) {
  VAR_17->pen_down = 1;
  VAR_21 |= VAR_7;
  FUNC_5(VAR_17->dev);
 }

 if (VAR_20 & VAR_8) {
  VAR_19 = FUNC_7(VAR_17, VAR_12);
  if (VAR_19 == VAR_3) {
   VAR_17->pen_down = 0;
   FUNC_2(VAR_18, VAR_4, 0);
   FUNC_1(VAR_18, VAR_0, 0);
   FUNC_3(VAR_18);
   FUNC_4(VAR_17->dev);
  } else {
   VAR_17->pen_down = 1;
  }
  VAR_21 |= VAR_8;
 }

 if (VAR_20 & VAR_5)
  VAR_21 |= VAR_5;





 if (VAR_20 & VAR_6) {

  FUNC_6(VAR_17, &VAR_22, &VAR_23, &VAR_24, &VAR_25);

  if (VAR_17->pen_down && VAR_24 != 0 && VAR_25 != 0) {





   VAR_26 = VAR_24 - VAR_25;
   VAR_26 *= VAR_22;
   VAR_26 *= VAR_17->x_plate_resistance;
   VAR_26 /= VAR_25;
   VAR_26 = (VAR_26 + 2047) >> 12;

   if (VAR_26 <= VAR_11) {
    FUNC_1(VAR_18, VAR_1, VAR_22);
    FUNC_1(VAR_18, VAR_2, VAR_23);
    FUNC_1(VAR_18, VAR_0, VAR_26);
    FUNC_2(VAR_18, VAR_4, 1);
    FUNC_3(VAR_18);
   }
  }
  VAR_21 |= VAR_6;
 }
 if (VAR_21) {
  FUNC_8(VAR_17, VAR_13, VAR_21);
  if (VAR_20 & VAR_5)
   FUNC_0(VAR_17->mfd_tscadc,
      VAR_17->step_mask);
  return VAR_9;
 }
 return VAR_10;
}
