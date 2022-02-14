
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int * bp; int * lp; int * tp; } ;
typedef TYPE_1__ Tokenrow ;
typedef int Token ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(int VAR_0, Tokenrow *VAR_1)
{
 VAR_1->max = VAR_0;
 if (VAR_0>0)
  VAR_1->bp = (Token *)FUNC_0(VAR_0*sizeof(Token));
 else
  VAR_1->bp = ((void*)0);
 VAR_1->tp = VAR_1->bp;
 VAR_1->lp = VAR_1->bp;
}
