
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef TYPE_3__* Type ;
typedef TYPE_4__* Tree ;
struct TYPE_25__ {int type; } ;
struct TYPE_24__ {scalar_t__ align; scalar_t__ size; int type; } ;
struct TYPE_22__ {int loc; } ;
struct TYPE_23__ {TYPE_1__ c; } ;
struct TYPE_21__ {TYPE_2__ u; } ;
typedef int Symbol ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,long) ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 TYPE_17__* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (int ,TYPE_3__*,TYPE_4__*,TYPE_4__*,int ,int ,int ,int ,int *) ;
 int VAR_3 ;

Tree FUNC_9(Type VAR_4, Symbol VAR_5, Tree VAR_6, Tree VAR_7) {
 Type VAR_8;

 if (FUNC_3(VAR_4))
  return FUNC_6(FUNC_9(FUNC_0(VAR_4), VAR_5, VAR_6, VAR_7), VAR_4);
 VAR_8 = FUNC_7(FUNC_7(VAR_6->type)->type);
 return FUNC_8(VAR_5, VAR_4,
  VAR_6, VAR_7,
  FUNC_1(VAR_1, (long)VAR_8->size),
  FUNC_1(VAR_1, (long)VAR_8->align),
  (VAR_0 && *VAR_0 ? FUNC_5(FUNC_2(FUNC_4(VAR_0)->u.c.loc)) : FUNC_1(VAR_3, ((void*)0))), FUNC_1(VAR_1, (long)VAR_2) , ((void*)0));
}
