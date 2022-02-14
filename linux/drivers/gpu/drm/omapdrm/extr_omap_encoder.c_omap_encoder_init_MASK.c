
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct omap_encoder {struct drm_encoder base; struct omap_dss_device* output; } ;
struct omap_dss_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int *) ;
 int FUNC_1 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct omap_encoder* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;

struct drm_encoder *FUNC_4(struct drm_device *VAR_4,
          struct omap_dss_device *VAR_5)
{
 struct drm_encoder *VAR_6 = ((void*)0);
 struct omap_encoder *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto fail;

 VAR_7->output = VAR_5;

 VAR_6 = &VAR_7->base;

 FUNC_1(VAR_4, VAR_6, &VAR_2,
    VAR_0, ((void*)0));
 FUNC_0(VAR_6, &VAR_3);

 return VAR_6;

fail:
 if (VAR_6)
  FUNC_3(VAR_6);

 return ((void*)0);
}
