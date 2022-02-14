
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int event_lock; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct dpu_crtc {int * event; int name; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (struct drm_crtc*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct dpu_crtc* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0)
{
 struct dpu_crtc *VAR_1 = FUNC_5(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->event_lock, VAR_3);
 if (VAR_1->event) {
  FUNC_1("%s: send event: %pK\n", VAR_1->name,
         VAR_1->event);
  FUNC_6(FUNC_0(VAR_0));
  FUNC_2(VAR_0, VAR_1->event);
  VAR_1->event = ((void*)0);
 }
 FUNC_4(&VAR_2->event_lock, VAR_3);
}
