
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys** phys_encs; TYPE_1__* cur_master; } ;
struct dpu_encoder_phys {int intf_mode; } ;
typedef enum dpu_intf_mode { ____Placeholder_dpu_intf_mode } dpu_intf_mode ;
struct TYPE_2__ {int intf_mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct dpu_encoder_virt* FUNC_1 (struct drm_encoder*) ;

enum dpu_intf_mode FUNC_2(struct drm_encoder *VAR_1)
{
 struct dpu_encoder_virt *VAR_2 = ((void*)0);
 int VAR_3;

 if (!VAR_1) {
  FUNC_0("invalid encoder\n");
  return VAR_0;
 }
 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->cur_master)
  return VAR_2->cur_master->intf_mode;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys_encs; VAR_3++) {
  struct dpu_encoder_phys *VAR_4 = VAR_2->phys_encs[VAR_3];

  if (VAR_4)
   return VAR_4->intf_mode;
 }

 return VAR_0;
}
