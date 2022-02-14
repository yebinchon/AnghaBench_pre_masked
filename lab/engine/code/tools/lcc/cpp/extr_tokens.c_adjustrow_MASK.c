
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lp; int bp; int max; scalar_t__ tp; } ;
typedef TYPE_1__ Tokenrow ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void
FUNC_2(Tokenrow *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1==0)
  return;
 VAR_3 = (VAR_0->lp - VAR_0->bp) + VAR_1;
 while (VAR_3 > VAR_0->max)
  FUNC_0(VAR_0);

 VAR_2 = (char *)VAR_0->lp - (char *)VAR_0->tp;
 if (VAR_2)
  FUNC_1(VAR_0->tp+VAR_1, VAR_0->tp, VAR_2);
 VAR_0->lp += VAR_1;
}
