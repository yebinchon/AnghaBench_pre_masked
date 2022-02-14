
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; } ;
typedef TYPE_1__ token ;



 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(token *VAR_0)
{
 FUNC_1(VAR_0);
 switch (VAR_0->kind) {
 case 128:
  break;
 default:
  FUNC_0("constant or identifier expected");
 }
}
