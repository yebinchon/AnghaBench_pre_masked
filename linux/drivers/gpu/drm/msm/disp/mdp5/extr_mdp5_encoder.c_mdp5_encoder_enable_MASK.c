
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_interface {scalar_t__ mode; } ;
struct mdp5_encoder {struct mdp5_interface* intf; } ;
struct drm_encoder {TYPE_1__* crtc; } ;
struct drm_crtc_state {int adjusted_mode; int mode; } ;
struct TYPE_2__ {struct drm_crtc_state* state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int *,int *) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct mdp5_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_1)
{
 struct mdp5_encoder *VAR_2 = FUNC_3(VAR_1);
 struct mdp5_interface *VAR_3 = VAR_2->intf;

 struct drm_crtc_state *VAR_4 = VAR_1->crtc->state;

 FUNC_1(VAR_1, &VAR_4->mode, &VAR_4->adjusted_mode);

 if (VAR_3->mode == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_2(VAR_1);
}
