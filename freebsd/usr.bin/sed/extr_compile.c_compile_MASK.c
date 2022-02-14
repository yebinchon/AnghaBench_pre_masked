
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_appends {int dummy; } ;
typedef int regmatch_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int ** FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int *) ;
 void* FUNC_3 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

void
FUNC_5(void)
{
 *FUNC_0(&VAR_4) = ((void*)0);
 FUNC_2(VAR_4, ((void*)0));
 FUNC_4();
 if (VAR_0 == 0)
  VAR_1 = ((void*)0);
 else if ((VAR_1 = FUNC_3(sizeof(struct s_appends) * VAR_0)) ==
     ((void*)0))
  FUNC_1(1, "malloc");
 if ((VAR_2 = FUNC_3((VAR_3 + 1) * sizeof(regmatch_t))) == ((void*)0))
  FUNC_1(1, "malloc");
}
