
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc_mode {int mode; } ;
struct zx_tvenc {struct device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct zx_tvenc_mode**) ;
 int FUNC_1 (struct device*,char*) ;
 struct drm_display_mode* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_display_mode*) ;
 struct zx_tvenc* FUNC_5 (struct drm_connector*) ;
 struct zx_tvenc_mode** VAR_0 ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_1)
{
 struct zx_tvenc *VAR_2 = FUNC_5(VAR_1);
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct zx_tvenc_mode *VAR_5 = VAR_0[VAR_4];
  struct drm_display_mode *VAR_6;

  VAR_6 = FUNC_2(VAR_1->dev, &VAR_5->mode);
  if (!VAR_6) {
   FUNC_1(VAR_3, "failed to duplicate drm mode\n");
   continue;
  }

  FUNC_4(VAR_6);
  FUNC_3(VAR_1, VAR_6);
 }

 return VAR_4;
}
