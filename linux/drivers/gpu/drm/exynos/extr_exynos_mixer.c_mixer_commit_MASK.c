
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mixer_context {TYPE_3__* crtc; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (struct mixer_context*,struct drm_display_mode*) ;
 int FUNC_1 (struct mixer_context*,int ,int ) ;
 int FUNC_2 (struct mixer_context*) ;

__attribute__((used)) static void FUNC_3(struct mixer_context *VAR_0)
{
 struct drm_display_mode *VAR_1 = &VAR_0->crtc->base.state->adjusted_mode;

 FUNC_1(VAR_0, VAR_1->hdisplay, VAR_1->vdisplay);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
}
