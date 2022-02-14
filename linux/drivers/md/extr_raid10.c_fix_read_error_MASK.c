
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r10conf {int copies; int tmppage; TYPE_2__* mirrors; } ;
struct r10bio {int sectors; size_t read_slot; TYPE_1__* devs; } ;
struct mddev {int max_corr_read_errors; } ;
struct md_rdev {int corrected_errors; int bdev; int nr_pending; int flags; int read_errors; } ;
typedef int sector_t ;
struct TYPE_4__ {struct md_rdev* rdev; } ;
struct TYPE_3__ {int devnum; scalar_t__ addr; void* bio; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 scalar_t__ FUNC_5 (struct r10bio*,struct md_rdev*) ;
 scalar_t__ FUNC_6 (struct md_rdev*,scalar_t__,int,int *,int*) ;
 int FUNC_7 (struct mddev*,struct md_rdev*) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (char*,int ,int,unsigned long long,char*) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (struct md_rdev*,scalar_t__,int,int ,int ) ;
 struct md_rdev* FUNC_12 (struct md_rdev*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct md_rdev*,struct mddev*) ;
 int FUNC_16 (struct md_rdev*,scalar_t__,int,int ) ;
 int FUNC_17 (struct md_rdev*,scalar_t__,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct r10conf *VAR_8, struct mddev *VAR_9, struct r10bio *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = VAR_10->sectors;
 struct md_rdev *VAR_13;
 int VAR_14 = FUNC_2(&VAR_9->max_corr_read_errors);
 int VAR_15 = VAR_10->devs[VAR_10->read_slot].devnum;




 VAR_13 = VAR_8->mirrors[VAR_15].rdev;

 if (FUNC_18(VAR_1, &VAR_13->flags))


  return;

 FUNC_4(VAR_9, VAR_13);
 FUNC_1(&VAR_13->read_errors);
 if (FUNC_2(&VAR_13->read_errors) > VAR_14) {
  char VAR_16[VAR_0];
  FUNC_3(VAR_13->bdev, VAR_16);

  FUNC_10("md/raid10:%s: %s: Raid device exceeded read_error threshold [cur %d:max %d]\n",
     FUNC_8(VAR_9), VAR_16,
     FUNC_2(&VAR_13->read_errors), VAR_14);
  FUNC_10("md/raid10:%s: %s: Failing raid device\n",
     FUNC_8(VAR_9), VAR_16);
  FUNC_7(VAR_9, VAR_13);
  VAR_10->devs[VAR_10->read_slot].bio = VAR_2;
  return;
 }

 while(VAR_12) {
  int VAR_17 = VAR_12;
  int VAR_18 = VAR_10->read_slot;
  int VAR_19 = 0;
  int VAR_20;

  if (VAR_17 > (VAR_4>>9))
   VAR_17 = VAR_4 >> 9;

  FUNC_13();
  do {
   sector_t VAR_21;
   int VAR_22;

   VAR_15 = VAR_10->devs[VAR_18].devnum;
   VAR_13 = FUNC_12(VAR_8->mirrors[VAR_15].rdev);
   if (VAR_13 &&
       FUNC_18(VAR_3, &VAR_13->flags) &&
       !FUNC_18(VAR_1, &VAR_13->flags) &&
       FUNC_6(VAR_13, VAR_10->devs[VAR_18].addr + VAR_11, VAR_17,
     &VAR_21, &VAR_22) == 0) {
    FUNC_1(&VAR_13->nr_pending);
    FUNC_14();
    VAR_19 = FUNC_17(VAR_13,
             VAR_10->devs[VAR_18].addr +
             VAR_11,
             VAR_17<<9,
             VAR_8->tmppage,
             VAR_6, 0, 0);
    FUNC_15(VAR_13, VAR_9);
    FUNC_13();
    if (VAR_19)
     break;
   }
   VAR_18++;
   if (VAR_18 == VAR_8->copies)
    VAR_18 = 0;
  } while (!VAR_19 && VAR_18 != VAR_10->read_slot);
  FUNC_14();

  if (!VAR_19) {




   int VAR_23 = VAR_10->devs[VAR_10->read_slot].devnum;
   VAR_13 = VAR_8->mirrors[VAR_23].rdev;

   if (!FUNC_16(
        VAR_13,
        VAR_10->devs[VAR_10->read_slot].addr
        + VAR_11,
        VAR_17, 0)) {
    FUNC_7(VAR_9, VAR_13);
    VAR_10->devs[VAR_10->read_slot].bio
     = VAR_2;
   }
   break;
  }

  VAR_20 = VAR_18;

  FUNC_13();
  while (VAR_18 != VAR_10->read_slot) {
   char VAR_24[VAR_0];

   if (VAR_18==0)
    VAR_18 = VAR_8->copies;
   VAR_18--;
   VAR_15 = VAR_10->devs[VAR_18].devnum;
   VAR_13 = FUNC_12(VAR_8->mirrors[VAR_15].rdev);
   if (!VAR_13 ||
       FUNC_18(VAR_1, &VAR_13->flags) ||
       !FUNC_18(VAR_3, &VAR_13->flags))
    continue;

   FUNC_1(&VAR_13->nr_pending);
   FUNC_14();
   if (FUNC_11(VAR_13,
          VAR_10->devs[VAR_18].addr +
          VAR_11,
          VAR_17, VAR_8->tmppage, VAR_7)
       == 0) {

    FUNC_10("md/raid10:%s: read correction write failed (%d sectors at %llu on %s)\n",
       FUNC_8(VAR_9), VAR_17,
       (unsigned long long)(
        VAR_11 +
        FUNC_5(VAR_10,
             VAR_13)),
       FUNC_3(VAR_13->bdev, VAR_24));
    FUNC_10("md/raid10:%s: %s: failing drive\n",
       FUNC_8(VAR_9),
       FUNC_3(VAR_13->bdev, VAR_24));
   }
   FUNC_15(VAR_13, VAR_9);
   FUNC_13();
  }
  VAR_18 = VAR_20;
  while (VAR_18 != VAR_10->read_slot) {
   char VAR_25[VAR_0];

   if (VAR_18==0)
    VAR_18 = VAR_8->copies;
   VAR_18--;
   VAR_15 = VAR_10->devs[VAR_18].devnum;
   VAR_13 = FUNC_12(VAR_8->mirrors[VAR_15].rdev);
   if (!VAR_13 ||
       FUNC_18(VAR_1, &VAR_13->flags) ||
       !FUNC_18(VAR_3, &VAR_13->flags))
    continue;

   FUNC_1(&VAR_13->nr_pending);
   FUNC_14();
   switch (FUNC_11(VAR_13,
          VAR_10->devs[VAR_18].addr +
          VAR_11,
          VAR_17, VAR_8->tmppage,
       VAR_5)) {
   case 0:

    FUNC_10("md/raid10:%s: unable to read back corrected sectors (%d sectors at %llu on %s)\n",
           FUNC_8(VAR_9), VAR_17,
           (unsigned long long)(
            VAR_11 +
            FUNC_5(VAR_10, VAR_13)),
           FUNC_3(VAR_13->bdev, VAR_25));
    FUNC_10("md/raid10:%s: %s: failing drive\n",
           FUNC_8(VAR_9),
           FUNC_3(VAR_13->bdev, VAR_25));
    break;
   case 1:
    FUNC_9("md/raid10:%s: read error corrected (%d sectors at %llu on %s)\n",
           FUNC_8(VAR_9), VAR_17,
           (unsigned long long)(
            VAR_11 +
            FUNC_5(VAR_10, VAR_13)),
           FUNC_3(VAR_13->bdev, VAR_25));
    FUNC_0(VAR_17, &VAR_13->corrected_errors);
   }

   FUNC_15(VAR_13, VAR_9);
   FUNC_13();
  }
  FUNC_14();

  VAR_12 -= VAR_17;
  VAR_11 += VAR_17;
 }
}
