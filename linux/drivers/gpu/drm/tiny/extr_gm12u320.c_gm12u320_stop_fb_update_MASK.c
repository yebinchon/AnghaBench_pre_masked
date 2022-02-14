
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int run; int lock; int * fb; int work; int waitq; } ;
struct gm12u320_device {TYPE_1__ fb_update; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gm12u320_device *VAR_0)
{
 FUNC_2(&VAR_0->fb_update.lock);
 VAR_0->fb_update.run = 0;
 FUNC_3(&VAR_0->fb_update.lock);

 FUNC_4(&VAR_0->fb_update.waitq);
 FUNC_0(&VAR_0->fb_update.work);

 FUNC_2(&VAR_0->fb_update.lock);
 if (VAR_0->fb_update.fb) {
  FUNC_1(VAR_0->fb_update.fb);
  VAR_0->fb_update.fb = ((void*)0);
 }
 FUNC_3(&VAR_0->fb_update.lock);
}
