
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ token ;
typedef scalar_t__ tok_kind ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(tok_kind VAR_0, token *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->kind == VAR_0) {
  FUNC_0(VAR_1);
  return (1);
 }
 return (0);
}
