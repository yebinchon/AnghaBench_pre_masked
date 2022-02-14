
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_dc {int * layers; int crtc; TYPE_1__* hlcdc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7;
 struct atmel_hlcdc_dc *VAR_9 = VAR_8->dev_private;
 unsigned long VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 FUNC_3(VAR_9->hlcdc->regmap, VAR_0, &VAR_11);
 FUNC_3(VAR_9->hlcdc->regmap, VAR_1, &VAR_12);
 VAR_10 = VAR_11 & VAR_12;
 if (!VAR_10)
  return VAR_5;

 if (VAR_10 & VAR_3)
  FUNC_1(VAR_9->crtc);

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (FUNC_0(VAR_13) & VAR_10)
   FUNC_2(VAR_9->layers[VAR_13]);
 }

 return VAR_4;
}
