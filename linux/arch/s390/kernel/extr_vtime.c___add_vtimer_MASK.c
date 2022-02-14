
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {int expires; int interval; } ;


 int FUNC_0 (struct vtimer_list*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vtimer_list *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 VAR_1->interval = VAR_2 ? VAR_1->expires : 0;
 FUNC_1(&VAR_0, VAR_3);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_0, VAR_3);
}
