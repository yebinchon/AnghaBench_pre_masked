
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int Type ;
typedef TYPE_3__* Tree ;
struct TYPE_13__ {TYPE_4__* alias; } ;
struct TYPE_16__ {scalar_t__ scope; scalar_t__ sclass; scalar_t__ type; int ref; TYPE_1__ u; } ;
struct TYPE_14__ {TYPE_4__* sym; } ;
struct TYPE_15__ {int type; TYPE_2__ u; } ;
struct TYPE_12__ {int wants_argb; } ;
typedef TYPE_4__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_11__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ,scalar_t__,int *,int *) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_10 ;

Tree FUNC_10(Symbol VAR_11) {
 int VAR_12;
 Tree VAR_13;
 Type VAR_14 = VAR_11->type ? FUNC_9(VAR_11->type) : VAR_10;

 if (VAR_11->scope == VAR_4 || VAR_11->sclass == VAR_7)
  VAR_12 = VAR_1;
 else if (VAR_11->scope == VAR_6) {
  VAR_12 = VAR_0;
  if (FUNC_4(VAR_11->type) && !VAR_5->wants_argb)
   {
    VAR_13 = FUNC_8(FUNC_5(VAR_12,VAR_10), FUNC_6(FUNC_6(VAR_11->type)), ((void*)0), ((void*)0));
    VAR_13->u.sym = VAR_11;
    return FUNC_7(FUNC_7(VAR_13));
   }
 } else if (VAR_11->sclass == VAR_3) {
  FUNC_0(VAR_11->u.alias);
  VAR_11 = VAR_11->u.alias;
  VAR_12 = VAR_1;
 } else
  VAR_12 = VAR_2;
 VAR_11->ref += VAR_9;
 if (FUNC_1(VAR_14))
  VAR_13 = FUNC_8(FUNC_5(VAR_12,VAR_10), VAR_11->type, ((void*)0), ((void*)0));
 else if (FUNC_2(VAR_14))
  VAR_13 = FUNC_8(FUNC_5(VAR_12,VAR_8), VAR_11->type, ((void*)0), ((void*)0));
 else
  VAR_13 = FUNC_8(FUNC_5(VAR_12,VAR_10), FUNC_6(VAR_11->type), ((void*)0), ((void*)0));
 VAR_13->u.sym = VAR_11;
 if (FUNC_3(VAR_13->type))
  VAR_13 = FUNC_7(VAR_13);
 return VAR_13;
}
