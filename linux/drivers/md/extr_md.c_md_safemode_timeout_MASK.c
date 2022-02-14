
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mddev {int safemode; int thread; int sysfs_state; scalar_t__ external; } ;


 struct mddev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ) ;
 struct mddev* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct mddev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 VAR_3->safemode = 1;
 if (VAR_3->external)
  FUNC_2(VAR_3->sysfs_state);

 FUNC_1(VAR_3->thread);
}
