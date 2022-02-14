
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;
typedef struct TYPE_20__ TYPE_15__ ;


struct TYPE_26__ {int u; } ;
struct TYPE_22__ {TYPE_5__ v; } ;
struct TYPE_23__ {TYPE_1__ c; } ;
struct TYPE_28__ {int defined; struct TYPE_28__* up; TYPE_2__ u; int sclass; TYPE_6__* type; int scope; int name; } ;
struct entry {TYPE_7__ sym; struct entry* link; } ;
typedef TYPE_5__ Value ;
typedef TYPE_6__* Type ;
struct TYPE_25__ {TYPE_3__* sym; } ;
struct TYPE_27__ {int op; TYPE_4__ u; } ;
struct TYPE_24__ {int addressed; } ;
struct TYPE_21__ {int (* defsymbol ) (TYPE_7__*) ;} ;
struct TYPE_20__ {struct entry** buckets; TYPE_7__* all; } ;
typedef TYPE_7__* Symbol ;



 int VAR_0 ;


 int VAR_1 ;

 TYPE_19__* VAR_2 ;
 int FUNC_0 (struct entry*,int ) ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_1 (int ) ;
 TYPE_15__* VAR_5 ;
 struct entry* VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_3 (struct entry*) ;
 struct entry* VAR_7 ;
 struct entry* VAR_8 ;
 int FUNC_4 (TYPE_7__*) ;
 struct entry* VAR_9 ;
 TYPE_6__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__) ;

Symbol FUNC_7(Type VAR_10, Value VAR_11) {
 struct entry *VAR_12;
 unsigned VAR_13 = VAR_11.u&(VAR_1-1);

 VAR_10 = FUNC_5(VAR_10);
 for (VAR_12 = VAR_5->buckets[VAR_13]; VAR_12; VAR_12 = VAR_12->link)
  if (FUNC_2(VAR_10, VAR_12->sym.type, 1))
   switch (VAR_10->op) {
   case 130: if (FUNC_3(VAR_8)) return &VAR_12->sym; break;
   case 128: if (FUNC_3(VAR_9)) return &VAR_12->sym; break;
   case 132: if (FUNC_3(VAR_6)) return &VAR_12->sym; break;
   case 131: if (FUNC_3(VAR_7)) return &VAR_12->sym; break;
   case 133:
   case 129: if (FUNC_3(VAR_12)) return &VAR_12->sym; break;
   default: FUNC_1(0);
   }
 FUNC_0(VAR_12, VAR_3);
 VAR_12->sym.name = FUNC_6(VAR_10, VAR_11);
 VAR_12->sym.scope = VAR_0;
 VAR_12->sym.type = VAR_10;
 VAR_12->sym.sclass = VAR_4;
 VAR_12->sym.u.c.v = VAR_11;
 VAR_12->link = VAR_5->buckets[VAR_13];
 VAR_12->sym.up = VAR_5->all;
 VAR_5->all = &VAR_12->sym;
 VAR_5->buckets[VAR_13] = VAR_12;
 if (VAR_10->u.sym && !VAR_10->u.sym->addressed)
  (*VAR_2->defsymbol)(&VAR_12->sym);
 VAR_12->sym.defined = 1;
 return &VAR_12->sym;
}
