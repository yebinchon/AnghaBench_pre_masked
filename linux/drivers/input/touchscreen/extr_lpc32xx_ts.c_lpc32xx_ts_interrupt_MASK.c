
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_tsc {struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct lpc32xx_tsc*) ;
 int FUNC_6 (struct lpc32xx_tsc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 u32 VAR_12, VAR_13[4], VAR_14[4], VAR_15[4];
 int VAR_16;
 struct lpc32xx_tsc *VAR_17 = VAR_11;
 struct input_dev *VAR_18 = VAR_17->dev;

 VAR_12 = FUNC_6(VAR_17, VAR_7);

 if (VAR_12 & VAR_9) {

  FUNC_5(VAR_17);
  return VAR_3;
 }






 VAR_16 = 0;
 while (VAR_16 < 4 &&
        !(FUNC_6(VAR_17, VAR_7) &
   VAR_8)) {
  VAR_12 = FUNC_6(VAR_17, VAR_5);
  VAR_14[VAR_16] = VAR_4 -
   FUNC_0(VAR_12);
  VAR_15[VAR_16] = VAR_4 -
   FUNC_1(VAR_12);
  VAR_13[VAR_16] = VAR_12;
  VAR_16++;
 }


 if (!(VAR_13[3] & VAR_6) && VAR_16 == 4) {

  FUNC_2(VAR_18, VAR_0, (VAR_14[1] + VAR_14[2]) / 2);
  FUNC_2(VAR_18, VAR_1, (VAR_15[1] + VAR_15[2]) / 2);
  FUNC_3(VAR_18, VAR_2, 1);
 } else {
  FUNC_3(VAR_18, VAR_2, 0);
 }

 FUNC_4(VAR_18);

 return VAR_3;
}
