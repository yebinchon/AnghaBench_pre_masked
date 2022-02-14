
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {TYPE_3__* mirrors; } ;
struct r10bio {int sectors; TYPE_2__* devs; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {int recovery; int recovery_disabled; struct r10conf* private; } ;
struct md_rdev {TYPE_1__* mddev; int flags; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_8__ {struct page** pages; } ;
struct TYPE_7__ {int recovery_disabled; struct md_rdev* rdev; } ;
struct TYPE_6__ {int devnum; scalar_t__ addr; struct bio* bio; } ;
struct TYPE_5__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (struct bio*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct md_rdev*,scalar_t__,int,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct md_rdev*,scalar_t__,int,struct page*,int ,int ,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct r10bio *VAR_7)
{







 struct mddev *VAR_8 = VAR_7->mddev;
 struct r10conf *VAR_9 = VAR_8->private;
 struct bio *VAR_10 = VAR_7->devs[0].bio;
 sector_t VAR_11 = 0;
 int VAR_12 = VAR_7->sectors;
 int VAR_13 = 0;
 int VAR_14 = VAR_7->devs[0].devnum;
 int VAR_15 = VAR_7->devs[1].devnum;
 struct page **VAR_16 = FUNC_0(VAR_10)->pages;

 while (VAR_12) {
  int VAR_17 = VAR_12;
  struct md_rdev *VAR_18;
  sector_t VAR_19;
  int VAR_20;

  if (VAR_17 > (VAR_2>>9))
   VAR_17 = VAR_2 >> 9;

  VAR_18 = VAR_9->mirrors[VAR_14].rdev;
  VAR_19 = VAR_7->devs[0].addr + VAR_11,
  VAR_20 = FUNC_5(VAR_18,
      VAR_19,
      VAR_17 << 9,
      VAR_16[VAR_13],
      VAR_3, 0, 0);
  if (VAR_20) {
   VAR_18 = VAR_9->mirrors[VAR_15].rdev;
   VAR_19 = VAR_7->devs[1].addr + VAR_11;
   VAR_20 = FUNC_5(VAR_18,
       VAR_19,
       VAR_17 << 9,
       VAR_16[VAR_13],
       VAR_4, 0, 0);
   if (!VAR_20) {
    FUNC_4(VAR_6, &VAR_18->flags);
    if (!FUNC_6(VAR_5,
            &VAR_18->flags))
     FUNC_4(VAR_1,
      &VAR_18->mddev->recovery);
   }
  }
  if (!VAR_20) {




   FUNC_3(VAR_18, VAR_19, VAR_17, 0);

   if (VAR_18 != VAR_9->mirrors[VAR_15].rdev) {

    struct md_rdev *VAR_21 = VAR_9->mirrors[VAR_15].rdev;
    VAR_19 = VAR_7->devs[1].addr + VAR_11;
    VAR_20 = FUNC_3(VAR_21, VAR_19, VAR_17, 0);
    if (!VAR_20) {

     FUNC_2("md/raid10:%s: recovery aborted due to read error\n",
        FUNC_1(VAR_8));

     VAR_9->mirrors[VAR_15].recovery_disabled
      = VAR_8->recovery_disabled;
     FUNC_4(VAR_0,
      &VAR_8->recovery);
     break;
    }
   }
  }

  VAR_12 -= VAR_17;
  VAR_11 += VAR_17;
  VAR_13++;
 }
}
