
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct multipath_info {TYPE_2__* rdev; } ;
struct TYPE_9__ {int bi_sector; } ;
struct TYPE_11__ {struct multipath_bh* bi_private; int bi_end_io; int bi_opf; TYPE_1__ bi_iter; } ;
struct multipath_bh {scalar_t__ path; TYPE_3__ bio; struct mddev* mddev; struct bio* master_bio; } ;
struct mpconf {struct multipath_info* multipaths; int pool; } ;
struct mddev {struct mpconf* private; } ;
struct bio {int bi_opf; } ;
struct TYPE_10__ {int bdev; scalar_t__ data_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct bio*) ;
 int FUNC_1 (TYPE_3__*,int *,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct mddev*,struct bio*) ;
 int FUNC_6 (struct mddev*,TYPE_3__*) ;
 int FUNC_7 (struct mddev*,TYPE_3__*) ;
 struct multipath_bh* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct multipath_bh*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct mpconf*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static bool FUNC_12(struct mddev *VAR_4, struct bio * VAR_5)
{
 struct mpconf *VAR_6 = VAR_4->private;
 struct multipath_bh * VAR_7;
 struct multipath_info *VAR_8;

 if (FUNC_11(VAR_5->bi_opf & VAR_2)) {
  FUNC_5(VAR_4, VAR_5);
  return 1;
 }

 VAR_7 = FUNC_8(&VAR_6->pool, VAR_0);

 VAR_7->master_bio = VAR_5;
 VAR_7->mddev = VAR_4;

 VAR_7->path = FUNC_10(VAR_6);
 if (VAR_7->path < 0) {
  FUNC_2(VAR_5);
  FUNC_9(VAR_7, &VAR_6->pool);
  return 1;
 }
 VAR_8 = VAR_6->multipaths + VAR_7->path;

 FUNC_1(&VAR_7->bio, ((void*)0), 0);
 FUNC_0(&VAR_7->bio, VAR_5);

 VAR_7->bio.bi_iter.bi_sector += VAR_8->rdev->data_offset;
 FUNC_3(&VAR_7->bio, VAR_8->rdev->bdev);
 VAR_7->bio.bi_opf |= VAR_1;
 VAR_7->bio.bi_end_io = VAR_3;
 VAR_7->bio.bi_private = VAR_7;
 FUNC_7(VAR_4, &VAR_7->bio);
 FUNC_6(VAR_4, &VAR_7->bio);
 FUNC_4(&VAR_7->bio);
 return 1;
}
