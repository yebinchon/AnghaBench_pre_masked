
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oaktrail_hdmi_dev {int dummy; } ;
struct drm_psb_private {struct oaktrail_hdmi_dev* hdmi_priv; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;
 struct oaktrail_hdmi_dev *VAR_4 = VAR_3->hdmi_priv;

 FUNC_1(0x51a8, 0x0);
 FUNC_0(0x51a8);

 FUNC_1(VAR_0, 0x0);
 FUNC_0(VAR_0);

 FUNC_1(VAR_1, 0x47);
 FUNC_0(VAR_1);
}
