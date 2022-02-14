
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_crtc* crtc; } ;
struct TYPE_3__ {scalar_t__ index; int source; } ;
struct rcar_du_crtc_state {TYPE_2__ state; TYPE_1__ crc; } ;
struct drm_crtc {TYPE_2__* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcar_du_crtc_state* FUNC_0 (int,int ) ;
 int FUNC_1 (struct drm_crtc*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_2)
{
 struct rcar_du_crtc_state *VAR_3;

 if (VAR_2->state) {
  FUNC_1(VAR_2, VAR_2->state);
  VAR_2->state = ((void*)0);
 }

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->crc.source = VAR_1;
 VAR_3->crc.index = 0;

 VAR_2->state = &VAR_3->state;
 VAR_2->state->crtc = VAR_2;
}
