
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {int num_phys_encs; int enc_lock; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_2__ {int (* destroy ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {TYPE_1__ ops; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dpu_encoder_virt*,char*,int) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_virt* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_0)
{
 struct dpu_encoder_virt *VAR_1 = ((void*)0);
 int VAR_2 = 0;

 if (!VAR_0) {
  FUNC_1("invalid encoder\n");
  return;
 }

 VAR_1 = FUNC_8(VAR_0);
 FUNC_0(VAR_1, "\n");

 FUNC_5(&VAR_1->enc_lock);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_phys_encs; VAR_2++) {
  struct dpu_encoder_phys *VAR_3 = VAR_1->phys_encs[VAR_2];

  if (VAR_3 && VAR_3->ops.destroy) {
   VAR_3->ops.destroy(VAR_3);
   --VAR_1->num_phys_encs;
   VAR_1->phys_encs[VAR_2] = ((void*)0);
  }
 }

 if (VAR_1->num_phys_encs)
  FUNC_2(VAR_1, "expected 0 num_phys_encs not %d\n",
    VAR_1->num_phys_encs);
 VAR_1->num_phys_encs = 0;
 FUNC_6(&VAR_1->enc_lock);

 FUNC_3(VAR_0);
 FUNC_4(&VAR_1->enc_lock);
}
