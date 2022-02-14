
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_module {int dummy; } ;
struct drm_encoder {int possible_crtcs; } ;
struct panel_encoder {struct drm_encoder base; struct panel_module* mod; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct panel_encoder* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct drm_encoder *FUNC_4(struct drm_device *VAR_4,
  struct panel_module *VAR_5)
{
 struct panel_encoder *VAR_6;
 struct drm_encoder *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4->dev, sizeof(*VAR_6),
         VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->mod = VAR_5;

 VAR_7 = &VAR_6->base;
 VAR_7->possible_crtcs = 1;

 VAR_8 = FUNC_3(VAR_4, VAR_7, &VAR_2,
   VAR_0, ((void*)0));
 if (VAR_8 < 0)
  goto fail;

 FUNC_2(VAR_7, &VAR_3);

 return VAR_7;

fail:
 FUNC_1(VAR_7);
 return ((void*)0);
}
