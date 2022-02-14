
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc_mode {int dummy; } ;
struct zx_tvenc {int dev; } ;
struct drm_display_mode {int name; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct zx_tvenc* FUNC_1 (struct drm_connector*) ;
 struct zx_tvenc_mode* FUNC_2 (struct drm_display_mode*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_3(struct drm_connector *VAR_2,
         struct drm_display_mode *VAR_3)
{
 struct zx_tvenc *VAR_4 = FUNC_1(VAR_2);
 const struct zx_tvenc_mode *VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_0(VAR_4->dev, "unsupported mode: %s\n", VAR_3->name);
  return VAR_0;
 }

 return VAR_1;
}
