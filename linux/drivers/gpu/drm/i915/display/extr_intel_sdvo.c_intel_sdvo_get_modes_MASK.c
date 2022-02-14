
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_connector {int dummy; } ;
struct drm_connector {int probed_modes; } ;


 scalar_t__ FUNC_0 (struct intel_sdvo_connector*) ;
 scalar_t__ FUNC_1 (struct intel_sdvo_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (int *) ;
 struct intel_sdvo_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct intel_sdvo_connector *VAR_1 = FUNC_6(VAR_0);

 if (FUNC_1(VAR_1))
  FUNC_4(VAR_0);
 else if (FUNC_0(VAR_1))
  FUNC_3(VAR_0);
 else
  FUNC_2(VAR_0);

 return !FUNC_5(&VAR_0->probed_modes);
}
