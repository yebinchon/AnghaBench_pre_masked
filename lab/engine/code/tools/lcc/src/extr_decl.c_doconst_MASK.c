
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_18__ {unsigned int* p; int u; } ;
typedef TYPE_4__ Value ;
struct TYPE_21__ {int size; int op; TYPE_6__* type; } ;
struct TYPE_20__ {int size; int op; } ;
struct TYPE_16__ {TYPE_11__* loc; TYPE_4__ v; } ;
struct TYPE_17__ {TYPE_2__ c; } ;
struct TYPE_19__ {TYPE_3__ u; TYPE_9__* type; } ;
struct TYPE_15__ {scalar_t__ seg; } ;
struct TYPE_14__ {int (* defconst ) (int ,int,TYPE_4__) ;int (* defstring ) (int,unsigned int*) ;} ;
struct TYPE_13__ {TYPE_1__ u; } ;
typedef TYPE_5__* Symbol ;


 TYPE_12__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int ,int,TYPE_4__) ;
 int FUNC_4 (int,unsigned int*) ;
 int FUNC_5 (int ,int,TYPE_4__) ;
 TYPE_6__* VAR_2 ;

void FUNC_6(Symbol VAR_3, void *VAR_4) {
 if (VAR_3->u.c.loc) {
  FUNC_0(VAR_3->u.c.loc->u.seg == 0);
  FUNC_1(VAR_3->u.c.loc, VAR_1);
  if (FUNC_2(VAR_3->type) && VAR_3->type->type == VAR_2) {
   unsigned int *VAR_5 = VAR_3->u.c.v.p;
   int VAR_6 = VAR_3->type->size/VAR_2->size;
   while (VAR_6-- > 0) {
    Value VAR_7;
    VAR_7.u = *VAR_5++;
    (*VAR_0->defconst)(VAR_2->op, VAR_2->size, VAR_7);
   }
  } else if (FUNC_2(VAR_3->type))
   (*VAR_0->defstring)(VAR_3->type->size, VAR_3->u.c.v.p);
  else
   (*VAR_0->defconst)(VAR_3->type->op, VAR_3->type->size, VAR_3->u.c.v);
  VAR_3->u.c.loc = ((void*)0);
 }
}
