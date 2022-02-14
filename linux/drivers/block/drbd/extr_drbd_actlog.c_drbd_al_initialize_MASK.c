
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_md {int al_stripes; int al_stripe_size_4k; } ;
struct drbd_device {int al_lock; int act_log; TYPE_1__* ldev; } ;
struct al_transaction_on_disk {int dummy; } ;
struct TYPE_2__ {struct drbd_md md; } ;


 int FUNC_0 (struct drbd_device*,struct al_transaction_on_disk*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drbd_device *VAR_0, void *VAR_1)
{
 struct al_transaction_on_disk *VAR_2 = VAR_1;
 struct drbd_md *VAR_3 = &VAR_0->ldev->md;
 int VAR_4 = VAR_3->al_stripes * VAR_3->al_stripe_size_4k;
 int VAR_5;

 FUNC_0(VAR_0, VAR_2);

 FUNC_2(&VAR_0->al_lock);
 FUNC_1(VAR_0->act_log);
 FUNC_3(&VAR_0->al_lock);




 for (VAR_5 = 1; VAR_5 < VAR_4; VAR_5++) {
  int VAR_6 = FUNC_0(VAR_0, VAR_2);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
