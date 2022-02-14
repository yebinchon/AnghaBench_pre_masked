
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long i1; long i2; long chg1; long chg2; scalar_t__ ignore; struct TYPE_4__* next; } ;
typedef TYPE_1__ xdchange_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static xdchange_t *FUNC_1(xdchange_t *VAR_0, long VAR_1, long VAR_2, long VAR_3, long VAR_4) {
 xdchange_t *VAR_5;

 if (!(VAR_5 = (xdchange_t *) FUNC_0(sizeof(xdchange_t))))
  return ((void*)0);

 VAR_5->next = VAR_0;
 VAR_5->i1 = VAR_1;
 VAR_5->i2 = VAR_2;
 VAR_5->chg1 = VAR_3;
 VAR_5->chg2 = VAR_4;
 VAR_5->ignore = 0;

 return VAR_5;
}
