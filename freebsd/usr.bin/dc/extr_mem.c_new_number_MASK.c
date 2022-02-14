
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct number {int * number; scalar_t__ scale; } ;


 int * FUNC_0 () ;
 struct number* FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;

struct number *
FUNC_3(void)
{
 struct number *VAR_0;

 VAR_0 = FUNC_1(sizeof(*VAR_0));
 VAR_0->scale = 0;
 VAR_0->number = FUNC_0();
 if (VAR_0->number == ((void*)0))
  FUNC_2(1, ((void*)0));
 return (VAR_0);
}
