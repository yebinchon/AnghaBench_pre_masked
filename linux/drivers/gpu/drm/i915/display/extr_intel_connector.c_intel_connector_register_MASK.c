
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_connector {int dummy; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (int ) ;
 struct intel_connector* FUNC_4 (struct drm_connector*) ;

int FUNC_5(struct drm_connector *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  goto err;

 if (FUNC_0(FUNC_3(VAR_1->dev))) {
  VAR_3 = -VAR_0;
  goto err_backlight;
 }

 return 0;

err_backlight:
 FUNC_2(VAR_2);
err:
 return VAR_3;
}
