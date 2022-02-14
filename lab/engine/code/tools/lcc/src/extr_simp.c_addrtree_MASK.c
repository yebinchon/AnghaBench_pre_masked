
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
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_4__* Type ;
typedef TYPE_5__* Tree ;
struct TYPE_21__ {long offset; TYPE_6__* base; TYPE_6__* sym; } ;
struct TYPE_23__ {TYPE_1__ addr; } ;
struct TYPE_28__ {TYPE_2__ u; } ;
struct TYPE_27__ {scalar_t__ scope; scalar_t__ sclass; int computed; int defined; int ref; int addressed; int generated; int temporary; TYPE_4__* type; int name; } ;
struct TYPE_24__ {TYPE_6__* sym; } ;
struct TYPE_26__ {TYPE_3__ u; int op; } ;
struct TYPE_25__ {struct TYPE_25__* type; } ;
struct TYPE_22__ {int (* address ) (TYPE_6__*,TYPE_6__*,long) ;} ;
typedef TYPE_6__* Symbol ;
typedef TYPE_7__* Code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_20__* VAR_5 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,TYPE_6__*,long) ;
 TYPE_5__* FUNC_9 (int ,TYPE_4__*,int *,int *) ;

__attribute__((used)) static Tree FUNC_10(Tree VAR_8, long VAR_9, Type VAR_10) {
 Symbol VAR_11 = VAR_8->u.sym, VAR_12;

 if (VAR_11->scope == VAR_4
 || VAR_11->sclass == VAR_7 || VAR_11->sclass == VAR_2)
  FUNC_0(VAR_12, VAR_6);
 else
  FUNC_0(VAR_12, VAR_3);
 VAR_12->name = FUNC_7(FUNC_4(1));
 VAR_12->sclass = VAR_11->sclass;
 VAR_12->scope = VAR_11->scope;
 FUNC_2(FUNC_6(VAR_10) || FUNC_5(VAR_10));
 VAR_12->type = FUNC_6(VAR_10) ? VAR_10->type : VAR_10;
 VAR_12->temporary = VAR_11->temporary;
 VAR_12->generated = VAR_11->generated;
 VAR_12->addressed = VAR_11->addressed;
 VAR_12->computed = 1;
 VAR_12->defined = 1;
 VAR_12->ref = 1;
 if (VAR_11->scope == VAR_4
 || VAR_11->sclass == VAR_7 || VAR_11->sclass == VAR_2) {
  if (VAR_11->sclass == VAR_0)
   VAR_12->sclass = VAR_7;
  (*VAR_5->address)(VAR_12, VAR_11, VAR_9);
 } else {
  Code VAR_13;
  FUNC_1(VAR_11);
  VAR_13 = FUNC_3(VAR_1);
  VAR_13->u.addr.sym = VAR_12;
  VAR_13->u.addr.base = VAR_11;
  VAR_13->u.addr.offset = VAR_9;
 }
 VAR_8 = FUNC_9(VAR_8->op, VAR_10, ((void*)0), ((void*)0));
 VAR_8->u.sym = VAR_12;
 return VAR_8;
}
