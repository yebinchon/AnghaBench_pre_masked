
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410 {int ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,int,int) ;
 struct tfp410* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_5 (struct drm_connector*,int ) ;
 int FUNC_6 (struct drm_connector*,int,int) ;
 int FUNC_7 (struct edid*) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_0)
{
 struct tfp410 *VAR_1 = FUNC_3(VAR_0);
 struct edid *VAR_2;
 int VAR_3;

 if (!VAR_1->ddc)
  goto fallback;

 VAR_2 = FUNC_5(VAR_0, VAR_1->ddc);
 if (!VAR_2) {
  FUNC_0("EDID read failed. Fallback to standard modes\n");
  goto fallback;
 }

 FUNC_4(VAR_0, VAR_2);

 VAR_3 = FUNC_1(VAR_0, VAR_2);

 FUNC_7(VAR_2);

 return VAR_3;

fallback:

 VAR_3 = FUNC_2(VAR_0, 1920, 1200);


 FUNC_6(VAR_0, 1024, 768);

 return VAR_3;
}
