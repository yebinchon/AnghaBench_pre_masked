
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {TYPE_1__* mirrors; } ;
struct r1bio {size_t read_disk; int state; int sectors; int sector; struct mddev* mddev; } ;
struct mddev {int recovery; struct r1conf* private; } ;
struct md_rdev {int flags; } ;
struct bio {int bi_status; } ;
typedef int sector_t ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mddev*,struct r1bio*) ;
 size_t FUNC_1 (struct r1bio*,struct bio*) ;
 struct r1bio* FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct md_rdev*,int ,int ,int *,int*) ;
 int FUNC_4 (struct r1bio*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_5)
{
 int VAR_6 = !VAR_5->bi_status;
 struct r1bio *VAR_7 = FUNC_2(VAR_5);
 struct mddev *VAR_8 = VAR_7->mddev;
 struct r1conf *VAR_9 = VAR_8->private;
 sector_t VAR_10;
 int VAR_11;
 struct md_rdev *VAR_12 = VAR_9->mirrors[FUNC_1(VAR_7, VAR_5)].rdev;

 if (!VAR_6) {
  FUNC_0(VAR_8, VAR_7);
  FUNC_5(VAR_4, &VAR_12->flags);
  if (!FUNC_6(VAR_3, &VAR_12->flags))
   FUNC_5(VAR_0, &
    VAR_8->recovery);
  FUNC_5(VAR_2, &VAR_7->state);
 } else if (FUNC_3(VAR_12, VAR_7->sector, VAR_7->sectors,
          &VAR_10, &VAR_11) &&
     !FUNC_3(VAR_9->mirrors[VAR_7->read_disk].rdev,
    VAR_7->sector,
    VAR_7->sectors,
    &VAR_10, &VAR_11)
  )
  FUNC_5(VAR_1, &VAR_7->state);

 FUNC_4(VAR_7, VAR_6);
}
