
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct random_ready_callback {int list; struct module* owner; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct module*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct module*) ;

int FUNC_6(struct random_ready_callback *VAR_4)
{
 struct module *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 if (FUNC_0())
  return VAR_7;

 VAR_5 = VAR_4->owner;
 if (!FUNC_5(VAR_5))
  return -VAR_1;

 FUNC_3(&VAR_3, VAR_6);
 if (FUNC_0())
  goto out;

 VAR_5 = ((void*)0);

 FUNC_1(&VAR_4->list, &VAR_2);
 VAR_7 = 0;

out:
 FUNC_4(&VAR_3, VAR_6);

 FUNC_2(VAR_5);

 return VAR_7;
}
