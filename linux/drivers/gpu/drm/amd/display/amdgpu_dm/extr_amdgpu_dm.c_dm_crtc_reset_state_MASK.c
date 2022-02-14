
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;
struct dm_crtc_state {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,TYPE_1__*) ;
 struct dm_crtc_state* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1)
{
 struct dm_crtc_state *VAR_2;

 if (VAR_1->state)
  FUNC_1(VAR_1, VAR_1->state);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (FUNC_0(!VAR_2))
  return;

 VAR_1->state = &VAR_2->base;
 VAR_1->state->crtc = VAR_1;

}
