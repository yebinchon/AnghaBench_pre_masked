
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int al_wait; int al_lock; int resync_wenr; scalar_t__ resync_locked; int resync; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drbd_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drbd_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drbd_device *VAR_2)
{
 FUNC_3(&VAR_2->al_lock);

 if (FUNC_0(VAR_2, VAR_0)) {
  FUNC_1(VAR_2->resync);
  FUNC_2(VAR_2);
 }
 VAR_2->resync_locked = 0;
 VAR_2->resync_wenr = VAR_1;
 FUNC_4(&VAR_2->al_lock);
 FUNC_5(&VAR_2->al_wait);
}
