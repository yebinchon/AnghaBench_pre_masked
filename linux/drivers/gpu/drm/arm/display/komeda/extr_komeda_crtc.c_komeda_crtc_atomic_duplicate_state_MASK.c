
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct komeda_crtc_state {struct drm_crtc_state base; int max_slave_zorder; int clock_ratio; int active_pipes; int affected_pipes; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct komeda_crtc_state* FUNC_1 (int,int ) ;
 struct komeda_crtc_state* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_3(struct drm_crtc *VAR_1)
{
 struct komeda_crtc_state *VAR_2 = FUNC_2(VAR_1->state);
 struct komeda_crtc_state *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_3->base);

 VAR_3->affected_pipes = VAR_2->active_pipes;
 VAR_3->clock_ratio = VAR_2->clock_ratio;
 VAR_3->max_slave_zorder = VAR_2->max_slave_zorder;

 return &VAR_3->base;
}
