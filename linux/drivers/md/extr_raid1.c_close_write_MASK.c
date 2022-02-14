
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1bio {TYPE_1__* mddev; int state; int sectors; int sector; int * behind_master_bio; } ;
struct TYPE_2__ {int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r1bio *VAR_2)
{

 if (FUNC_4(VAR_0, &VAR_2->state)) {
  FUNC_0(VAR_2->behind_master_bio);
  FUNC_1(VAR_2->behind_master_bio);
  VAR_2->behind_master_bio = ((void*)0);
 }

 FUNC_2(VAR_2->mddev->bitmap, VAR_2->sector,
      VAR_2->sectors,
      !FUNC_4(VAR_1, &VAR_2->state),
      FUNC_4(VAR_0, &VAR_2->state));
 FUNC_3(VAR_2->mddev);
}
