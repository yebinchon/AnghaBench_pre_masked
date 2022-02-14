
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct symbol {int defined; TYPE_3__* type; } ;
typedef TYPE_3__* Type ;
struct TYPE_11__ {int oldstyle; TYPE_3__** proto; } ;
struct TYPE_12__ {TYPE_1__ f; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
typedef struct symbol* Symbol ;
typedef int * List ;


 int VAR_0 ;

 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

 int VAR_4 ;
 size_t VAR_5 ;

 int * FUNC_0 (struct symbol*,int *) ;
 struct symbol* FUNC_1 (int,char*,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_2 (int ,char**,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char) ;
 size_t FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_7 (size_t,int ) ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_8 (int *) ;
 struct symbol** FUNC_9 (int **,int ) ;
 TYPE_3__** FUNC_10 (scalar_t__,int,int ) ;
 int FUNC_11 (char,char*) ;
 int FUNC_12 (int*) ;
 int VAR_8 ;
 char* FUNC_13 (int) ;
 size_t VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static Symbol *FUNC_15(Type VAR_13) {
 List VAR_14 = ((void*)0);
 Symbol *VAR_15;

 if (VAR_7[VAR_9] == 128 || FUNC_7(VAR_9, VAR_11)) {
  int VAR_16 = 0;
  Type VAR_17 = ((void*)0);
  for (;;) {
   Type VAR_18;
   int VAR_19 = 0;
   char *VAR_20 = ((void*)0);
   if (VAR_17 && VAR_9 == VAR_1) {
    static struct symbol VAR_21;
    if (VAR_21.type == ((void*)0)) {
     VAR_21.type = VAR_12;
     VAR_21.defined = 1;
    }
    if (VAR_17 == VAR_12)
     FUNC_3("illegal formal parameter types\n");
    VAR_14 = FUNC_0(&VAR_21, VAR_14);
    VAR_9 = FUNC_5();
    break;
   }
   if (!FUNC_7(VAR_9, VAR_11) && VAR_9 != VAR_5)
    FUNC_3("missing parameter type\n");
   VAR_16++;
   VAR_18 = FUNC_2(FUNC_12(&VAR_19), &VAR_20, ((void*)0), 1);
   if ( (VAR_18 == VAR_12 && (VAR_17 || VAR_20))
   || VAR_17 == VAR_12)
    FUNC_3("illegal formal parameter types\n");
   if (VAR_20 == ((void*)0))
    VAR_20 = FUNC_13(VAR_16);
   if (VAR_18 != VAR_12)
    VAR_14 = FUNC_0(FUNC_1(VAR_19, VAR_20, VAR_18, &VAR_8), VAR_14);
   if (VAR_0 >= 1 && !FUNC_6(VAR_18))
    FUNC_14("missing prototype\n");
   if (VAR_17 == ((void*)0))
    VAR_17 = VAR_18;
   if (VAR_9 != ',')
    break;
   VAR_9 = FUNC_5();
  }
  VAR_13->u.f.proto = FUNC_10(FUNC_8(VAR_14) + 1,
   sizeof (Type *), VAR_4);
  VAR_15 = FUNC_9(&VAR_14, VAR_2);
  for (VAR_16 = 0; VAR_15[VAR_16]; VAR_16++)
   VAR_13->u.f.proto[VAR_16] = VAR_15[VAR_16]->type;
  VAR_13->u.f.proto[VAR_16] = ((void*)0);
  VAR_13->u.f.oldstyle = 0;
 } else {
  if (VAR_9 == VAR_3)
   for (;;) {
    Symbol VAR_22;
    if (VAR_9 != VAR_3) {
     FUNC_3("expecting an identifier\n");
     break;
    }
    VAR_22 = FUNC_1(0, VAR_10, VAR_6, &VAR_8);
    VAR_22->defined = 0;
    VAR_14 = FUNC_0(VAR_22, VAR_14);
    VAR_9 = FUNC_5();
    if (VAR_9 != ',')
     break;
    VAR_9 = FUNC_5();
   }
  VAR_15 = FUNC_9(&VAR_14, VAR_2);
  VAR_13->u.f.proto = ((void*)0);
  VAR_13->u.f.oldstyle = 1;
 }
 if (VAR_9 != ')') {
  static char VAR_23[] = { 130, 128, 129, ')', 0 };
  FUNC_4(')');
  FUNC_11('{', VAR_23);
 }
 if (VAR_9 == ')')
  VAR_9 = FUNC_5();
 return VAR_15;
}
