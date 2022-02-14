
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {TYPE_1__* fbdev; int resume_work; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_fb_helper *VAR_1,
     bool VAR_2)
{
 if (!VAR_1 || !VAR_1->fbdev)
  return;


 FUNC_4(&VAR_1->resume_work);

 if (VAR_2) {
  if (VAR_1->fbdev->state != VAR_0)
   return;

  FUNC_0();

 } else {
  if (VAR_1->fbdev->state == VAR_0)
   return;

  if (!FUNC_1()) {
   FUNC_5(&VAR_1->resume_work);
   return;
  }
 }

 FUNC_3(VAR_1->fbdev, VAR_2);
 FUNC_2();
}
