
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct mdp4_dsi_encoder {struct drm_encoder base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_encoder* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct mdp4_dsi_encoder* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;

struct drm_encoder *FUNC_5(struct drm_device *VAR_5)
{
 struct drm_encoder *VAR_6 = ((void*)0);
 struct mdp4_dsi_encoder *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto fail;
 }

 VAR_6 = &VAR_7->base;

 FUNC_2(VAR_5, VAR_6, &VAR_3,
    VAR_0, ((void*)0));
 FUNC_1(VAR_6, &VAR_4);

 return VAR_6;

fail:
 if (VAR_6)
  FUNC_4(VAR_6);

 return FUNC_0(VAR_8);
}
