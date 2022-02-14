
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct geom {int near_copies; int far_copies; } ;
struct r10conf {scalar_t__ const next_resync; int copies; TYPE_2__* mirrors; TYPE_3__* mddev; struct geom geo; } ;
struct r10bio {scalar_t__ sector; int sectors; int read_slot; TYPE_1__* devs; int state; } ;
struct md_rdev {scalar_t__ recovery_offset; int nr_pending; int bdev; int flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_9__ {scalar_t__ (* area_resyncing ) (TYPE_3__*,int ,scalar_t__ const,scalar_t__ const) ;} ;
struct TYPE_8__ {scalar_t__ recovery_cp; } ;
struct TYPE_7__ {scalar_t__ head_position; int rdev; int replacement; } ;
struct TYPE_6__ {scalar_t__ bio; int devnum; scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 TYPE_5__* VAR_7 ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct r10conf*,struct r10bio*) ;
 struct md_rdev* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ,scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static struct md_rdev *FUNC_15(struct r10conf *VAR_8,
        struct r10bio *VAR_9,
        int *VAR_10)
{
 const sector_t VAR_11 = VAR_9->sector;
 int VAR_12, VAR_13;
 int VAR_14 = VAR_9->sectors;
 int VAR_15;
 sector_t VAR_16, VAR_17;
 struct md_rdev *VAR_18, *VAR_19, *VAR_20 = ((void*)0);
 int VAR_21;
 int VAR_22, VAR_23;
 bool VAR_24 = 0;
 unsigned int VAR_25;
 struct geom *VAR_26 = &VAR_8->geo;

 FUNC_8(VAR_8, VAR_9);
 FUNC_10();
 VAR_22 = -1;
 VAR_25 = VAR_6;
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_17 = VAR_3;
 VAR_15 = 0;
 VAR_21 = 1;
 FUNC_5(VAR_4, &VAR_9->state);






 if ((VAR_8->mddev->recovery_cp < VAR_3
      && (VAR_11 + VAR_14 >= VAR_8->next_resync)) ||
     (FUNC_7(VAR_8->mddev) &&
      VAR_7->area_resyncing(VAR_8->mddev, VAR_5, VAR_11,
         VAR_11 + VAR_14)))
  VAR_21 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_8->copies ; VAR_13++) {
  sector_t VAR_27;
  int VAR_28;
  sector_t VAR_29;
  unsigned int VAR_30;
  bool VAR_31;

  if (VAR_9->devs[VAR_13].bio == VAR_1)
   continue;
  VAR_12 = VAR_9->devs[VAR_13].devnum;
  VAR_20 = FUNC_9(VAR_8->mirrors[VAR_12].replacement);
  if (VAR_20 == ((void*)0) || FUNC_14(VAR_0, &VAR_20->flags) ||
      VAR_9->devs[VAR_13].addr + VAR_14 > VAR_20->recovery_offset)
   VAR_20 = FUNC_9(VAR_8->mirrors[VAR_12].rdev);
  if (VAR_20 == ((void*)0) ||
      FUNC_14(VAR_0, &VAR_20->flags))
   continue;
  if (!FUNC_14(VAR_2, &VAR_20->flags) &&
      VAR_9->devs[VAR_13].addr + VAR_14 > VAR_20->recovery_offset)
   continue;

  VAR_29 = VAR_9->devs[VAR_13].addr;
  if (FUNC_6(VAR_20, VAR_29, VAR_14,
    &VAR_27, &VAR_28)) {
   if (VAR_17 < VAR_3)

    continue;
   if (VAR_27 <= VAR_29) {




    VAR_28 -= (VAR_29 - VAR_27);
    if (!VAR_21 && VAR_14 > VAR_28)
     VAR_14 = VAR_28;
    if (VAR_15 > VAR_14)
     VAR_15 = VAR_14;
   } else {
    sector_t VAR_32 =
     VAR_27 - VAR_29;
    if (VAR_32 > VAR_15) {
     VAR_15 = VAR_32;
     VAR_22 = VAR_13;
     VAR_18 = VAR_20;
    }
    if (!VAR_21)

     break;
   }
   continue;
  } else
   VAR_15 = VAR_14;

  if (!VAR_21)
   break;

  VAR_31 = FUNC_4(FUNC_3(VAR_20->bdev));
  VAR_24 |= VAR_31;
  VAR_30 = FUNC_2(&VAR_20->nr_pending);
  if (VAR_25 > VAR_30 && VAR_31) {
   VAR_25 = VAR_30;
   VAR_23 = VAR_13;
   VAR_19 = VAR_20;
  }

  if (VAR_22 >= 0)

   FUNC_12(VAR_4, &VAR_9->state);




  if (VAR_26->near_copies > 1 && !VAR_30)
   VAR_16 = 0;


  else if (VAR_26->far_copies > 1)
   VAR_16 = VAR_9->devs[VAR_13].addr;
  else
   VAR_16 = FUNC_0(VAR_9->devs[VAR_13].addr -
        VAR_8->mirrors[VAR_12].head_position);

  if (VAR_16 < VAR_17) {
   VAR_17 = VAR_16;
   VAR_22 = VAR_13;
   VAR_18 = VAR_20;
  }
 }
 if (VAR_13 >= VAR_8->copies) {
  if (VAR_24) {
   VAR_13 = VAR_23;
   VAR_20 = VAR_19;
  } else {
   VAR_13 = VAR_22;
   VAR_20 = VAR_18;
  }
 }

 if (VAR_13 >= 0) {
  FUNC_1(&VAR_20->nr_pending);
  VAR_9->read_slot = VAR_13;
 } else
  VAR_20 = ((void*)0);
 FUNC_11();
 *VAR_10 = VAR_15;

 return VAR_20;
}
