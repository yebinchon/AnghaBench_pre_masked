
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int maxc; int * argv; scalar_t__ argc; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct arglist *VAR_1)
{
 VAR_1->argc = 0;
 VAR_1->maxc = 10;
 if ((VAR_1->argv = FUNC_0(VAR_1->maxc, sizeof(char *))) == ((void*)0))
  FUNC_1(VAR_0, "calloc");
}
