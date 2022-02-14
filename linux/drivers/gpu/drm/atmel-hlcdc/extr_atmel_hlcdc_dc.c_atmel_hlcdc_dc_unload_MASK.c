
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dev; struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_dc {int wq; TYPE_2__* hlcdc; TYPE_1__* desc; } ;
struct TYPE_4__ {int sys_clk; int periph_clk; } ;
struct TYPE_3__ {scalar_t__ fixed_clksrc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_0)
{
 struct atmel_hlcdc_dc *VAR_1 = VAR_0->dev_private;

 FUNC_6(VAR_1->wq);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_5(VAR_0);

 FUNC_8(VAR_0->dev);
 FUNC_3(VAR_0);
 FUNC_9(VAR_0->dev);

 VAR_0->dev_private = ((void*)0);

 FUNC_7(VAR_0->dev);
 FUNC_0(VAR_1->hlcdc->periph_clk);
 if (VAR_1->desc->fixed_clksrc)
  FUNC_0(VAR_1->hlcdc->sys_clk);
 FUNC_1(VAR_1->wq);
}
