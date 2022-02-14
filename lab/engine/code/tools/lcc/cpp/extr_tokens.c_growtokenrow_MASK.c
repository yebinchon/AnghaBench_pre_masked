
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max; int * lp; int * bp; int * tp; } ;
typedef TYPE_1__ Tokenrow ;
typedef int Token ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

Token *
FUNC_2(Tokenrow *VAR_1)
{
 int VAR_2 = VAR_1->tp - VAR_1->bp;
 int VAR_3 = VAR_1->lp - VAR_1->bp;

 VAR_1->max = 3*VAR_1->max/2 + 1;
 VAR_1->bp = (Token *)FUNC_1(VAR_1->bp, VAR_1->max*sizeof(Token));
 if (VAR_1->bp == ((void*)0))
  FUNC_0(VAR_0, "Out of memory from realloc");
 VAR_1->lp = &VAR_1->bp[VAR_3];
 VAR_1->tp = &VAR_1->bp[VAR_2];
 return VAR_1->lp;
}
