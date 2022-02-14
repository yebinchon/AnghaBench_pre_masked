
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct md_rdev {scalar_t__ sb_start; scalar_t__ new_data_offset; scalar_t__ data_offset; TYPE_2__* mddev; int bdev; int meta_bdev; } ;
struct TYPE_3__ {scalar_t__ bi_sector; } ;
struct bio {int bi_status; TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ reshape_position; int reshape_backwards; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bio*,struct page*,int,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int,int) ;
 struct bio* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct bio*) ;

int FUNC_6(struct md_rdev *VAR_1, sector_t VAR_2, int VAR_3,
   struct page *VAR_4, int VAR_5, int VAR_6, bool VAR_7)
{
 struct bio *VAR_8 = FUNC_4(VAR_1->mddev);
 int VAR_9;

 if (VAR_7 && VAR_1->meta_bdev)
  FUNC_2(VAR_8, VAR_1->meta_bdev);
 else
  FUNC_2(VAR_8, VAR_1->bdev);
 FUNC_3(VAR_8, VAR_5, VAR_6);
 if (VAR_7)
  VAR_8->bi_iter.bi_sector = VAR_2 + VAR_1->sb_start;
 else if (VAR_1->mddev->reshape_position != VAR_0 &&
   (VAR_1->mddev->reshape_backwards ==
    (VAR_2 >= VAR_1->mddev->reshape_position)))
  VAR_8->bi_iter.bi_sector = VAR_2 + VAR_1->new_data_offset;
 else
  VAR_8->bi_iter.bi_sector = VAR_2 + VAR_1->data_offset;
 FUNC_0(VAR_8, VAR_4, VAR_3, 0);

 FUNC_5(VAR_8);

 VAR_9 = !VAR_8->bi_status;
 FUNC_1(VAR_8);
 return VAR_9;
}
