
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int expires; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct timer_list*,int ) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (struct timer_list*) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_0 + VAR_2;
 unsigned long VAR_4;

 FUNC_1(VAR_4);

 if (!FUNC_5(VAR_1) || FUNC_4(VAR_3, VAR_1->expires))
  FUNC_2(VAR_1, FUNC_3(VAR_3));

 FUNC_0(VAR_4);
}
