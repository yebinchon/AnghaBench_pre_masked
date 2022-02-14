
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef TYPE_11__* Type ;
struct TYPE_34__ {TYPE_8__* sym; } ;
struct TYPE_32__ {int idlist; } ;
struct TYPE_33__ {int defined; TYPE_7__ u; } ;
struct TYPE_31__ {long value; } ;
struct TYPE_30__ {TYPE_4__* sym; } ;
struct TYPE_26__ {long i; } ;
struct TYPE_27__ {TYPE_1__ max; } ;
struct TYPE_28__ {TYPE_2__ limits; } ;
struct TYPE_29__ {TYPE_3__ u; } ;
struct TYPE_25__ {int align; int size; TYPE_5__ u; } ;
struct TYPE_24__ {scalar_t__ scope; char src; } ;
struct TYPE_23__ {TYPE_11__* type; TYPE_6__ u; scalar_t__ sclass; int src; } ;
struct TYPE_22__ {scalar_t__ op; TYPE_17__* type; TYPE_9__ u; int align; int size; } ;
struct TYPE_21__ {int member_0; } ;
typedef TYPE_12__* Symbol ;
typedef int List ;
typedef int Coordinate ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;

 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_12__*,int ) ;
 int FUNC_1 (char*,...) ;
 char FUNC_2 () ;
 int VAR_6 ;
 TYPE_12__* FUNC_3 (char*,int *,scalar_t__,int ) ;
 long FUNC_4 (int ,int ) ;
 TYPE_17__* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_12__* FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,int ) ;
 TYPE_11__* FUNC_7 (scalar_t__,char*) ;
 int VAR_9 ;
 char VAR_10 ;
 int FUNC_8 (char,char*) ;
 char* VAR_11 ;
 TYPE_14__* VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (TYPE_12__*,int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ VAR_14 ;

Type FUNC_11(void) {
 char *VAR_15;
 Type VAR_16;
 Symbol VAR_17 = {0};
 Coordinate VAR_18;

 VAR_10 = FUNC_2();
 VAR_18 = VAR_9;
 if (VAR_10 == VAR_3) {
  VAR_15 = VAR_11;
  VAR_10 = FUNC_2();
 } else
  VAR_15 = "";
 if (VAR_10 == '{') {
  static char VAR_19[] = { 128, 0 };
  int VAR_20 = 0;
  long VAR_21 = -1;
  List VAR_22 = 0;
  VAR_16 = FUNC_7(VAR_1, VAR_15);
  VAR_10 = FUNC_2();
  if (VAR_10 != VAR_3)
   FUNC_1("expecting an enumerator identifier\n");
  while (VAR_10 == VAR_3) {
   char *VAR_23 = VAR_11;
   Coordinate VAR_24;
   if (VAR_12 && VAR_12->scope == VAR_8)
    FUNC_1("redeclaration of `%s' previously declared at %w\n",
     VAR_11, &VAR_12->src);
   VAR_24 = VAR_9;
   VAR_10 = FUNC_2();
   if (VAR_10 == '=') {
    VAR_10 = FUNC_2();
    VAR_21 = FUNC_4(0, 0);
   } else {
    if (VAR_21 == VAR_7->u.sym->u.limits.max.i)
     FUNC_1("overflow in value for enumeration constant `%s'\n", VAR_23);
    VAR_21++;
   }
   VAR_17 = FUNC_3(VAR_23, &VAR_6, VAR_8, VAR_8 < VAR_4 ? VAR_5 : VAR_2);
   VAR_17->src = VAR_24;
   VAR_17->type = VAR_16;
   VAR_17->sclass = VAR_1;
   VAR_17->u.value = VAR_21;
   VAR_22 = FUNC_0(VAR_17, VAR_22);
   VAR_20++;
   if (VAR_0 >= 2 && VAR_20 == 128)
    FUNC_10("more than 127 enumeration constants in `%t'\n", VAR_16);
   if (VAR_10 != ',')
    break;
   VAR_10 = FUNC_2();
   if (VAR_0 >= 2 && VAR_10 == '}')
    FUNC_10("non-ANSI trailing comma in enumerator list\n");
  }
  FUNC_8('}', VAR_19);
  VAR_16->type = VAR_7;
  VAR_16->size = VAR_16->type->size;
  VAR_16->align = VAR_16->type->align;
  VAR_16->u.sym->u.idlist = FUNC_6(&VAR_22, VAR_5);
  VAR_16->u.sym->defined = 1;
 } else if ((VAR_17 = FUNC_5(VAR_15, VAR_13)) != ((void*)0) && VAR_17->type->op == VAR_1) {
  VAR_16 = VAR_17->type;
  if (VAR_10 == ';')
   FUNC_1("empty declaration\n");
 } else {
  FUNC_1("unknown enumeration `%s'\n", VAR_15);
  VAR_16 = FUNC_7(VAR_1, VAR_15);
  VAR_16->type = VAR_7;
 }
 if (*VAR_15 && VAR_14)
  FUNC_9(VAR_17, VAR_18);
 return VAR_16;
}
