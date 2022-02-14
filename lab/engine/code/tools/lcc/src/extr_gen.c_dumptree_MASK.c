
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ op; struct TYPE_5__** kids; TYPE_1__** syms; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__* Node ;
 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(Node VAR_5) {
 if (VAR_5->op == VAR_3+VAR_2 && VAR_5->syms[0]) {
  FUNC_1(VAR_4, "VREGP(%s)", VAR_5->syms[0]->name);
  return;
 } else if (FUNC_2(VAR_5->op) == VAR_1) {
  FUNC_1(VAR_4, "LOAD(");
  FUNC_5(VAR_5->kids[0]);
  FUNC_1(VAR_4, ")");
  return;
 }
 FUNC_1(VAR_4, "%s(", FUNC_3(VAR_5->op));
 switch (FUNC_2(VAR_5->op)) {
 case 149: case 138:
 case 158: case 159: case 157:
  if (VAR_5->syms[0])
   FUNC_1(VAR_4, "%s", VAR_5->syms[0]->name);
  break;
 case 130:
  if (VAR_5->kids[0])
   FUNC_5(VAR_5->kids[0]);
  break;
 case 148: case 147: case 146: case 145: case 139:
 case 156: case 153: case 131: case 140:
  FUNC_5(VAR_5->kids[0]);
  break;
 case 150:
  if (FUNC_4(VAR_5->op) != VAR_0) {
   FUNC_5(VAR_5->kids[0]);
   break;
  }

 case 143: case 132: case 141: case 142: case 137: case 135:
 case 155: case 152: case 154: case 151: case 129: case 136:
 case 160: case 128: case 144: case 133: case 134:
  FUNC_5(VAR_5->kids[0]);
  FUNC_1(VAR_4, ", ");
  FUNC_5(VAR_5->kids[1]);
  break;
 default: FUNC_0(0);
 }
 FUNC_1(VAR_4, ")");
}
