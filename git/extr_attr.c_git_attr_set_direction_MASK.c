
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum git_attr_direction { ____Placeholder_git_attr_direction } git_attr_direction ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(enum git_attr_direction VAR_2)
{
 if (FUNC_2() && VAR_2 != VAR_0)
  FUNC_0("non-INDEX attr direction in a bare repo");

 if (VAR_2 != VAR_1)
  FUNC_1();

 VAR_1 = VAR_2;
}
