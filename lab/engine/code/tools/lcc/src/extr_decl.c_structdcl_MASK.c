
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* Type ;
struct TYPE_12__ {int defined; int src; } ;
struct TYPE_11__ {scalar_t__ scope; TYPE_2__* type; } ;
struct TYPE_9__ {TYPE_4__* sym; } ;
struct TYPE_10__ {int op; TYPE_1__ u; } ;
typedef TYPE_3__* Symbol ;
typedef int Coordinate ;


 char VAR_0 ;

 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 char FUNC_2 () ;
 scalar_t__ FUNC_3 (char,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_4 (char*,int ) ;
 TYPE_2__* FUNC_5 (int,char*) ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_6 (char,char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static Type FUNC_8(int VAR_8) {
 char *VAR_9;
 Type VAR_10;
 Symbol VAR_11;
 Coordinate VAR_12;

 VAR_3 = FUNC_2();
 VAR_12 = VAR_2;
 if (VAR_3 == VAR_0) {
  VAR_9 = VAR_4;
  VAR_3 = FUNC_2();
 } else
  VAR_9 = "";
 if (VAR_3 == '{') {
  static char VAR_13[] = { 128, ',', 0 };
  VAR_10 = FUNC_5(VAR_8, VAR_9);
  VAR_10->u.sym->src = VAR_12;
  VAR_10->u.sym->defined = 1;
  VAR_3 = FUNC_2();
  if (FUNC_3(VAR_3, VAR_5))
   FUNC_1(VAR_10);
  else
   FUNC_0("invalid %k field declarations\n", VAR_8);
  FUNC_6('}', VAR_13);
 }
 else if (*VAR_9 && (VAR_11 = FUNC_4(VAR_9, VAR_6)) != ((void*)0)
 && VAR_11->type->op == VAR_8) {
  VAR_10 = VAR_11->type;
  if (VAR_3 == ';' && VAR_11->scope < VAR_1)
   VAR_10 = FUNC_5(VAR_8, VAR_9);
 }
 else {
  if (*VAR_9 == 0)
   FUNC_0("missing %k tag\n", VAR_8);
  VAR_10 = FUNC_5(VAR_8, VAR_9);
 }
 if (*VAR_9 && VAR_7)
  FUNC_7(VAR_10->u.sym, VAR_12);
 return VAR_10;
}
