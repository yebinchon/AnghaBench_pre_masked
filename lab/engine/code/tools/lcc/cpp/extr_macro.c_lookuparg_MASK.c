
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; scalar_t__ len; scalar_t__ t; } ;
typedef TYPE_2__ Token ;
struct TYPE_8__ {TYPE_1__* ap; } ;
struct TYPE_6__ {TYPE_2__* bp; TYPE_2__* lp; } ;
typedef TYPE_3__ Nlist ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__) ;

int
FUNC_1(Nlist *VAR_1, Token *VAR_2)
{
 Token *VAR_3;

 if (VAR_2->type!=VAR_0 || VAR_1->ap==((void*)0))
  return -1;
 for (VAR_3=VAR_1->ap->bp; VAR_3<VAR_1->ap->lp; VAR_3++) {
  if (VAR_3->len==VAR_2->len && FUNC_0((char*)VAR_3->t,(char*)VAR_2->t,VAR_3->len)==0)
   return VAR_3 - VAR_1->ap->bp;
 }
 return -1;
}
