
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {int bm_lock; int bm_bits; int bm_set; int bm_words; struct drbd_bitmap* bm_pages; } ;


 int FUNC_0 (struct drbd_bitmap*) ;
 int FUNC_1 (struct drbd_bitmap*,int ,int,int ) ;
 int FUNC_2 (struct drbd_bitmap*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drbd_device *VAR_0)
{
 struct drbd_bitmap *VAR_1 = VAR_0->bitmap;
 if (!FUNC_2(VAR_1))
  return;
 if (!FUNC_2(VAR_1->bm_pages))
  return;

 FUNC_3(&VAR_1->bm_lock);
 FUNC_1(VAR_1, 0, 0xff, VAR_1->bm_words);
 (void)FUNC_0(VAR_1);
 VAR_1->bm_set = VAR_1->bm_bits;
 FUNC_4(&VAR_1->bm_lock);
}
