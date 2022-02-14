
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_rect {void* y2; void* x2; void* y1; void* x1; } ;
struct TYPE_4__ {int waitq; int lock; struct drm_rect rect; struct drm_framebuffer* fb; } ;
struct gm12u320_device {TYPE_2__ fb_update; } ;
struct drm_framebuffer {TYPE_1__* dev; } ;
struct TYPE_3__ {struct gm12u320_device* dev_private; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (struct drm_framebuffer*) ;
 void* FUNC_2 (void*,void*) ;
 void* FUNC_3 (void*,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_framebuffer *VAR_0,
       struct drm_rect *VAR_1)
{
 struct gm12u320_device *VAR_2 = VAR_0->dev->dev_private;
 struct drm_framebuffer *VAR_3 = ((void*)0);
 bool VAR_4 = 0;

 FUNC_4(&VAR_2->fb_update.lock);

 if (VAR_2->fb_update.fb != VAR_0) {
  VAR_3 = VAR_2->fb_update.fb;
  FUNC_0(VAR_0);
  VAR_2->fb_update.fb = VAR_0;
  VAR_2->fb_update.rect = *VAR_1;
  VAR_4 = 1;
 } else {
  struct drm_rect *VAR_5 = &VAR_2->fb_update.rect;

  VAR_5->x1 = FUNC_3(VAR_5->x1, VAR_1->x1);
  VAR_5->y1 = FUNC_3(VAR_5->y1, VAR_1->y1);
  VAR_5->x2 = FUNC_2(VAR_5->x2, VAR_1->x2);
  VAR_5->y2 = FUNC_2(VAR_5->y2, VAR_1->y2);
 }

 FUNC_5(&VAR_2->fb_update.lock);

 if (VAR_4)
  FUNC_6(&VAR_2->fb_update.waitq);

 if (VAR_3)
  FUNC_1(VAR_3);
}
