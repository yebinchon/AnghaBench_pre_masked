
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {int bm_io_wait; int bm_change; int bm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct drbd_bitmap* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drbd_device *VAR_2)
{
 struct drbd_bitmap *VAR_3 = VAR_2->bitmap;
 FUNC_0(VAR_3 != ((void*)0));
 VAR_3 = FUNC_2(sizeof(struct drbd_bitmap), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_4(&VAR_3->bm_lock);
 FUNC_3(&VAR_3->bm_change);
 FUNC_1(&VAR_3->bm_io_wait);

 VAR_2->bitmap = VAR_3;

 return 0;
}
