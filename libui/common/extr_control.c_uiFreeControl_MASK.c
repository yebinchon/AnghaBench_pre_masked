
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiControl ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *) ;

void FUNC_3(uiControl *VAR_0)
{
 if (FUNC_0(VAR_0) != ((void*)0))
  FUNC_2("You cannot destroy a uiControl while it still has a parent. (control: %p)", VAR_0);
 FUNC_1(VAR_0);
}
