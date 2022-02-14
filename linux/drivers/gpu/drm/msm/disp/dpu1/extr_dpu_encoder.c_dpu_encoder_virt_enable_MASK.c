
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct TYPE_10__ {TYPE_2__* crtc; } ;
struct dpu_encoder_virt {int enabled; int enc_lock; TYPE_6__* cur_master; TYPE_7__* cur_slave; TYPE_3__ base; } ;
struct TYPE_11__ {int (* enable ) (TYPE_7__*) ;} ;
struct TYPE_14__ {TYPE_4__ ops; } ;
struct TYPE_12__ {int (* enable ) (TYPE_6__*) ;} ;
struct TYPE_13__ {TYPE_5__ ops; } ;
struct TYPE_9__ {TYPE_1__* state; } ;
struct TYPE_8__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_virt*,char*,int) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*) ;
 struct dpu_encoder_virt* FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct drm_encoder *VAR_1)
{
 struct dpu_encoder_virt *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 struct drm_display_mode *VAR_4 = ((void*)0);

 if (!VAR_1) {
  FUNC_0("invalid encoder\n");
  return;
 }
 VAR_2 = FUNC_9(VAR_1);

 FUNC_5(&VAR_2->enc_lock);
 VAR_4 = &VAR_2->base.crtc->state->adjusted_mode;

 FUNC_10(FUNC_2(VAR_1), VAR_4->hdisplay,
        VAR_4->vdisplay);


 if (VAR_2->cur_slave && VAR_2->cur_slave->ops.enable)
  VAR_2->cur_slave->ops.enable(VAR_2->cur_slave);

 if (VAR_2->cur_master && VAR_2->cur_master->ops.enable)
  VAR_2->cur_master->ops.enable(VAR_2->cur_master);

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_2, "dpu resource control failed: %d\n",
    VAR_3);
  goto out;
 }

 FUNC_3(VAR_1);

 VAR_2->enabled = 1;

out:
 FUNC_6(&VAR_2->enc_lock);
}
