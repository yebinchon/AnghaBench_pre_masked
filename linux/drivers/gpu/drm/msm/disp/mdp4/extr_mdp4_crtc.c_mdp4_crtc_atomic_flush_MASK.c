
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp4_crtc {int * event; int name; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_2__ {int * event; } ;


 int FUNC_0 (char*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mdp4_crtc* FUNC_7 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_1,
       struct drm_crtc_state *VAR_2)
{
 struct mdp4_crtc *VAR_3 = FUNC_7(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 unsigned long VAR_5;

 FUNC_0("%s: event: %p", VAR_3->name, VAR_1->state->event);

 FUNC_1(VAR_3->event);

 FUNC_5(&VAR_4->event_lock, VAR_5);
 VAR_3->event = VAR_1->state->event;
 VAR_1->state->event = ((void*)0);
 FUNC_6(&VAR_4->event_lock, VAR_5);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1, VAR_0);
}
