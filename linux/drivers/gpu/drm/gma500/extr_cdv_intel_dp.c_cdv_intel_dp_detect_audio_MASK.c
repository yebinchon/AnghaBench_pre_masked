
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct cdv_intel_dp {int adapter; } ;


 int FUNC_0 (struct gma_encoder*) ;
 int FUNC_1 (struct gma_encoder*) ;
 int FUNC_2 (struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*,int *) ;
 struct gma_encoder* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct gma_encoder*) ;
 int FUNC_6 (struct edid*) ;

__attribute__((used)) static bool
FUNC_7(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_4(VAR_0);
 struct cdv_intel_dp *VAR_2 = VAR_1->dev_priv;
 struct edid *VAR_3;
 bool VAR_4 = 0;
 int VAR_5 = FUNC_5(VAR_1);

 if (VAR_5)
  FUNC_1(VAR_1);

 VAR_3 = FUNC_3(VAR_0, &VAR_2->adapter);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_6(VAR_3);
 }
 if (VAR_5)
  FUNC_0(VAR_1);

 return VAR_4;
}
