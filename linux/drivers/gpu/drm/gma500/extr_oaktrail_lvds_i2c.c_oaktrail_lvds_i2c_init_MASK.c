
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_1__ dev; TYPE_3__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; struct psb_intel_i2c_chan* data; int timeout; int getscl; int getsda; int (* setscl ) (struct psb_intel_i2c_chan*,int) ;int (* setsda ) (struct psb_intel_i2c_chan*,int) ;} ;
struct psb_intel_i2c_chan {TYPE_4__ adapter; TYPE_3__ algo; int reg; struct drm_device* drm_dev; } ;
struct gma_encoder {struct psb_intel_i2c_chan* ddc_bus; } ;
struct drm_psb_private {int lpc_gpio_base; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {TYPE_2__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct psb_intel_i2c_chan*) ;
 int FUNC_2 (struct psb_intel_i2c_chan*) ;
 struct psb_intel_i2c_chan* FUNC_3 (int,int ) ;
 int FUNC_4 (struct psb_intel_i2c_chan*,int) ;
 int FUNC_5 (struct psb_intel_i2c_chan*,int) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 struct gma_encoder* FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

void FUNC_10(struct drm_encoder *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct gma_encoder *VAR_7 = FUNC_7(VAR_5);
 struct drm_psb_private *VAR_8 = VAR_6->dev_private;
 struct psb_intel_i2c_chan *VAR_9;

 VAR_9 = FUNC_3(sizeof(struct psb_intel_i2c_chan), VAR_0);
 if (!VAR_9)
  return;

 VAR_9->drm_dev = VAR_6;
 VAR_9->reg = VAR_8->lpc_gpio_base;
 FUNC_6(VAR_9->adapter.name, "gma500 LPC", VAR_1 - 1);
 VAR_9->adapter.owner = VAR_2;
 VAR_9->adapter.algo_data = &VAR_9->algo;
 VAR_9->adapter.dev.parent = &VAR_6->pdev->dev;
 VAR_9->algo.setsda = FUNC_5;
 VAR_9->algo.setscl = FUNC_4;
 VAR_9->algo.getsda = VAR_4;
 VAR_9->algo.getscl = VAR_3;
 VAR_9->algo.udelay = 100;
 VAR_9->algo.timeout = FUNC_9(2200);
 VAR_9->algo.data = VAR_9;

 FUNC_1(&VAR_9->adapter, VAR_9);

 FUNC_5(VAR_9, 1);
 FUNC_4(VAR_9, 1);
 FUNC_8(50);

 if (FUNC_0(&VAR_9->adapter)) {
  FUNC_2(VAR_9);
  return;
 }

 VAR_7->ddc_bus = VAR_9;
}
