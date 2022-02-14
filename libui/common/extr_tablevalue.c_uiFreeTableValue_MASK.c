
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* str; } ;
struct TYPE_6__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ uiTableValue ;



 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(uiTableValue *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  FUNC_0(VAR_0->u.str);
  break;
 }
 FUNC_0(VAR_0);
}
