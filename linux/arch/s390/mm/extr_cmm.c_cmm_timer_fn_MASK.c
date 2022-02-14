
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 long VAR_3;

 VAR_3 = VAR_0 - VAR_1;
 if (VAR_3 < 0)
  VAR_0 = 0;
 else
  VAR_0 = VAR_3;
 FUNC_0();
 FUNC_1();
}
