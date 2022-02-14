
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct msm_drm_private {scalar_t__* dsi; } ;
struct msm_display_info {int* h_tile_instance; size_t num_of_h_tiles; int capabilities; int intf_type; } ;
struct TYPE_3__ {int id; } ;
struct drm_encoder {TYPE_1__ base; TYPE_2__* dev; int encoder_type; } ;
typedef int info ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,struct drm_encoder*,struct msm_display_info*) ;
 int FUNC_3 (struct msm_display_info*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct msm_kms *VAR_2,
     struct drm_encoder *VAR_3,
     bool VAR_4)
{
 struct msm_display_info VAR_5;
 struct msm_drm_private *VAR_6 = VAR_3->dev->dev_private;
 int VAR_7, VAR_8 = 0;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.intf_type = VAR_3->encoder_type;
 VAR_5.capabilities = VAR_4 ? VAR_0 :
   VAR_1;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->dsi); VAR_7++) {
  if (VAR_6->dsi[VAR_7]) {
   VAR_5.h_tile_instance[VAR_5.num_of_h_tiles] = VAR_7;
   VAR_5.num_of_h_tiles++;
  }
 }

 VAR_8 = FUNC_2(VAR_3->dev, VAR_3, &VAR_5);
 if (VAR_8)
  FUNC_1("failed to setup DPU encoder %d: rc:%d\n",
   VAR_3->base.id, VAR_8);
}
