
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_2__ {int (* irq_control ) (struct dpu_encoder_phys*,int) ;} ;
struct dpu_encoder_phys {TYPE_1__ ops; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_encoder_phys*,int) ;
 struct dpu_encoder_virt* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0, bool VAR_1)
{
 struct dpu_encoder_virt *VAR_2;
 int VAR_3;

 if (!VAR_0) {
  FUNC_1("invalid encoder\n");
  return;
 }

 VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_2, "enable:%d\n", VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys_encs; VAR_3++) {
  struct dpu_encoder_phys *VAR_4 = VAR_2->phys_encs[VAR_3];

  if (VAR_4 && VAR_4->ops.irq_control)
   VAR_4->ops.irq_control(VAR_4, VAR_1);
 }

}
