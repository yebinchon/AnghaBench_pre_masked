
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct mdp4_dtv_encoder {void* mdp_clk; void* hdmi_clk; struct drm_encoder base; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_encoder* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mdp4_dtv_encoder*) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct drm_encoder*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct mdp4_dtv_encoder* FUNC_8 (int,int ) ;
 int FUNC_9 (struct drm_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;

struct drm_encoder *FUNC_10(struct drm_device *VAR_5)
{
 struct drm_encoder *VAR_6 = ((void*)0);
 struct mdp4_dtv_encoder *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto fail;
 }

 VAR_6 = &VAR_7->base;

 FUNC_7(VAR_5, VAR_6, &VAR_3,
    VAR_0, ((void*)0));
 FUNC_6(VAR_6, &VAR_4);

 VAR_7->hdmi_clk = FUNC_5(VAR_5->dev, "hdmi_clk");
 if (FUNC_2(VAR_7->hdmi_clk)) {
  FUNC_0(VAR_5->dev, "failed to get hdmi_clk\n");
  VAR_8 = FUNC_3(VAR_7->hdmi_clk);
  goto fail;
 }

 VAR_7->mdp_clk = FUNC_5(VAR_5->dev, "tv_clk");
 if (FUNC_2(VAR_7->mdp_clk)) {
  FUNC_0(VAR_5->dev, "failed to get tv_clk\n");
  VAR_8 = FUNC_3(VAR_7->mdp_clk);
  goto fail;
 }

 FUNC_4(VAR_7);

 return VAR_6;

fail:
 if (VAR_6)
  FUNC_9(VAR_6);

 return FUNC_1(VAR_8);
}
