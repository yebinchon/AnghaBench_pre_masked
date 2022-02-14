
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct log_writes_c {size_t sectorsize; TYPE_2__* logdev; } ;
struct TYPE_3__ {scalar_t__ bi_sector; scalar_t__ bi_size; } ;
struct bio {struct log_writes_c* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 size_t FUNC_3 (struct bio*,struct page*,size_t,int ) ;
 struct bio* FUNC_4 (int ,int) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int ) ;
 int FUNC_7 (struct bio*,int ,int ) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (void*,void*,size_t) ;
 int FUNC_11 (void*,int ,size_t) ;
 int FUNC_12 (struct log_writes_c*) ;
 int FUNC_13 (struct bio*) ;

__attribute__((used)) static int FUNC_14(struct log_writes_c *VAR_5, void *VAR_6,
     size_t VAR_7, void *VAR_8, size_t VAR_9,
     sector_t VAR_10)
{
 struct bio *VAR_11;
 struct page *VAR_12;
 void *VAR_13;
 size_t VAR_14;

 VAR_11 = FUNC_4(VAR_0, 1);
 if (!VAR_11) {
  FUNC_0("Couldn't alloc log bio");
  goto error;
 }
 VAR_11->bi_iter.bi_size = 0;
 VAR_11->bi_iter.bi_sector = VAR_10;
 FUNC_6(VAR_11, VAR_5->logdev->bdev);
 VAR_11->bi_end_io = (VAR_10 == VAR_2) ?
     VAR_4 : VAR_3;
 VAR_11->bi_private = VAR_5;
 FUNC_7(VAR_11, VAR_1, 0);

 VAR_12 = FUNC_2(VAR_0);
 if (!VAR_12) {
  FUNC_0("Couldn't alloc log page");
  FUNC_5(VAR_11);
  goto error;
 }

 VAR_13 = FUNC_8(VAR_12);
 FUNC_10(VAR_13, VAR_6, VAR_7);
 if (VAR_9)
  FUNC_10(VAR_13 + VAR_7, VAR_8, VAR_9);
 FUNC_11(VAR_13 + VAR_7 + VAR_9, 0,
        VAR_5->sectorsize - VAR_7 - VAR_9);
 FUNC_9(VAR_13);

 VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_5->sectorsize, 0);
 if (VAR_14 != VAR_5->sectorsize) {
  FUNC_0("Couldn't add page to the log block");
  goto error_bio;
 }
 FUNC_13(VAR_11);
 return 0;
error_bio:
 FUNC_5(VAR_11);
 FUNC_1(VAR_12);
error:
 FUNC_12(VAR_5);
 return -1;
}
