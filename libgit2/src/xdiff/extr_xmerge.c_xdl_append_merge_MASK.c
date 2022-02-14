
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long i1; long chg1; long i2; long chg2; int mode; long chg0; long i0; struct TYPE_4__* next; } ;
typedef TYPE_1__ xdmerge_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(xdmerge_t **VAR_0, int VAR_1,
       long VAR_2, long VAR_3,
       long VAR_4, long VAR_5,
       long VAR_6, long VAR_7)
{
 xdmerge_t *VAR_8 = *VAR_0;
 if (VAR_8 && (VAR_4 <= VAR_8->i1 + VAR_8->chg1 || VAR_6 <= VAR_8->i2 + VAR_8->chg2)) {
  if (VAR_1 != VAR_8->mode)
   VAR_8->mode = 0;
  VAR_8->chg0 = VAR_2 + VAR_3 - VAR_8->i0;
  VAR_8->chg1 = VAR_4 + VAR_5 - VAR_8->i1;
  VAR_8->chg2 = VAR_6 + VAR_7 - VAR_8->i2;
 } else {
  VAR_8 = FUNC_0(sizeof(xdmerge_t));
  if (!VAR_8)
   return -1;
  VAR_8->next = ((void*)0);
  VAR_8->mode = VAR_1;
  VAR_8->i0 = VAR_2;
  VAR_8->chg0 = VAR_3;
  VAR_8->i1 = VAR_4;
  VAR_8->chg1 = VAR_5;
  VAR_8->i2 = VAR_6;
  VAR_8->chg2 = VAR_7;
  if (*VAR_0)
   (*VAR_0)->next = VAR_8;
  *VAR_0 = VAR_8;
 }
 return 0;
}
