
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_2__ {int (* prepare_commit ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {TYPE_1__ ops; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_virt* FUNC_2 (struct drm_encoder*) ;

void FUNC_3(struct drm_encoder *VAR_0)
{
 struct dpu_encoder_virt *VAR_1;
 struct dpu_encoder_phys *VAR_2;
 int VAR_3;

 if (!VAR_0) {
  FUNC_0("invalid encoder\n");
  return;
 }
 VAR_1 = FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_phys_encs; VAR_3++) {
  VAR_2 = VAR_1->phys_encs[VAR_3];
  if (VAR_2 && VAR_2->ops.prepare_commit)
   VAR_2->ops.prepare_commit(VAR_2);
 }
}
