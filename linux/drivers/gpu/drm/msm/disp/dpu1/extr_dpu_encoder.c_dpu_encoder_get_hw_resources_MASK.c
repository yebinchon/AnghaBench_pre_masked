
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_2__ {int (* get_hw_resources ) (struct dpu_encoder_phys*,struct dpu_encoder_hw_resources*) ;} ;
struct dpu_encoder_phys {TYPE_1__ ops; } ;
struct dpu_encoder_hw_resources {int dummy; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*) ;
 int FUNC_1 (struct dpu_encoder_hw_resources*,int ,int) ;
 int FUNC_2 (struct dpu_encoder_phys*,struct dpu_encoder_hw_resources*) ;
 struct dpu_encoder_virt* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_0,
      struct dpu_encoder_hw_resources *VAR_1)
{
 struct dpu_encoder_virt *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(VAR_2, "\n");


 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys_encs; VAR_3++) {
  struct dpu_encoder_phys *VAR_4 = VAR_2->phys_encs[VAR_3];

  if (VAR_4 && VAR_4->ops.get_hw_resources)
   VAR_4->ops.get_hw_resources(VAR_4, VAR_1);
 }
}
