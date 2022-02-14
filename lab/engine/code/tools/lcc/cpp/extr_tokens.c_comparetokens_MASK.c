
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* lp; TYPE_2__* tp; } ;
typedef TYPE_1__ Tokenrow ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ wslen; scalar_t__ len; scalar_t__ t; } ;
typedef TYPE_2__ Token ;


 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;

int
FUNC_1(Tokenrow *VAR_0, Tokenrow *VAR_1)
{
 Token *VAR_2, *VAR_3;

 VAR_2 = VAR_0->tp;
 VAR_3 = VAR_1->tp;
 if (VAR_0->lp-VAR_2 != VAR_1->lp-VAR_3)
  return 1;
 for (; VAR_2<VAR_0->lp ; VAR_2++, VAR_3++) {
  if (VAR_2->type != VAR_3->type
   || (VAR_2->wslen==0) != (VAR_3->wslen==0)
   || VAR_2->len != VAR_3->len
   || FUNC_0((char*)VAR_2->t, (char*)VAR_3->t, VAR_2->len)!=0)
   return 1;
 }
 return 0;
}
