
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct vmw_crtc_state {TYPE_1__ base; } ;
struct drm_crtc {TYPE_1__* state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 struct vmw_crtc_state* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct drm_crtc *VAR_1)
{
 struct vmw_crtc_state *VAR_2;


 if (VAR_1->state) {
  FUNC_1(VAR_1->state);

  FUNC_2(FUNC_4(VAR_1->state));
 }

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);

 if (!VAR_2) {
  FUNC_0("Cannot allocate vmw_crtc_state\n");
  return;
 }

 VAR_1->state = &VAR_2->base;
 VAR_1->state->crtc = VAR_1;
}
