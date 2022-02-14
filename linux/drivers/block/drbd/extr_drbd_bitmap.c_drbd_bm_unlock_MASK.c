
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {int bm_flags; int bm_change; int * bm_task; int * bm_why; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drbd_device *VAR_1)
{
 struct drbd_bitmap *VAR_2 = VAR_1->bitmap;
 if (!VAR_2) {
  FUNC_0(VAR_1, "FIXME no bitmap in drbd_bm_unlock!?\n");
  return;
 }

 if (!(VAR_0 & VAR_1->bitmap->bm_flags))
  FUNC_0(VAR_1, "FIXME bitmap not locked in bm_unlock\n");

 VAR_2->bm_flags &= ~VAR_0;
 VAR_2->bm_why = ((void*)0);
 VAR_2->bm_task = ((void*)0);
 FUNC_1(&VAR_2->bm_change);
}
