
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_hdmi {TYPE_1__* ddc; int hsm_clock; int encoder; int connector; int cec_adap; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct drm_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0, struct device *VAR_1,
       void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_2(VAR_1);
 struct vc4_dev *VAR_4 = VAR_3->dev_private;
 struct vc4_hdmi *VAR_5 = VAR_4->hdmi;

 FUNC_0(VAR_5->cec_adap);
 FUNC_5(VAR_5->connector);
 FUNC_6(VAR_5->encoder);

 FUNC_1(VAR_5->hsm_clock);
 FUNC_3(VAR_0);

 FUNC_4(&VAR_5->ddc->dev);

 VAR_4->hdmi = ((void*)0);
}
