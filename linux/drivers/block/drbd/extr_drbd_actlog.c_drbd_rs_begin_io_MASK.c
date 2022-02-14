
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int al_lock; int al_wait; int resync_locked; int resync; } ;
struct bm_extent {scalar_t__ flags; int lce; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bm_extent* FUNC_1 (struct drbd_device*,unsigned int) ;
 int FUNC_2 (struct drbd_device*,unsigned int) ;
 int FUNC_3 (struct drbd_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (int ,...) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct drbd_device *VAR_5, sector_t VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_6);
 struct bm_extent *VAR_8;
 int VAR_9, VAR_10;
 bool VAR_11;

retry:
 VAR_10 = FUNC_10(VAR_5->al_wait,
   (VAR_8 = FUNC_1(VAR_5, VAR_7)));
 if (VAR_10)
  return -VAR_3;

 if (FUNC_9(VAR_1, &VAR_8->flags))
  return 0;


 VAR_11 = FUNC_3(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_10 = FUNC_10(VAR_5->al_wait,
            !FUNC_2(VAR_5, VAR_7 * VAR_0 + VAR_9) ||
            (VAR_11 && FUNC_9(VAR_2, &VAR_8->flags)));

  if (VAR_10 || (VAR_11 && FUNC_9(VAR_2, &VAR_8->flags))) {
   FUNC_7(&VAR_5->al_lock);
   if (FUNC_4(VAR_5->resync, &VAR_8->lce) == 0) {
    VAR_8->flags = 0;
    VAR_5->resync_locked--;
    FUNC_11(&VAR_5->al_wait);
   }
   FUNC_8(&VAR_5->al_lock);
   if (VAR_10)
    return -VAR_3;
   if (FUNC_5(VAR_4/10))
    return -VAR_3;
   goto retry;
  }
 }
 FUNC_6(VAR_1, &VAR_8->flags);
 return 0;
}
