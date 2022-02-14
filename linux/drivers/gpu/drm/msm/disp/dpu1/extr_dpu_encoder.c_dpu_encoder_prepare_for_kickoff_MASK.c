
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {unsigned int num_phys_encs; struct dpu_encoder_phys** phys_encs; } ;
struct TYPE_2__ {int (* prepare_for_kickoff ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {scalar_t__ enable_state; TYPE_1__ ops; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct dpu_encoder_phys*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_virt* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct drm_encoder *VAR_2)
{
 struct dpu_encoder_virt *VAR_3;
 struct dpu_encoder_phys *VAR_4;
 bool VAR_5 = 0;
 unsigned int VAR_6;

 VAR_3 = FUNC_6(VAR_2);

 FUNC_7(FUNC_2(VAR_2));


 FUNC_0("enc_prepare_for_kickoff");
 for (VAR_6 = 0; VAR_6 < VAR_3->num_phys_encs; VAR_6++) {
  VAR_4 = VAR_3->phys_encs[VAR_6];
  if (VAR_4) {
   if (VAR_4->ops.prepare_for_kickoff)
    VAR_4->ops.prepare_for_kickoff(VAR_4);
   if (VAR_4->enable_state == VAR_0)
    VAR_5 = 1;
  }
 }
 FUNC_1("enc_prepare_for_kickoff");

 FUNC_4(VAR_2, VAR_1);


 if (VAR_5) {
  FUNC_8(FUNC_2(VAR_2));
  for (VAR_6 = 0; VAR_6 < VAR_3->num_phys_encs; VAR_6++) {
   FUNC_3(VAR_3->phys_encs[VAR_6]);
  }
 }
}
