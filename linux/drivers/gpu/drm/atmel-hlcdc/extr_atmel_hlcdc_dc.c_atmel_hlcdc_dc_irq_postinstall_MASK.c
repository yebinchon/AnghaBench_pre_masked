
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_dc {TYPE_1__* hlcdc; scalar_t__* layers; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2)
{
 struct atmel_hlcdc_dc *VAR_3 = VAR_2->dev_private;
 unsigned int VAR_4 = 0;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->layers[VAR_5])
   VAR_4 |= FUNC_0(VAR_5);
 }

 FUNC_1(VAR_3->hlcdc->regmap, VAR_0, VAR_4);

 return 0;
}
