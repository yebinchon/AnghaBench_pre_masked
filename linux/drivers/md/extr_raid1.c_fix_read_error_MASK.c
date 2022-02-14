
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int tmppage; TYPE_1__* mirrors; struct mddev* mddev; } ;
struct mddev {int dummy; } ;
struct md_rdev {scalar_t__ recovery_offset; scalar_t__ data_offset; int bdev; int corrected_errors; int nr_pending; int flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (char*,int ,int,unsigned long long,int ) ;
 scalar_t__ FUNC_7 (struct md_rdev*,scalar_t__,int,int ,int ) ;
 struct md_rdev* FUNC_8 (struct md_rdev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct md_rdev*,struct mddev*) ;
 int FUNC_12 (struct md_rdev*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_13 (struct md_rdev*,scalar_t__,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct r1conf *VAR_7, int VAR_8,
      sector_t VAR_9, int VAR_10)
{
 struct mddev *VAR_11 = VAR_7->mddev;
 while(VAR_10) {
  int VAR_12 = VAR_10;
  int VAR_13 = VAR_8;
  int VAR_14 = 0;
  int VAR_15;
  struct md_rdev *VAR_16;

  if (VAR_12 > (VAR_3>>9))
   VAR_12 = VAR_3 >> 9;

  do {
   sector_t VAR_17;
   int VAR_18;

   FUNC_9();
   VAR_16 = FUNC_8(VAR_7->mirrors[VAR_13].rdev);
   if (VAR_16 &&
       (FUNC_14(VAR_2, &VAR_16->flags) ||
        (!FUNC_14(VAR_1, &VAR_16->flags) &&
         VAR_16->recovery_offset >= VAR_9 + VAR_12)) &&
       FUNC_3(VAR_16, VAR_9, VAR_12,
     &VAR_17, &VAR_18) == 0) {
    FUNC_1(&VAR_16->nr_pending);
    FUNC_10();
    if (FUNC_13(VAR_16, VAR_9, VAR_12<<9,
      VAR_7->tmppage, VAR_5, 0, 0))
     VAR_14 = 1;
    FUNC_11(VAR_16, VAR_11);
    if (VAR_14)
     break;
   } else
    FUNC_10();
   VAR_13++;
   if (VAR_13 == VAR_7->raid_disks * 2)
    VAR_13 = 0;
  } while (!VAR_14 && VAR_13 != VAR_8);

  if (!VAR_14) {

   struct md_rdev *VAR_19 = VAR_7->mirrors[VAR_8].rdev;
   if (!FUNC_12(VAR_19, VAR_9, VAR_12, 0))
    FUNC_4(VAR_11, VAR_19);
   break;
  }

  VAR_15 = VAR_13;
  while (VAR_13 != VAR_8) {
   if (VAR_13==0)
    VAR_13 = VAR_7->raid_disks * 2;
   VAR_13--;
   FUNC_9();
   VAR_16 = FUNC_8(VAR_7->mirrors[VAR_13].rdev);
   if (VAR_16 &&
       !FUNC_14(VAR_1, &VAR_16->flags)) {
    FUNC_1(&VAR_16->nr_pending);
    FUNC_10();
    FUNC_7(VAR_16, VAR_9, VAR_12,
      VAR_7->tmppage, VAR_6);
    FUNC_11(VAR_16, VAR_11);
   } else
    FUNC_10();
  }
  VAR_13 = VAR_15;
  while (VAR_13 != VAR_8) {
   char VAR_20[VAR_0];
   if (VAR_13==0)
    VAR_13 = VAR_7->raid_disks * 2;
   VAR_13--;
   FUNC_9();
   VAR_16 = FUNC_8(VAR_7->mirrors[VAR_13].rdev);
   if (VAR_16 &&
       !FUNC_14(VAR_1, &VAR_16->flags)) {
    FUNC_1(&VAR_16->nr_pending);
    FUNC_10();
    if (FUNC_7(VAR_16, VAR_9, VAR_12,
          VAR_7->tmppage, VAR_4)) {
     FUNC_0(VAR_12, &VAR_16->corrected_errors);
     FUNC_6("md/raid1:%s: read error corrected (%d sectors at %llu on %s)\n",
      FUNC_5(VAR_11), VAR_12,
      (unsigned long long)(VAR_9 +
             VAR_16->data_offset),
      FUNC_2(VAR_16->bdev, VAR_20));
    }
    FUNC_11(VAR_16, VAR_11);
   } else
    FUNC_10();
  }
  VAR_10 -= VAR_12;
  VAR_9 += VAR_12;
 }
}
