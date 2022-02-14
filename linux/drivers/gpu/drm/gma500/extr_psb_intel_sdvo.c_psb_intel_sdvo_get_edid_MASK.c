
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo {int ddc; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 struct edid* FUNC_0 (struct drm_connector*,int *) ;
 struct psb_intel_sdvo* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static struct edid *
FUNC_2(struct drm_connector *VAR_0)
{
 struct psb_intel_sdvo *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_0, &VAR_1->ddc);
}
