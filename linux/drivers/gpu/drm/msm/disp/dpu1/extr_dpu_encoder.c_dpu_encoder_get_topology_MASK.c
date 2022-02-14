
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_display_topology {int num_lm; int num_intf; scalar_t__ num_enc; } ;
struct drm_display_mode {scalar_t__ vdisplay; } ;
struct dpu_kms {int dummy; } ;
struct dpu_encoder_virt {scalar_t__* phys_encs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct msm_display_topology FUNC_0(
   struct dpu_encoder_virt *VAR_2,
   struct dpu_kms *VAR_3,
   struct drm_display_mode *VAR_4)
{
 struct msm_display_topology VAR_5;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_2->phys_encs[VAR_6])
   VAR_7++;


 VAR_5.num_lm = (VAR_4->vdisplay > VAR_1) ? 2 : 1;
 VAR_5.num_enc = 0;
 VAR_5.num_intf = VAR_7;

 return VAR_5;
}
