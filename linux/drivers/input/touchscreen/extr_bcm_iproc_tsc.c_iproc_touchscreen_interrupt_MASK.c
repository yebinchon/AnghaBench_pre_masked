
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {int fifo_threshold; int max_x; int max_y; scalar_t__ invert_y; scalar_t__ invert_x; } ;
struct iproc_ts_priv {int pen_status; int idev; TYPE_2__* pdev; TYPE_1__ cfg_params; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 struct iproc_ts_priv* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_17, void *VAR_18)
{
 struct platform_device *VAR_19 = VAR_18;
 struct iproc_ts_priv *VAR_20 = FUNC_4(VAR_19);
 u32 VAR_21;
 u32 VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 int VAR_25;
 bool VAR_26 = 0;

 FUNC_5(VAR_20->regmap, VAR_6, &VAR_21);
 VAR_21 &= VAR_14 | VAR_12;
 if (VAR_21 == 0)
  return VAR_9;


 FUNC_6(VAR_20->regmap, VAR_6, VAR_21);

 if (VAR_21 & VAR_14) {
  FUNC_5(VAR_20->regmap, VAR_3, &VAR_20->pen_status);
  if (VAR_20->pen_status & VAR_13)
   VAR_20->pen_status = VAR_10;
  else
   VAR_20->pen_status = VAR_11;

  FUNC_2(VAR_20->idev, VAR_2, VAR_20->pen_status);
  VAR_26 = 1;

  FUNC_0(&VAR_20->pdev->dev,
   "pen up-down (%d)\n", VAR_20->pen_status);
 }


 if (VAR_21 & VAR_12) {
  for (VAR_25 = 0; VAR_25 < VAR_20->cfg_params.fifo_threshold; VAR_25++) {
   FUNC_5(VAR_20->regmap, VAR_4, &VAR_22);
   if (VAR_22 == VAR_7)
    continue;






   VAR_23 = (VAR_22 >> VAR_15) &
    VAR_5;
   VAR_24 = (VAR_22 >> VAR_16) &
    VAR_5;


   VAR_23 = (VAR_23 >> 4) & 0x0FFF;
   VAR_24 = (VAR_24 >> 4) & 0x0FFF;


   if (VAR_20->cfg_params.invert_x)
    VAR_23 = VAR_20->cfg_params.max_x - VAR_23;

   if (VAR_20->cfg_params.invert_y)
    VAR_24 = VAR_20->cfg_params.max_y - VAR_24;

   FUNC_1(VAR_20->idev, VAR_0, VAR_23);
   FUNC_1(VAR_20->idev, VAR_1, VAR_24);
   VAR_26 = 1;

   FUNC_0(&VAR_20->pdev->dev, "xy (0x%x 0x%x)\n", VAR_23, VAR_24);
  }
 }

 if (VAR_26)
  FUNC_3(VAR_20->idev);

 return VAR_8;
}
