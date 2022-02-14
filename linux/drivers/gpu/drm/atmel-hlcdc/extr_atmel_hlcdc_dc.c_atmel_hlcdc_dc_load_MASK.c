
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {TYPE_10__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct drm_device {TYPE_3__* dev; struct atmel_hlcdc_dc* dev_private; } ;
struct TYPE_13__ {int wait; } ;
struct atmel_hlcdc_dc {int wq; TYPE_9__* hlcdc; TYPE_2__* desc; TYPE_1__ commit; } ;
struct TYPE_16__ {int sys_clk; int periph_clk; int irq; } ;
struct TYPE_14__ {scalar_t__ fixed_clksrc; } ;
struct TYPE_12__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 TYPE_9__* FUNC_6 (TYPE_10__*) ;
 struct atmel_hlcdc_dc* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*,int) ;
 int FUNC_12 (int *) ;
 struct of_device_id* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct platform_device*,struct drm_device*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 struct platform_device* FUNC_19 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_20(struct drm_device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_19(VAR_5->dev);
 const struct of_device_id *VAR_7;
 struct atmel_hlcdc_dc *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_13(VAR_4, VAR_5->dev->parent->of_node);
 if (!VAR_7) {
  FUNC_5(&VAR_6->dev, "invalid compatible string\n");
  return -VAR_1;
 }

 if (!VAR_7->data) {
  FUNC_5(&VAR_6->dev, "invalid hlcdc description\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_7(VAR_5->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->wq = FUNC_0("atmel-hlcdc-dc", 0);
 if (!VAR_8->wq)
  return -VAR_2;

 FUNC_12(&VAR_8->commit.wait);
 VAR_8->desc = VAR_7->data;
 VAR_8->hlcdc = FUNC_6(VAR_5->dev->parent);
 VAR_5->dev_private = VAR_8;

 if (VAR_8->desc->fixed_clksrc) {
  VAR_9 = FUNC_3(VAR_8->hlcdc->sys_clk);
  if (VAR_9) {
   FUNC_5(VAR_5->dev, "failed to enable sys_clk\n");
   goto err_destroy_wq;
  }
 }

 VAR_9 = FUNC_3(VAR_8->hlcdc->periph_clk);
 if (VAR_9) {
  FUNC_5(VAR_5->dev, "failed to enable periph_clk\n");
  goto err_sys_clk_disable;
 }

 FUNC_16(VAR_5->dev);

 VAR_9 = FUNC_11(VAR_5, 1);
 if (VAR_9 < 0) {
  FUNC_5(VAR_5->dev, "failed to initialize vblank\n");
  goto err_periph_clk_disable;
 }

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 < 0) {
  FUNC_5(VAR_5->dev, "failed to initialize mode setting\n");
  goto err_periph_clk_disable;
 }

 FUNC_10(VAR_5);

 FUNC_17(VAR_5->dev);
 VAR_9 = FUNC_8(VAR_5, VAR_8->hlcdc->irq);
 FUNC_18(VAR_5->dev);
 if (VAR_9 < 0) {
  FUNC_5(VAR_5->dev, "failed to install IRQ handler\n");
  goto err_periph_clk_disable;
 }

 FUNC_14(VAR_6, VAR_5);

 FUNC_9(VAR_5);

 return 0;

err_periph_clk_disable:
 FUNC_15(VAR_5->dev);
 FUNC_2(VAR_8->hlcdc->periph_clk);
err_sys_clk_disable:
 if (VAR_8->desc->fixed_clksrc)
  FUNC_2(VAR_8->hlcdc->sys_clk);

err_destroy_wq:
 FUNC_4(VAR_8->wq);

 return VAR_9;
}
