
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {struct mddev* mddev; TYPE_1__* mirrors; } ;
struct r1bio {size_t read_disk; int sectors; scalar_t__ state; struct bio* master_bio; int sector; struct bio** bios; } ;
struct mddev {scalar_t__ ro; } ;
struct md_rdev {int flags; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 struct bio* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r1conf*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (struct r1conf*,size_t,int ,int ) ;
 int FUNC_4 (struct r1conf*,int) ;
 int FUNC_5 (struct mddev*,struct md_rdev*) ;
 int FUNC_6 (struct mddev*,struct bio*,int ,struct r1bio*) ;
 int FUNC_7 (struct md_rdev*,struct mddev*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct r1conf*) ;

__attribute__((used)) static void FUNC_10(struct r1conf *VAR_3, struct r1bio *VAR_4)
{
 struct mddev *VAR_5 = VAR_3->mddev;
 struct bio *VAR_6;
 struct md_rdev *VAR_7;

 FUNC_2(VAR_2, &VAR_4->state);
 VAR_6 = VAR_4->bios[VAR_4->read_disk];
 FUNC_1(VAR_6);
 VAR_4->bios[VAR_4->read_disk] = ((void*)0);

 VAR_7 = VAR_3->mirrors[VAR_4->read_disk].rdev;
 if (VAR_5->ro == 0
     && !FUNC_8(VAR_0, &VAR_7->flags)) {
  FUNC_4(VAR_3, 1);
  FUNC_3(VAR_3, VAR_4->read_disk,
          VAR_4->sector, VAR_4->sectors);
  FUNC_9(VAR_3);
 } else if (VAR_5->ro == 0 && FUNC_8(VAR_0, &VAR_7->flags)) {
  FUNC_5(VAR_5, VAR_7);
 } else {
  VAR_4->bios[VAR_4->read_disk] = VAR_1;
 }

 FUNC_7(VAR_7, VAR_3->mddev);
 FUNC_0(VAR_3, VAR_4->sector);
 VAR_6 = VAR_4->master_bio;


 VAR_4->state = 0;
 FUNC_6(VAR_5, VAR_6, VAR_4->sectors, VAR_4);
}
