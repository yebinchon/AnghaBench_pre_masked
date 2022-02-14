
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_1__* mirrors; int recovery_disabled; } ;
struct r1bio {size_t read_disk; int sector; int sectors; int state; struct bio** bios; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {int recovery; int recovery_disabled; struct r1conf* private; } ;
struct md_rdev {int corrected_errors; int flags; } ;
struct bio {scalar_t__ bi_status; int * bi_end_io; } ;
typedef int sector_t ;
struct TYPE_4__ {struct page** pages; } ;
struct TYPE_3__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct bio*,char*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 TYPE_2__* FUNC_2 (struct bio*) ;
 int FUNC_3 (struct mddev*,int,int ) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (char*,int ,int ,unsigned long long) ;
 int FUNC_7 (struct r1bio*) ;
 scalar_t__ FUNC_8 (struct md_rdev*,int,int,struct page*,int ) ;
 int FUNC_9 (struct md_rdev*,struct mddev*) ;
 int FUNC_10 (struct md_rdev*,int,int,int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (struct md_rdev*,int,int,struct page*,int ,int ,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct r1bio *VAR_11)
{
 struct mddev *VAR_12 = VAR_11->mddev;
 struct r1conf *VAR_13 = VAR_12->private;
 struct bio *VAR_14 = VAR_11->bios[VAR_11->read_disk];
 struct page **VAR_15 = FUNC_2(VAR_14)->pages;
 sector_t VAR_16 = VAR_11->sector;
 int VAR_17 = VAR_11->sectors;
 int VAR_18 = 0;
 struct md_rdev *VAR_19;

 VAR_19 = VAR_13->mirrors[VAR_11->read_disk].rdev;
 if (FUNC_13(VAR_1, &VAR_19->flags)) {


  FUNC_4(VAR_12, VAR_19);
  if (FUNC_13(VAR_2, &VAR_19->flags))



   VAR_14->bi_end_io = VAR_10;
 }

 while(VAR_17) {
  int VAR_20 = VAR_17;
  int VAR_21 = VAR_11->read_disk;
  int VAR_22 = 0;
  int VAR_23;

  if (VAR_20 > (VAR_4>>9))
   VAR_20 = VAR_4 >> 9;
  do {
   if (VAR_11->bios[VAR_21]->bi_end_io == VAR_9) {




    VAR_19 = VAR_13->mirrors[VAR_21].rdev;
    if (FUNC_12(VAR_19, VAR_16, VAR_20<<9,
       VAR_15[VAR_18],
       VAR_7, 0, 0)) {
     VAR_22 = 1;
     break;
    }
   }
   VAR_21++;
   if (VAR_21 == VAR_13->raid_disks * 2)
    VAR_21 = 0;
  } while (!VAR_22 && VAR_21 != VAR_11->read_disk);

  if (!VAR_22) {
   char VAR_24[VAR_0];
   int VAR_25 = 0;





   FUNC_6("md/raid1:%s: %s: unrecoverable I/O read error for block %llu\n",
         FUNC_5(VAR_12), FUNC_1(VAR_14, VAR_24),
         (unsigned long long)VAR_11->sector);
   for (VAR_21 = 0; VAR_21 < VAR_13->raid_disks * 2; VAR_21++) {
    VAR_19 = VAR_13->mirrors[VAR_21].rdev;
    if (!VAR_19 || FUNC_13(VAR_2, &VAR_19->flags))
     continue;
    if (!FUNC_10(VAR_19, VAR_16, VAR_20, 0))
     VAR_25 = 1;
   }
   if (VAR_25) {
    VAR_13->recovery_disabled =
     VAR_12->recovery_disabled;
    FUNC_11(VAR_3, &VAR_12->recovery);
    FUNC_3(VAR_12, VAR_11->sectors, 0);
    FUNC_7(VAR_11);
    return 0;
   }

   VAR_17 -= VAR_20;
   VAR_16 += VAR_20;
   VAR_18++;
   continue;
  }

  VAR_23 = VAR_21;

  while (VAR_21 != VAR_11->read_disk) {
   if (VAR_21 == 0)
    VAR_21 = VAR_13->raid_disks * 2;
   VAR_21--;
   if (VAR_11->bios[VAR_21]->bi_end_io != VAR_9)
    continue;
   VAR_19 = VAR_13->mirrors[VAR_21].rdev;
   if (FUNC_8(VAR_19, VAR_16, VAR_20,
         VAR_15[VAR_18],
         VAR_8) == 0) {
    VAR_11->bios[VAR_21]->bi_end_io = ((void*)0);
    FUNC_9(VAR_19, VAR_12);
   }
  }
  VAR_21 = VAR_23;
  while (VAR_21 != VAR_11->read_disk) {
   if (VAR_21 == 0)
    VAR_21 = VAR_13->raid_disks * 2;
   VAR_21--;
   if (VAR_11->bios[VAR_21]->bi_end_io != VAR_9)
    continue;
   VAR_19 = VAR_13->mirrors[VAR_21].rdev;
   if (FUNC_8(VAR_19, VAR_16, VAR_20,
         VAR_15[VAR_18],
         VAR_6) != 0)
    FUNC_0(VAR_20, &VAR_19->corrected_errors);
  }
  VAR_17 -= VAR_20;
  VAR_16 += VAR_20;
  VAR_18 ++;
 }
 FUNC_11(VAR_5, &VAR_11->state);
 VAR_14->bi_status = 0;
 return 1;
}
