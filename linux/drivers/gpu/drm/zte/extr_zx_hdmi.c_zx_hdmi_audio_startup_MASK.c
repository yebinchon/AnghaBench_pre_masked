
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int crtc; } ;
struct zx_hdmi {struct drm_encoder encoder; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct zx_hdmi* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 struct zx_hdmi *VAR_3 = FUNC_0(VAR_1);
 struct drm_encoder *VAR_4 = &VAR_3->encoder;

 FUNC_1(VAR_4->crtc, VAR_0);

 return 0;
}
