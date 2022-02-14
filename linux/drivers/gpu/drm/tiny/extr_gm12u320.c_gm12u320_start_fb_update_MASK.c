
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int run; int work; int workq; int lock; } ;
struct gm12u320_device {TYPE_1__ fb_update; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct gm12u320_device *VAR_0)
{
 FUNC_0(&VAR_0->fb_update.lock);
 VAR_0->fb_update.run = 1;
 FUNC_1(&VAR_0->fb_update.lock);

 FUNC_2(VAR_0->fb_update.workq, &VAR_0->fb_update.work);
}
