
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef TYPE_3__* Type ;
struct TYPE_18__ {char* name; } ;
struct TYPE_15__ {TYPE_3__** proto; } ;
struct TYPE_16__ {TYPE_1__ f; TYPE_13__* sym; } ;
struct TYPE_17__ {int op; int size; struct TYPE_17__* type; TYPE_2__ u; } ;
struct TYPE_14__ {char* name; } ;
typedef TYPE_4__* Symbol ;
 int FUNC_0 (TYPE_13__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (char*,...) ;
 TYPE_3__* VAR_0 ;
 int FUNC_7 (char*,int) ;

char *FUNC_8(Type VAR_1, char *VAR_2) {
 for ( ; VAR_1; VAR_1 = VAR_1->type) {
  Symbol VAR_3;
  switch (VAR_1->op) {
  case 138 +128: case 138: case 128:
   if (FUNC_5(VAR_1->type))
    VAR_2 = FUNC_6("%k %s", VAR_1->op, VAR_2);
   else
    return FUNC_6("%k %s", VAR_1->op, FUNC_8(VAR_1->type, VAR_2));
   break;
  case 132: case 131: case 137:
   FUNC_0(VAR_1->u.sym);
   if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0))
    return *VAR_2 ? FUNC_6("%s %s", VAR_3->name, VAR_2) : VAR_3->name;
   if (*VAR_1->u.sym->name >= '1' && *VAR_1->u.sym->name <= '9')
    FUNC_7("unnamed %k in prototype\n", VAR_1->op);
   if (*VAR_2)
    return FUNC_6("%k %s %s", VAR_1->op, VAR_1->u.sym->name, VAR_2);
   else
    return FUNC_6("%k %s", VAR_1->op, VAR_1->u.sym->name);
  case 129: case 136: case 134: case 130:
   return *VAR_2 ? FUNC_6("%s %s", VAR_1->u.sym->name, VAR_2) : VAR_1->u.sym->name;
  case 133:
   if (!FUNC_3(VAR_1->type) && (VAR_3 = FUNC_1(VAR_1)) != ((void*)0))
    return *VAR_2 ? FUNC_6("%s %s", VAR_3->name, VAR_2) : VAR_3->name;
   VAR_2 = FUNC_6(FUNC_2(VAR_1->type) || FUNC_4(VAR_1->type) ? "(*%s)" : "*%s", VAR_2);
   break;
  case 135:
   if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0))
    return *VAR_2 ? FUNC_6("%s %s", VAR_3->name, VAR_2) : VAR_3->name;
   if (VAR_1->u.f.proto == 0)
    VAR_2 = FUNC_6("%s()", VAR_2);
   else if (VAR_1->u.f.proto[0]) {
    int VAR_4;
    VAR_2 = FUNC_6("%s(%s", VAR_2, FUNC_8(VAR_1->u.f.proto[0], ""));
    for (VAR_4 = 1; VAR_1->u.f.proto[VAR_4]; VAR_4++)
     if (VAR_1->u.f.proto[VAR_4] == VAR_0)
      VAR_2 = FUNC_6("%s, ...", VAR_2);
     else
      VAR_2 = FUNC_6("%s, %s", VAR_2, FUNC_8(VAR_1->u.f.proto[VAR_4], ""));
    VAR_2 = FUNC_6("%s)", VAR_2);
   } else
    VAR_2 = FUNC_6("%s(void)", VAR_2);
   break;
  case 139:
   if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0))
    return *VAR_2 ? FUNC_6("%s %s", VAR_3->name, VAR_2) : VAR_3->name;
   if (VAR_1->type && VAR_1->type->size > 0)
    VAR_2 = FUNC_6("%s[%d]", VAR_2, VAR_1->size/VAR_1->type->size);
   else
    VAR_2 = FUNC_6("%s[]", VAR_2);
   break;
  default: FUNC_0(0);
  }
 }
 FUNC_0(0); return 0;
}
