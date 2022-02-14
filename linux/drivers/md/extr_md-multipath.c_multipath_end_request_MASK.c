
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct multipath_bh {size_t path; TYPE_3__* mddev; } ;
struct mpconf {int mddev; TYPE_1__* multipaths; } ;
struct md_rdev {int bdev; } ;
struct TYPE_5__ {scalar_t__ bi_sector; } ;
struct bio {int bi_opf; int bi_status; TYPE_2__ bi_iter; struct multipath_bh* bi_private; } ;
struct TYPE_6__ {struct mpconf* private; } ;
struct TYPE_4__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*,struct md_rdev*) ;
 int FUNC_2 (struct multipath_bh*,int ) ;
 int FUNC_3 (struct multipath_bh*) ;
 int FUNC_4 (char*,int ,unsigned long long) ;
 int FUNC_5 (struct md_rdev*,int ) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_2)
{
 struct multipath_bh *VAR_3 = VAR_2->bi_private;
 struct mpconf *VAR_4 = VAR_3->mddev->private;
 struct md_rdev *VAR_5 = VAR_4->multipaths[VAR_3->path].rdev;

 if (!VAR_2->bi_status)
  FUNC_2(VAR_3, 0);
 else if (!(VAR_2->bi_opf & VAR_1)) {



  char VAR_6[VAR_0];
  FUNC_1 (VAR_3->mddev, VAR_5);
  FUNC_4("multipath: %s: rescheduling sector %llu\n",
   FUNC_0(VAR_5->bdev,VAR_6),
   (unsigned long long)VAR_2->bi_iter.bi_sector);
  FUNC_3(VAR_3);
 } else
  FUNC_2(VAR_3, VAR_2->bi_status);
 FUNC_5(VAR_5, VAR_4->mddev);
}
