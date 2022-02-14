
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_crtc {TYPE_2__* state; int name; TYPE_1__ base; } ;
struct armada_crtc {int atomic_regs; int regs; scalar_t__ regs_idx; } ;
struct TYPE_4__ {scalar_t__ color_mgmt_changed; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct armada_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 struct armada_crtc *VAR_2 = FUNC_2(VAR_0);

 FUNC_0("[CRTC:%d:%s]\n", VAR_0->base.id, VAR_0->name);

 if (VAR_0->state->color_mgmt_changed)
  FUNC_1(VAR_0);

 VAR_2->regs_idx = 0;
 VAR_2->regs = VAR_2->atomic_regs;
}
