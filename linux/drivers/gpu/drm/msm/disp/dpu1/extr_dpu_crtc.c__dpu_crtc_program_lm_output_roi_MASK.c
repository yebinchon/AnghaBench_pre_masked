
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_rect {int dummy; } ;
struct drm_crtc {int state; } ;
struct dpu_hw_mixer_cfg {scalar_t__ flags; int right_mixer; int out_height; int out_width; } ;
struct TYPE_4__ {int (* setup_mixer_out ) (struct dpu_hw_mixer*,struct dpu_hw_mixer_cfg*) ;} ;
struct dpu_hw_mixer {TYPE_2__ ops; } ;
struct dpu_crtc_state {int num_mixers; TYPE_1__* mixers; struct drm_rect* lm_bounds; } ;
struct dpu_crtc {int dummy; } ;
struct TYPE_3__ {struct dpu_hw_mixer* hw_lm; } ;


 int FUNC_0 (struct drm_rect const*) ;
 int FUNC_1 (struct drm_rect const*) ;
 int FUNC_2 (struct drm_rect const*) ;
 int FUNC_3 (struct dpu_hw_mixer*,struct dpu_hw_mixer_cfg*) ;
 struct dpu_crtc* FUNC_4 (struct drm_crtc*) ;
 struct dpu_crtc_state* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0)
{
 struct dpu_crtc *VAR_1;
 struct dpu_crtc_state *VAR_2;
 int VAR_3, VAR_4;

 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = FUNC_5(VAR_0->state);

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_mixers; VAR_3++) {
  const struct drm_rect *VAR_5 = &VAR_2->lm_bounds[VAR_3];
  struct dpu_hw_mixer *VAR_6 = VAR_2->mixers[VAR_3].hw_lm;
  struct dpu_hw_mixer_cfg VAR_7;

  if (!VAR_5 || !FUNC_1(VAR_5))
   continue;

  VAR_7.out_width = FUNC_2(VAR_5);
  VAR_7.out_height = FUNC_0(VAR_5);
  VAR_7.right_mixer = VAR_4++;
  VAR_7.flags = 0;
  VAR_6->ops.setup_mixer_out(VAR_6, &VAR_7);
 }
}
