
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int name; } ;
struct drm_connector {int interlace_allowed; int polled; scalar_t__ doublescan_allowed; } ;
struct omap_connector {void* hpd; struct drm_connector base; void* output; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 struct omap_connector* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_connector*) ;
 struct omap_dss_device* FUNC_5 (struct drm_connector*,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct omap_dss_device*) ;
 int VAR_7 ;
 void* FUNC_7 (struct omap_dss_device*) ;

struct drm_connector *FUNC_8(struct drm_device *VAR_8,
       struct omap_dss_device *VAR_9,
       struct drm_encoder *VAR_10)
{
 struct drm_connector *VAR_11 = ((void*)0);
 struct omap_connector *VAR_12;
 struct omap_dss_device *VAR_13;

 FUNC_0("%s", VAR_9->name);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  goto fail;

 VAR_12->output = FUNC_7(VAR_9);

 VAR_11 = &VAR_12->base;
 VAR_11->interlace_allowed = 1;
 VAR_11->doublescan_allowed = 0;

 FUNC_2(VAR_8, VAR_11, &VAR_6,
      FUNC_6(VAR_9));
 FUNC_1(VAR_11, &VAR_7);







 VAR_13 = FUNC_5(VAR_11, VAR_5);
 if (VAR_13) {
  VAR_12->hpd = FUNC_7(VAR_13);
  VAR_11->polled = VAR_2;
 } else {
  VAR_13 = FUNC_5(VAR_11,
          VAR_4);
  if (VAR_13)
   VAR_11->polled = VAR_0 |
         VAR_1;
 }

 return VAR_11;

fail:
 if (VAR_11)
  FUNC_4(VAR_11);

 return ((void*)0);
}
