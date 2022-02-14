
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {int entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_3 (struct vtimer_list*) ;

int FUNC_4(struct vtimer_list *VAR_1)
{
 unsigned long VAR_2;

 if (!FUNC_3(VAR_1))
  return 0;
 FUNC_1(&VAR_0, VAR_2);
 FUNC_0(&VAR_1->entry);
 FUNC_2(&VAR_0, VAR_2);
 return 1;
}
