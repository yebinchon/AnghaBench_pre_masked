
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {unsigned long bm_set; int bm_lock; struct drbd_bitmap* bm_pages; } ;


 int FUNC_0 (struct drbd_bitmap*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(struct drbd_device *VAR_0)
{
 struct drbd_bitmap *VAR_1 = VAR_0->bitmap;
 unsigned long VAR_2;
 unsigned long VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;
 if (!FUNC_0(VAR_1->bm_pages))
  return 0;

 FUNC_1(&VAR_1->bm_lock, VAR_3);
 VAR_2 = VAR_1->bm_set;
 FUNC_2(&VAR_1->bm_lock, VAR_3);

 return VAR_2;
}
