
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdp5_interface {scalar_t__ mode; } ;
struct TYPE_2__ {struct mdp5_interface* intf; } ;
struct mdp5_crtc_state {TYPE_1__ pipeline; } ;
struct drm_crtc {int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_crtc*,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1)
{
 struct mdp5_crtc_state *VAR_2 = FUNC_2(VAR_1->state);
 struct mdp5_interface *VAR_3 = VAR_2->pipeline.intf;
 u32 VAR_4;

 VAR_4 = VAR_3->mode == VAR_0 ? 0 : 0xffffffff;
 FUNC_0(VAR_1, VAR_4);

 FUNC_1(VAR_1);
}
