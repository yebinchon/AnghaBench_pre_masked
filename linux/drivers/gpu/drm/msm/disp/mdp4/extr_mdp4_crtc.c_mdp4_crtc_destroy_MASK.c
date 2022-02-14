
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_crtc {int unref_cursor_work; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mdp4_crtc*) ;
 struct mdp4_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0)
{
 struct mdp4_crtc *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(&VAR_1->unref_cursor_work);

 FUNC_2(VAR_1);
}
