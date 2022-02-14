
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct omap_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1)
{
 if (VAR_1->state)
  FUNC_0(VAR_1->state);

 FUNC_1(VAR_1->state);
 VAR_1->state = FUNC_2(sizeof(struct omap_crtc_state), VAR_0);

 if (VAR_1->state)
  VAR_1->state->crtc = VAR_1;
}
