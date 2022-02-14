
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1bio {int sectors; int state; struct mddev* mddev; int remaining; } ;
struct mddev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mddev*,int,int) ;
 int FUNC_2 (struct r1bio*) ;
 int FUNC_3 (struct r1bio*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r1bio *VAR_2, int VAR_3)
{
 if (FUNC_0(&VAR_2->remaining)) {
  struct mddev *VAR_4 = VAR_2->mddev;
  int VAR_5 = VAR_2->sectors;

  if (FUNC_4(VAR_0, &VAR_2->state) ||
      FUNC_4(VAR_1, &VAR_2->state))
   FUNC_3(VAR_2);
  else {
   FUNC_2(VAR_2);
   FUNC_1(VAR_4, VAR_5, VAR_3);
  }
 }
}
