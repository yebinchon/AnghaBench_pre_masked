
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct page {int dummy; } ;
struct drbd_device {int ldev; struct drbd_bitmap* bitmap; } ;
struct drbd_bitmap {scalar_t__ bm_dev_capacity; unsigned long bm_number_of_pages; unsigned long bm_words; unsigned long bm_set; unsigned long bm_bits; int bm_lock; struct page** bm_pages; } ;
typedef scalar_t__ sector_t ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (struct drbd_device*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct drbd_bitmap*) ;
 unsigned long FUNC_4 (struct drbd_bitmap*) ;
 int FUNC_5 (struct page**,unsigned long) ;
 int FUNC_6 (struct drbd_bitmap*,unsigned long,int,unsigned long) ;
 struct page** FUNC_7 (struct drbd_bitmap*,unsigned long) ;
 int FUNC_8 (struct drbd_bitmap*) ;
 int FUNC_9 (struct page**) ;
 int FUNC_10 (struct drbd_device*,char*,int ) ;
 int FUNC_11 (struct drbd_device*) ;
 int FUNC_12 (struct drbd_device*,char*,unsigned long,...) ;
 scalar_t__ FUNC_13 (struct drbd_device*,int ) ;
 unsigned long FUNC_14 (int ) ;
 int FUNC_15 (struct drbd_bitmap*) ;
 scalar_t__ FUNC_16 (struct drbd_device*) ;
 int FUNC_17 (struct drbd_device*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct drbd_device *VAR_8, sector_t VAR_9, int VAR_10)
{
 struct drbd_bitmap *VAR_11 = VAR_8->bitmap;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17, VAR_18;
 struct page **VAR_19, **VAR_20 = ((void*)0);
 int VAR_21 = 0;
 bool VAR_22;

 if (!FUNC_15(VAR_11))
  return -VAR_3;

 FUNC_10(VAR_8, "resize", VAR_0);

 FUNC_12(VAR_8, "drbd_bm_resize called with capacity == %llu\n",
   (unsigned long long)VAR_9);

 if (VAR_9 == VAR_11->bm_dev_capacity)
  goto out;

 if (VAR_9 == 0) {
  FUNC_18(&VAR_11->bm_lock);
  VAR_20 = VAR_11->bm_pages;
  VAR_18 = VAR_11->bm_number_of_pages;
  VAR_14 = VAR_11->bm_words;
  VAR_11->bm_pages = ((void*)0);
  VAR_11->bm_number_of_pages =
  VAR_11->bm_set =
  VAR_11->bm_bits =
  VAR_11->bm_words =
  VAR_11->bm_dev_capacity = 0;
  FUNC_19(&VAR_11->bm_lock);
  FUNC_5(VAR_20, VAR_18);
  FUNC_9(VAR_20);
  goto out;
 }
 VAR_12 = FUNC_1(FUNC_0(VAR_9, VAR_1));






 VAR_13 = FUNC_0(VAR_12, 64) >> VAR_5;

 if (FUNC_16(VAR_8)) {
  u64 VAR_23 = FUNC_14(VAR_8->ldev);
  FUNC_17(VAR_8);
  if (VAR_12 > VAR_23) {
   FUNC_12(VAR_8, "bits = %lu\n", VAR_12);
   FUNC_12(VAR_8, "bits_on_disk = %llu\n", VAR_23);
   VAR_21 = -VAR_4;
   goto out;
  }
 }

 VAR_16 = FUNC_0(VAR_13*sizeof(long), VAR_7) >> VAR_6;
 VAR_17 = VAR_11->bm_number_of_pages;
 if (VAR_16 == VAR_17) {
  FUNC_2(VAR_8, VAR_11->bm_pages != ((void*)0));
  VAR_19 = VAR_11->bm_pages;
 } else {
  if (FUNC_13(VAR_8, VAR_2))
   VAR_19 = ((void*)0);
  else
   VAR_19 = FUNC_7(VAR_11, VAR_16);
 }

 if (!VAR_19) {
  VAR_21 = -VAR_3;
  goto out;
 }

 FUNC_18(&VAR_11->bm_lock);
 VAR_20 = VAR_11->bm_pages;
 VAR_14 = VAR_11->bm_words;
 VAR_15 = VAR_11->bm_bits;

 VAR_22 = VAR_12 > VAR_15;
 if (VAR_20 && VAR_22 && VAR_10)
  FUNC_8(VAR_11);

 VAR_11->bm_pages = VAR_19;
 VAR_11->bm_number_of_pages = VAR_16;
 VAR_11->bm_bits = VAR_12;
 VAR_11->bm_words = VAR_13;
 VAR_11->bm_dev_capacity = VAR_9;

 if (VAR_22) {
  if (VAR_10) {
   FUNC_6(VAR_11, VAR_14, 0xff, VAR_13-VAR_14);
   VAR_11->bm_set += VAR_12 - VAR_15;
  } else
   FUNC_6(VAR_11, VAR_14, 0x00, VAR_13-VAR_14);

 }

 if (VAR_16 < VAR_17) {

  FUNC_5(VAR_20 + VAR_16, VAR_17 - VAR_16);
 }

 (void)FUNC_3(VAR_11);

 FUNC_19(&VAR_11->bm_lock);
 if (VAR_20 != VAR_19)
  FUNC_9(VAR_20);
 if (!VAR_22)
  VAR_11->bm_set = FUNC_4(VAR_11);
 FUNC_12(VAR_8, "resync bitmap: bits=%lu words=%lu pages=%lu\n", VAR_12, VAR_13, VAR_16);

 out:
 FUNC_11(VAR_8);
 return VAR_21;
}
