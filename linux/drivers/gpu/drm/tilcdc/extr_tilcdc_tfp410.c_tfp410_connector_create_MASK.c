
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410_module {int dummy; } ;
struct drm_connector {int polled; scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; } ;
struct tfp410_connector {struct drm_connector base; struct tfp410_module* mod; struct drm_encoder* encoder; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tfp410_connector* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_4 (struct drm_connector*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct drm_connector *FUNC_5(struct drm_device *VAR_6,
  struct tfp410_module *VAR_7, struct drm_encoder *VAR_8)
{
 struct tfp410_connector *VAR_9;
 struct drm_connector *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_6->dev, sizeof(*VAR_9),
     VAR_3);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->encoder = VAR_8;
 VAR_9->mod = VAR_7;

 VAR_10 = &VAR_9->base;

 FUNC_3(VAR_6, VAR_10, &VAR_4,
   VAR_2);
 FUNC_2(VAR_10, &VAR_5);

 VAR_10->polled = VAR_0 |
   VAR_1;

 VAR_10->interlace_allowed = 0;
 VAR_10->doublescan_allowed = 0;

 VAR_11 = FUNC_1(VAR_10, VAR_8);
 if (VAR_11)
  goto fail;

 return VAR_10;

fail:
 FUNC_4(VAR_10);
 return ((void*)0);
}
