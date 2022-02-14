
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {TYPE_1__* rdev; } ;
struct r5conf {int dummy; } ;
struct mddev {struct r5conf* private; } ;
struct TYPE_2__ {struct mddev* mddev; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5l_log*) ;

int FUNC_2(struct r5l_log *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  struct mddev *VAR_2 = VAR_0->rdev->mddev;
  struct r5conf *VAR_3 = VAR_2->private;

  FUNC_0(VAR_3);
 }
 return VAR_1;
}
