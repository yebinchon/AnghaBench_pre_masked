
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_dc {TYPE_1__* hlcdc; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_2)
{
 struct atmel_hlcdc_dc *VAR_3 = VAR_2->dev_private;
 unsigned int VAR_4;

 FUNC_1(VAR_3->hlcdc->regmap, VAR_0, 0xffffffff);
 FUNC_0(VAR_3->hlcdc->regmap, VAR_1, &VAR_4);
}
