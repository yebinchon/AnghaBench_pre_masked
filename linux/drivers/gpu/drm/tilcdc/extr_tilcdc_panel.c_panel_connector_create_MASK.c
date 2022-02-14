
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_module {int dummy; } ;
struct drm_connector {scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; } ;
struct panel_connector {struct drm_connector base; struct panel_module* mod; struct drm_encoder* encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct panel_connector* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_4 (struct drm_connector*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct drm_connector *FUNC_5(struct drm_device *VAR_4,
  struct panel_module *VAR_5, struct drm_encoder *VAR_6)
{
 struct panel_connector *VAR_7;
 struct drm_connector *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4->dev, sizeof(*VAR_7),
           VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->encoder = VAR_6;
 VAR_7->mod = VAR_5;

 VAR_8 = &VAR_7->base;

 FUNC_3(VAR_4, VAR_8, &VAR_2,
   VAR_0);
 FUNC_2(VAR_8, &VAR_3);

 VAR_8->interlace_allowed = 0;
 VAR_8->doublescan_allowed = 0;

 VAR_9 = FUNC_1(VAR_8, VAR_6);
 if (VAR_9)
  goto fail;

 return VAR_8;

fail:
 FUNC_4(VAR_8);
 return ((void*)0);
}
