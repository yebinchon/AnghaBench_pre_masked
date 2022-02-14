
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_crtc {int name; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct mdp4_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct mdp4_crtc *VAR_2 = FUNC_1(VAR_0);
 FUNC_0("%s: begin", VAR_2->name);
}
