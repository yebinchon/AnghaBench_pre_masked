
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int dummy; } ;
struct md_rdev {int flags; int blocked_wait; int sysfs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct md_rdev*,struct mddev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int,int ) ;

void FUNC_5(struct md_rdev *VAR_2, struct mddev *VAR_3)
{
 FUNC_2(VAR_2->sysfs_state);
 FUNC_4(VAR_2->blocked_wait,
      !FUNC_3(VAR_0, &VAR_2->flags) &&
      !FUNC_3(VAR_1, &VAR_2->flags),
      FUNC_0(5000));
 FUNC_1(VAR_2, VAR_3);
}
