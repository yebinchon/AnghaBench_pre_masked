
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct physical {int link; int * out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct physical *VAR_0)
{
  if (VAR_0->out) {
    FUNC_1(VAR_0->out);
    VAR_0->out = ((void*)0);
  }
  FUNC_0(&VAR_0->link);
}
