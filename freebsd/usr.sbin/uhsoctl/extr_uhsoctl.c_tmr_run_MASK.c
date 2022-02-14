
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timers {scalar_t__ res; int head; } ;
struct timer_entry {scalar_t__ timeout; int arg; int id; int (* func ) (int ,int ) ;} ;


 struct timer_entry* FUNC_0 (int *) ;
 struct timer_entry* FUNC_1 (struct timer_entry*,int ) ;
 int FUNC_2 (int *,struct timer_entry*,int ) ;
 int FUNC_3 (struct timer_entry*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct timers *VAR_1)
{
 struct timer_entry *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(&VAR_1->head);
 if (VAR_2 == ((void*)0))
  return;

 VAR_2->timeout -= VAR_1->res;
 while (VAR_2->timeout <= 0) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(&VAR_1->head, VAR_2, VAR_0);
  VAR_2->func(VAR_2->id, VAR_2->arg);
  FUNC_3(VAR_2);
  VAR_2 = VAR_3;
  if (VAR_2 == ((void*)0))
   break;
 }
}
