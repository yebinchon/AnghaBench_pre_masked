
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xdfenv_t ;
struct TYPE_10__ {scalar_t__ (* hunk_func ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;} ;
typedef TYPE_1__ xdemitconf_t ;
struct TYPE_11__ {int priv; } ;
typedef TYPE_2__ xdemitcb_t ;
struct TYPE_12__ {scalar_t__ i2; scalar_t__ chg2; scalar_t__ i1; scalar_t__ chg1; struct TYPE_12__* next; } ;
typedef TYPE_3__ xdchange_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__**,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(xdfenv_t *VAR_0, xdchange_t *VAR_1, xdemitcb_t *VAR_2,
         xdemitconf_t const *VAR_3)
{
 xdchange_t *VAR_4, *VAR_5;

 (void)VAR_0;

 for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_5->next) {
  VAR_5 = FUNC_1(&VAR_4, VAR_3);
  if (!VAR_4)
   break;
  if (VAR_3->hunk_func(VAR_4->i1, VAR_5->i1 + VAR_5->chg1 - VAR_4->i1,
         VAR_4->i2, VAR_5->i2 + VAR_5->chg2 - VAR_4->i2,
         VAR_2->priv) < 0)
   return -1;
 }
 return 0;
}
