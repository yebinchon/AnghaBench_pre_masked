
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {int pdev; } ;
struct hdmi_context {int mutex; TYPE_3__* ddc_adpt; scalar_t__ regs_hdmiphy; TYPE_2__* hdmiphy_port; int reg_hdmi_en; int notifier; TYPE_1__ audio; int hotplug_work; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 struct hdmi_context* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_2)
{
 struct hdmi_context *VAR_3 = FUNC_8(VAR_2);

 FUNC_1(&VAR_3->hotplug_work);
 FUNC_3(VAR_3->notifier, VAR_0);

 FUNC_4(&VAR_2->dev, &VAR_1);
 FUNC_7(VAR_3->audio.pdev);

 FUNC_2(VAR_3->notifier);
 FUNC_9(&VAR_2->dev);

 if (!FUNC_0(VAR_3->reg_hdmi_en))
  FUNC_11(VAR_3->reg_hdmi_en);

 if (VAR_3->hdmiphy_port)
  FUNC_10(&VAR_3->hdmiphy_port->dev);

 if (VAR_3->regs_hdmiphy)
  FUNC_5(VAR_3->regs_hdmiphy);

 FUNC_10(&VAR_3->ddc_adpt->dev);

 FUNC_6(&VAR_3->mutex);

 return 0;
}
