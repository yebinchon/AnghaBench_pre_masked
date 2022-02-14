
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_hdmi {TYPE_1__* pdev; int pixel_clock; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct vc4_dev *VAR_6 = FUNC_6(VAR_5);
 struct vc4_hdmi *VAR_7 = VAR_6->hdmi;
 int VAR_8;

 FUNC_1(VAR_0, 0);

 FUNC_1(VAR_1, 0xf << 16);
 FUNC_3(VAR_2,
   FUNC_2(VAR_2) & ~VAR_3);

 FUNC_4(VAR_7->pixel_clock);

 VAR_8 = FUNC_5(&VAR_7->pdev->dev);
 if (VAR_8 < 0)
  FUNC_0("Failed to release power domain: %d\n", VAR_8);
}
