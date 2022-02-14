
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ proto; } ;
struct TYPE_13__ {TYPE_1__ f; } ;
struct TYPE_15__ {TYPE_2__ u; } ;
struct TYPE_14__ {TYPE_4__* type; } ;
typedef TYPE_3__* Symbol ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* VAR_1 ;

void FUNC_5(Symbol VAR_2, Symbol VAR_3[]) {
 if (VAR_2->type->u.f.proto)
  FUNC_4(VAR_2, VAR_2->type);
 else {
  int VAR_4;
  List VAR_5 = 0;
  if (VAR_3[0] == 0)
   VAR_5 = FUNC_0(VAR_1, VAR_5);
  else
   for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++)
    VAR_5 = FUNC_0(VAR_3[VAR_4]->type, VAR_5);
  FUNC_4(VAR_2, FUNC_2(FUNC_1(VAR_2->type), FUNC_3(&VAR_5, VAR_0), 0));
 }
}
