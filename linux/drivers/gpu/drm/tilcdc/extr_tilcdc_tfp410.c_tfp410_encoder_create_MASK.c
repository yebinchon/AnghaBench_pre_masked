
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410_module {int dummy; } ;
struct drm_encoder {int possible_crtcs; } ;
struct tfp410_encoder {struct drm_encoder base; struct tfp410_module* mod; int dpms; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tfp410_encoder* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct drm_encoder *FUNC_4(struct drm_device *VAR_5,
  struct tfp410_module *VAR_6)
{
 struct tfp410_encoder *VAR_7;
 struct drm_encoder *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_5->dev, sizeof(*VAR_7),
          VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->dpms = VAR_0;
 VAR_7->mod = VAR_6;

 VAR_8 = &VAR_7->base;
 VAR_8->possible_crtcs = 1;

 VAR_9 = FUNC_3(VAR_5, VAR_8, &VAR_3,
   VAR_1, ((void*)0));
 if (VAR_9 < 0)
  goto fail;

 FUNC_2(VAR_8, &VAR_4);

 return VAR_8;

fail:
 FUNC_1(VAR_8);
 return ((void*)0);
}
