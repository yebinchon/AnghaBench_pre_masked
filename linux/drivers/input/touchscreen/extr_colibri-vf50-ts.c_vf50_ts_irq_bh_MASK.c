
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf50_touch_device {int min_pressure; int ts_input; int gpio_xm; int gpio_yp; int * channels; int gpio_ym; int gpio_xp; int stop_touchscreen; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct device*,char*,int,int,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct vf50_touch_device*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct vf50_touch_device *VAR_10 = VAR_9;
 struct device *VAR_11 = &VAR_10->pdev->dev;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 bool VAR_17 = 1;


 FUNC_2(VAR_10->gpio_ym, 0);


 FUNC_6(VAR_11);

 while (!VAR_10->stop_touchscreen) {

  VAR_12 = FUNC_0(&VAR_10->channels[0],
    VAR_10->gpio_xp, VAR_10->gpio_xm);
  if (VAR_12 < 0)
   break;


  VAR_13 = FUNC_0(&VAR_10->channels[1],
    VAR_10->gpio_yp, VAR_10->gpio_ym);
  if (VAR_13 < 0)
   break;





  VAR_14 = FUNC_0(&VAR_10->channels[2],
    VAR_10->gpio_yp, VAR_10->gpio_xm);
  if (VAR_14 < 0)
   break;
  VAR_15 = FUNC_0(&VAR_10->channels[3],
    VAR_10->gpio_yp, VAR_10->gpio_xm);
  if (VAR_15 < 0)
   break;


  if (VAR_14 > 64 && VAR_12 > 64) {




   int VAR_18 = (1000 * VAR_12) / VAR_7;

   VAR_16 = (VAR_18 * VAR_15) / VAR_14 - VAR_18;

  } else {
   VAR_16 = 2000;
  }

  VAR_16 = 2000 - VAR_16;
  FUNC_1(VAR_11,
   "Measured values: x: %d, y: %d, z1: %d, z2: %d, p: %d\n",
   VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);





  if (VAR_16 < VAR_10->min_pressure || VAR_16 > 2000)
   break;







  if (VAR_17) {
   VAR_17 = 0;
  } else {




   FUNC_3(VAR_10->ts_input,
     VAR_1, VAR_7 - VAR_12);
   FUNC_3(VAR_10->ts_input,
     VAR_2, VAR_7 - VAR_13);
   FUNC_3(VAR_10->ts_input,
     VAR_0, VAR_16);
   FUNC_4(VAR_10->ts_input, VAR_3, 1);
   FUNC_5(VAR_10->ts_input);
  }

  FUNC_7(VAR_5,
        VAR_4);
 }


 FUNC_3(VAR_10->ts_input, VAR_0, 0);
 FUNC_4(VAR_10->ts_input, VAR_3, 0);
 FUNC_5(VAR_10->ts_input);

 FUNC_8(VAR_10);

 return VAR_6;
}
