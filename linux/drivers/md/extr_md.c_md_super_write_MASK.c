
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct mddev {int pending_writes; int flags; } ;
struct md_rdev {int flags; scalar_t__ bdev; scalar_t__ meta_bdev; int nr_pending; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; int bi_end_io; struct md_rdev* bi_private; TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,struct page*,int,int ) ;
 int FUNC_2 (struct bio*,scalar_t__) ;
 struct bio* FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct bio*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct mddev *VAR_10, struct md_rdev *VAR_11,
     sector_t VAR_12, int VAR_13, struct page *VAR_14)
{






 struct bio *VAR_15;
 int VAR_16 = 0;

 if (!VAR_14)
  return;

 if (FUNC_5(VAR_1, &VAR_11->flags))
  return;

 VAR_15 = FUNC_3(VAR_10);

 FUNC_0(&VAR_11->nr_pending);

 FUNC_2(VAR_15, VAR_11->meta_bdev ? VAR_11->meta_bdev : VAR_11->bdev);
 VAR_15->bi_iter.bi_sector = VAR_12;
 FUNC_1(VAR_15, VAR_14, VAR_13, 0);
 VAR_15->bi_private = VAR_11;
 VAR_15->bi_end_io = VAR_9;

 if (FUNC_5(VAR_4, &VAR_10->flags) &&
     FUNC_5(VAR_0, &VAR_11->flags) &&
     !FUNC_5(VAR_2, &VAR_11->flags))
  VAR_16 = VAR_3;
 VAR_15->bi_opf = VAR_6 | VAR_8 | VAR_7 | VAR_5 | VAR_16;

 FUNC_0(&VAR_10->pending_writes);
 FUNC_4(VAR_15);
}
