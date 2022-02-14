
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdvo_device_mapping {int ddc_pin; scalar_t__ initialized; } ;
struct psb_intel_sdvo {int ddc_bus; } ;
struct drm_psb_private {struct sdvo_device_mapping* sdvo_mappings; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct psb_intel_sdvo*) ;

__attribute__((used)) static void
FUNC_2(struct drm_psb_private *VAR_0,
     struct psb_intel_sdvo *VAR_1, u32 VAR_2)
{
 struct sdvo_device_mapping *VAR_3;

 if (FUNC_0(VAR_2))
  VAR_3 = &(VAR_0->sdvo_mappings[0]);
 else
  VAR_3 = &(VAR_0->sdvo_mappings[1]);

 if (VAR_3->initialized)
  VAR_1->ddc_bus = 1 << ((VAR_3->ddc_pin & 0xf0) >> 4);
 else
  FUNC_1(VAR_1);
}
