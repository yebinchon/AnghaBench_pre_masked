
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_flags; struct prison* pr_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct prison VAR_2 ;

int
FUNC_0(struct prison *VAR_3, struct prison *VAR_4)
{

 if (VAR_3 == VAR_4)
  return (1);





 while (VAR_3 != &VAR_2 &&



        !(VAR_3->pr_flags & VAR_0))
  VAR_3 = VAR_3->pr_parent;
 while (VAR_4 != &VAR_2 &&



        !(VAR_4->pr_flags & VAR_0))
  VAR_4 = VAR_4->pr_parent;
 return (VAR_3 == VAR_4);
}
