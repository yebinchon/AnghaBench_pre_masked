
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {int state; int sectors; TYPE_3__* devs; struct mddev* mddev; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {TYPE_2__* mddev; int flags; } ;
struct bio {scalar_t__ bi_status; } ;
typedef int sector_t ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int recovery; } ;
struct TYPE_4__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int*,int*) ;
 struct r10bio* FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct md_rdev*,int ,int ,int *,int*) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 int FUNC_5 (struct md_rdev*,struct mddev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct bio *VAR_5)
{
 struct r10bio *VAR_6 = FUNC_2(VAR_5);
 struct mddev *VAR_7 = VAR_6->mddev;
 struct r10conf *VAR_8 = VAR_7->private;
 int VAR_9;
 sector_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 struct md_rdev *VAR_14 = ((void*)0);

 VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_5, &VAR_12, &VAR_13);
 if (VAR_13)
  VAR_14 = VAR_8->mirrors[VAR_9].replacement;
 else
  VAR_14 = VAR_8->mirrors[VAR_9].rdev;

 if (VAR_5->bi_status) {
  if (VAR_13)
   FUNC_4(VAR_7, VAR_14);
  else {
   FUNC_6(VAR_4, &VAR_14->flags);
   if (!FUNC_7(VAR_3, &VAR_14->flags))
    FUNC_6(VAR_0,
     &VAR_14->mddev->recovery);
   FUNC_6(VAR_2, &VAR_6->state);
  }
 } else if (FUNC_3(VAR_14,
        VAR_6->devs[VAR_12].addr,
        VAR_6->sectors,
        &VAR_10, &VAR_11))
  FUNC_6(VAR_1, &VAR_6->state);

 FUNC_5(VAR_14, VAR_7);

 FUNC_0(VAR_6);
}
