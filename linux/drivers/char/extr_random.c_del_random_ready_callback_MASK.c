
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct random_ready_callback {struct module* owner; int list; } ;
struct module {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct module*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct random_ready_callback *VAR_1)
{
 unsigned long VAR_2;
 struct module *VAR_3 = ((void*)0);

 FUNC_3(&VAR_0, VAR_2);
 if (!FUNC_1(&VAR_1->list)) {
  FUNC_0(&VAR_1->list);
  VAR_3 = VAR_1->owner;
 }
 FUNC_4(&VAR_0, VAR_2);

 FUNC_2(VAR_3);
}
