
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {unsigned long bm_bits; } ;


 int FUNC_0 (struct drbd_bitmap*) ;

unsigned long FUNC_1(struct drbd_device *VAR_0)
{
 struct drbd_bitmap *VAR_1 = VAR_0->bitmap;
 if (!FUNC_0(VAR_1))
  return 0;

 return VAR_1->bm_bits;
}
