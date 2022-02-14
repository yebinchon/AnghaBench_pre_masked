
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int size; } ;
struct TYPE_12__ {char* p; } ;
struct TYPE_8__ {TYPE_5__ v; } ;
struct TYPE_9__ {TYPE_1__ c; } ;
struct TYPE_13__ {TYPE_4__* type; TYPE_2__ u; } ;
struct TYPE_11__ {int size; TYPE_7__* type; } ;
struct TYPE_10__ {int size; } ;






 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_3 (TYPE_4__*,TYPE_5__) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void FUNC_4(void) {
 switch (VAR_2) {
 case 129: FUNC_1(VAR_1, " `%s'", VAR_3); break;
 case 130:
  FUNC_1(VAR_1, " `%s'", FUNC_3(VAR_4->type, VAR_4->u.c.v));
  break;
 case 128: {
  int VAR_6, VAR_7;
  if (FUNC_2(VAR_4->type->type)) {
   char *VAR_8 = VAR_4->u.c.v.p;
   VAR_7 = VAR_4->type->size;
   FUNC_1(VAR_1, " \"");
   for (VAR_6 = 0; VAR_6 < 20 && VAR_6 < VAR_7 && *VAR_8; VAR_8++, VAR_6++)
    if (*VAR_8 < ' ' || *VAR_8 >= 0177)
     FUNC_1(VAR_1, "\\%o", *VAR_8);
    else
     FUNC_1(VAR_1, "%c", *VAR_8);
  } else {
   unsigned int *VAR_9 = VAR_4->u.c.v.p;
   FUNC_0(VAR_4->type->type->size == VAR_5->size);
   VAR_7 = VAR_4->type->size/VAR_5->size;
   FUNC_1(VAR_1, " L\"");
   for (VAR_6 = 0; VAR_6 < 20 && VAR_6 < VAR_7 && *VAR_9; VAR_9++, VAR_6++)
    if (*VAR_9 < ' ' || *VAR_9 >= 0177)
     FUNC_1(VAR_1, "\\x%x", *VAR_9);
    else
     FUNC_1(VAR_1, "%c", *VAR_9);
  }
  if (VAR_6 < VAR_7)
   FUNC_1(VAR_1, " ...");
  else
   FUNC_1(VAR_1, "\"");
  break;
  }
 case 131:
  FUNC_1(VAR_1, " `%S'", VAR_3, (char*)VAR_0 - VAR_3);
  break;
 case '`': case '\'': FUNC_1(VAR_1, " \"%k\"", VAR_2); break;
 default: FUNC_1(VAR_1, " `%k'", VAR_2);
 }
}
