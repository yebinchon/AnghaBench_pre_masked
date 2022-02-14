
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {int misc_wait; struct drbd_bitmap* bitmap; } ;
struct drbd_bm_aio_ctx {int flags; int done; int kref; int in_flight; int error; struct drbd_device* device; } ;
struct drbd_bitmap {int * bm_pages; } ;
struct bio {TYPE_1__* bi_io_vec; scalar_t__ bi_status; struct drbd_bm_aio_ctx* bi_private; } ;
struct TYPE_2__ {int bv_page; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct drbd_device*,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (struct drbd_device*,char*,scalar_t__,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct drbd_device*,char*,unsigned int) ;
 int FUNC_12 (struct drbd_device*,char*,unsigned int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct bio *VAR_4)
{
 struct drbd_bm_aio_ctx *VAR_5 = VAR_4->bi_private;
 struct drbd_device *VAR_6 = VAR_5->device;
 struct drbd_bitmap *VAR_7 = VAR_6->bitmap;
 unsigned int VAR_8 = FUNC_6(FUNC_2(VAR_4));

 if ((VAR_5->flags & VAR_0) == 0 &&
     !FUNC_9(VAR_7->bm_pages[VAR_8]))
  FUNC_11(VAR_6, "bitmap page idx %u changed during IO!\n", VAR_8);

 if (VAR_4->bi_status) {


  VAR_5->error = FUNC_4(VAR_4->bi_status);
  FUNC_8(VAR_7->bm_pages[VAR_8]);


  if (FUNC_0(&VAR_3))
   FUNC_10(VAR_6, "IO ERROR %d on bitmap page idx %u\n",
     VAR_4->bi_status, VAR_8);
 } else {
  FUNC_5(VAR_7->bm_pages[VAR_8]);
  FUNC_12(VAR_6, "bitmap page idx %u completed\n", VAR_8);
 }

 FUNC_7(VAR_6, VAR_8);

 if (VAR_5->flags & VAR_0)
  FUNC_14(VAR_4->bi_io_vec[0].bv_page, &VAR_2);

 FUNC_3(VAR_4);

 if (FUNC_1(&VAR_5->in_flight)) {
  VAR_5->done = 1;
  FUNC_15(&VAR_6->misc_wait);
  FUNC_13(&VAR_5->kref, &VAR_1);
 }
}
