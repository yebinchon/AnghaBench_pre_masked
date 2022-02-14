
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (struct drm_crtc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct drm_crtc *VAR_1)
{
 if (VAR_1->state)
  FUNC_1(VAR_1, VAR_1->state);

 VAR_1->state = FUNC_0(sizeof(struct vc4_crtc_state), VAR_0);
 if (VAR_1->state)
  VAR_1->state->crtc = VAR_1;
}
