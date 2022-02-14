
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_hdmi {TYPE_1__* pdev; struct drm_encoder* encoder; } ;
struct vc4_dev {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_encoder*,int ) ;

__attribute__((used)) static void FUNC_4(struct vc4_hdmi *VAR_5)
{
 struct drm_encoder *VAR_6 = VAR_5->encoder;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct device *VAR_8 = &VAR_5->pdev->dev;
 struct vc4_dev *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6, VAR_0);
 if (VAR_10)
  FUNC_1(VAR_8, "Failed to stop audio infoframe: %d\n", VAR_10);

 FUNC_0(VAR_1, VAR_4);
 FUNC_0(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_3);
}
