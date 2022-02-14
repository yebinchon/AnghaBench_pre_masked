
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t iv_pri; int iv_vec; scalar_t__ iv_refcnt; struct TYPE_2__* iv_arg; int iv_func; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

void
FUNC_0()
{
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_4[VAR_8] = VAR_5;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7[VAR_8].iv_func = VAR_6;
  VAR_7[VAR_8].iv_arg = &VAR_7[VAR_8];
  VAR_7[VAR_8].iv_pri = VAR_1;
  VAR_7[VAR_8].iv_vec = VAR_8;
  VAR_7[VAR_8].iv_refcnt = 0;
 }
 VAR_4[VAR_1] = VAR_3;
}
