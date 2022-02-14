
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int safemode; scalar_t__ safemode_delay; int safemode_timer; int thread; int writes_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct mddev *VAR_1)
{
 FUNC_2(&VAR_1->writes_pending);

 if (VAR_1->safemode == 2)
  FUNC_0(VAR_1->thread);
 else if (VAR_1->safemode_delay)



  FUNC_1(&VAR_1->safemode_timer,
     FUNC_3(VAR_0, VAR_1->safemode_delay) +
     VAR_1->safemode_delay);
}
