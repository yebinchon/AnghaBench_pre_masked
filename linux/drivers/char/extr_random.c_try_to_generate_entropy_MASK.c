
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct timer_list*) ;
 int FUNC_2 (struct timer_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,void**,int) ;
 int FUNC_4 (struct timer_list*,scalar_t__) ;
 void* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct timer_list*) ;
 int FUNC_8 (struct timer_list*,int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct {
  unsigned long now;
  struct timer_list timer;
 } VAR_3;

 VAR_3.now = FUNC_5();


 if (VAR_3.now == FUNC_5())
  return;

 FUNC_8(&VAR_3.timer, VAR_0, 0);
 while (!FUNC_0()) {
  if (!FUNC_7(&VAR_3.timer))
   FUNC_4(&VAR_3.timer, VAR_2+1);
  FUNC_3(&VAR_1, &VAR_3.now, sizeof(VAR_3.now));
  FUNC_6();
  VAR_3.now = FUNC_5();
 }

 FUNC_1(&VAR_3.timer);
 FUNC_2(&VAR_3.timer);
 FUNC_3(&VAR_1, &VAR_3.now, sizeof(VAR_3.now));
}
