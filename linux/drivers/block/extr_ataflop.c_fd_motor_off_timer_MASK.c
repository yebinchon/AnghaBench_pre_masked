
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_8)
{
 unsigned char VAR_9;

 if (VAR_5 < 0)

  return;

 if (FUNC_3())
  goto retry;

 VAR_9 = FUNC_0( VAR_0 );

 if (!(VAR_9 & 0x80)) {

  VAR_4 = 0;
  FUNC_1();
  return;
 }


  retry:





 FUNC_2(&VAR_7,
    VAR_6 + (VAR_3++ < VAR_1 ? VAR_2/20 : VAR_2/2));
}
