
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_crtc {int name; struct drm_pending_vblank_event* event; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,int ,struct drm_pending_vblank_event*) ;
 int FUNC_1 (struct drm_crtc*,struct drm_pending_vblank_event*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mdp4_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0, struct drm_file *VAR_1)
{
 struct mdp4_crtc *VAR_2 = FUNC_4(VAR_0);
 struct drm_device *VAR_3 = VAR_0->dev;
 struct drm_pending_vblank_event *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3->event_lock, VAR_5);
 VAR_4 = VAR_2->event;
 if (VAR_4) {
  VAR_2->event = ((void*)0);
  FUNC_0("%s: send event: %p", VAR_2->name, VAR_4);
  FUNC_1(VAR_0, VAR_4);
 }
 FUNC_3(&VAR_3->event_lock, VAR_5);
}
