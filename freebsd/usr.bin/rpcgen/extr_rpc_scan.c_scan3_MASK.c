
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ token ;
typedef scalar_t__ tok_kind ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(tok_kind VAR_0, tok_kind VAR_1, tok_kind VAR_2, token *VAR_3)
{
 FUNC_1(VAR_3);
 if (VAR_3->kind != VAR_0 && VAR_3->kind != VAR_1
     && VAR_3->kind != VAR_2) {
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
