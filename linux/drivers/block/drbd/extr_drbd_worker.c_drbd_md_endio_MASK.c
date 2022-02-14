
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int error; } ;
struct drbd_device {int misc_wait; TYPE_1__ md_io; scalar_t__ ldev; } ;
struct bio {int bi_status; struct drbd_device* bi_private; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct bio *VAR_0)
{
 struct drbd_device *VAR_1;

 VAR_1 = VAR_0->bi_private;
 VAR_1->md_io.error = FUNC_1(VAR_0->bi_status);


 if (VAR_1->ldev)
  FUNC_3(VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
 VAR_1->md_io.done = 1;
 FUNC_4(&VAR_1->misc_wait);
}
