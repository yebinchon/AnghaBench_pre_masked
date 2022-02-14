
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct timer_list* VAR_1 ;
 int FUNC_3 (int ,unsigned char,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 unsigned long VAR_3 = VAR_2 - VAR_1;
 unsigned char VAR_4 = ~(0x10 << FUNC_1(VAR_3));

 if (FUNC_2(VAR_3 >= VAR_0))
  return;

 FUNC_3(FUNC_0(VAR_3), VAR_4, 0);
}
