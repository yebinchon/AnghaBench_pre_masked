
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo_caps {int output_flags; int stall_support; int down_scaling; int up_scaling; int sharp_scaling; int smooth_scaling; int sdvo_inputs_mask; int sdvo_version_minor; int sdvo_version_major; int device_rev_id; int device_id; int vendor_id; } ;
struct psb_intel_sdvo {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct psb_intel_sdvo*,int ,struct psb_intel_sdvo_caps*,int) ;

__attribute__((used)) static bool FUNC_3(struct psb_intel_sdvo *VAR_1, struct psb_intel_sdvo_caps *VAR_2)
{
 FUNC_0(sizeof(*VAR_2) != 8);
 if (!FUNC_2(VAR_1,
      VAR_0,
      VAR_2, sizeof(*VAR_2)))
  return 0;

 FUNC_1("SDVO capabilities:\n"
        "  vendor_id: %d\n"
        "  device_id: %d\n"
        "  device_rev_id: %d\n"
        "  sdvo_version_major: %d\n"
        "  sdvo_version_minor: %d\n"
        "  sdvo_inputs_mask: %d\n"
        "  smooth_scaling: %d\n"
        "  sharp_scaling: %d\n"
        "  up_scaling: %d\n"
        "  down_scaling: %d\n"
        "  stall_support: %d\n"
        "  output_flags: %d\n",
        VAR_2->vendor_id,
        VAR_2->device_id,
        VAR_2->device_rev_id,
        VAR_2->sdvo_version_major,
        VAR_2->sdvo_version_minor,
        VAR_2->sdvo_inputs_mask,
        VAR_2->smooth_scaling,
        VAR_2->sharp_scaling,
        VAR_2->up_scaling,
        VAR_2->down_scaling,
        VAR_2->stall_support,
        VAR_2->output_flags);

 return 1;
}
