
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_connector {scalar_t__ port; int panel; struct drm_connector* edid; struct drm_connector* detect_edid; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct intel_connector*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_connector*) ;
 struct intel_connector* FUNC_6 (struct drm_connector*) ;

void FUNC_7(struct drm_connector *VAR_0)
{
 struct intel_connector *VAR_1 = FUNC_6(VAR_0);

 FUNC_5(VAR_1->detect_edid);

 FUNC_3(VAR_1);

 if (!FUNC_0(VAR_1->edid))
  FUNC_5(VAR_1->edid);

 FUNC_4(&VAR_1->panel);

 FUNC_1(VAR_0);

 if (VAR_1->port)
  FUNC_2(VAR_1->port);

 FUNC_5(VAR_0);
}
