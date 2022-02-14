
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct console* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;

int FUNC_2(struct console *VAR_5)
{
 if (VAR_2 != VAR_5)
  return -VAR_1;
 if (!(VAR_5->flags & VAR_0))
  return 0;
 FUNC_0(&VAR_3);
 FUNC_1(&VAR_4);
 VAR_2 = ((void*)0);
 return 1;
}
