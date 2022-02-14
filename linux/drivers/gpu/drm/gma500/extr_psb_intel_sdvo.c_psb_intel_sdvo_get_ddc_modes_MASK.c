
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo_connector {int dummy; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct psb_intel_sdvo_connector*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 struct psb_intel_sdvo_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_1)
{
 struct edid *VAR_2;


 VAR_2 = FUNC_5(VAR_1);







 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_4(VAR_1);

 if (VAR_2 != ((void*)0)) {
  struct psb_intel_sdvo_connector *VAR_3 = FUNC_6(VAR_1);
  bool VAR_4 = !!(VAR_2->input & VAR_0);
  bool VAR_5 = !!FUNC_0(VAR_3);

  if (VAR_5 == VAR_4) {
   FUNC_2(VAR_1, VAR_2);
   FUNC_1(VAR_1, VAR_2);
  }

  FUNC_3(VAR_2);
 }
}
