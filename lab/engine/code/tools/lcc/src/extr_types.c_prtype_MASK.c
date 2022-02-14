
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef TYPE_8__* Type ;
struct TYPE_19__ {int value; } ;
struct TYPE_23__ {TYPE_5__ u; int name; } ;
struct TYPE_20__ {TYPE_8__** proto; } ;
struct TYPE_21__ {TYPE_6__ f; TYPE_3__* sym; } ;
struct TYPE_18__ {unsigned int marked; } ;
struct TYPE_22__ {int op; TYPE_7__ u; struct TYPE_22__* type; int align; int size; TYPE_4__ x; } ;
struct TYPE_15__ {TYPE_10__* flist; } ;
struct TYPE_16__ {TYPE_9__** idlist; TYPE_1__ s; } ;
struct TYPE_17__ {TYPE_2__ u; int name; } ;
struct TYPE_14__ {int lsb; int offset; int name; TYPE_8__* type; struct TYPE_14__* link; } ;
typedef TYPE_9__* Symbol ;
typedef TYPE_10__* Field ;
typedef int FILE ;
 scalar_t__ FUNC_0 (TYPE_10__*) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int *,char*,...) ;

__attribute__((used)) static void FUNC_3(Type VAR_0, FILE *VAR_1, int VAR_2, unsigned VAR_3) {
 switch (VAR_0->op) {
 default:
  FUNC_2(VAR_1, "(%d %d %d [%p])", VAR_0->op, VAR_0->size, VAR_0->align, VAR_0->u.sym);
  break;
 case 136: case 134: case 130: case 129:
  FUNC_2(VAR_1, "(%k %d %d [\"%s\"])", VAR_0->op, VAR_0->size, VAR_0->align, VAR_0->u.sym->name);
  break;
 case 138 +128: case 138: case 128: case 133: case 139:
  FUNC_2(VAR_1, "(%k %d %d ", VAR_0->op, VAR_0->size, VAR_0->align);
  FUNC_3(VAR_0->type, VAR_1, VAR_2+1, VAR_3);
  FUNC_2(VAR_1, ")");
  break;
 case 132: case 131:
  FUNC_2(VAR_1, "(%k %d %d [\"%s\"]", VAR_0->op, VAR_0->size, VAR_0->align, VAR_0->u.sym->name);
  if (VAR_0->x.marked != VAR_3) {
   Field VAR_4;
   VAR_0->x.marked = VAR_3;
   for (VAR_4 = VAR_0->u.sym->u.s.flist; VAR_4; VAR_4 = VAR_4->link) {
    FUNC_2(VAR_1, "\n%I", VAR_2+1);
    FUNC_3(VAR_4->type, VAR_1, VAR_2+1, VAR_3);
    FUNC_2(VAR_1, " %s@%d", VAR_4->name, VAR_4->offset);
    if (VAR_4->lsb)
     FUNC_2(VAR_1, ":%d..%d",
      FUNC_1(VAR_4) + FUNC_0(VAR_4), FUNC_0(VAR_4));
   }
   FUNC_2(VAR_1, "\n%I", VAR_2);
  }
  FUNC_2(VAR_1, ")");
  break;
 case 137:
  FUNC_2(VAR_1, "(%k %d %d [\"%s\"]", VAR_0->op, VAR_0->size, VAR_0->align, VAR_0->u.sym->name);
  if (VAR_0->x.marked != VAR_3) {
   int VAR_5;
   Symbol *VAR_6 = VAR_0->u.sym->u.idlist;
   VAR_0->x.marked = VAR_3;
   for (VAR_5 = 0; VAR_6[VAR_5] != ((void*)0); VAR_5++)
    FUNC_2(VAR_1, "%I%s=%d\n", VAR_2+1, VAR_6[VAR_5]->name, VAR_6[VAR_5]->u.value);
  }
  FUNC_2(VAR_1, ")");
  break;
 case 135:
  FUNC_2(VAR_1, "(%k %d %d ", VAR_0->op, VAR_0->size, VAR_0->align);
  FUNC_3(VAR_0->type, VAR_1, VAR_2+1, VAR_3);
  if (VAR_0->u.f.proto) {
   int VAR_7;
   FUNC_2(VAR_1, "\n%I{", VAR_2+1);
   for (VAR_7 = 0; VAR_0->u.f.proto[VAR_7]; VAR_7++) {
    if (VAR_7 > 0)
     FUNC_2(VAR_1, "%I", VAR_2+2);
    FUNC_3(VAR_0->u.f.proto[VAR_7], VAR_1, VAR_2+2, VAR_3);
    FUNC_2(VAR_1, "\n");
   }
   FUNC_2(VAR_1, "%I}", VAR_2+1);
  }
  FUNC_2(VAR_1, ")");
  break;
 }
}
