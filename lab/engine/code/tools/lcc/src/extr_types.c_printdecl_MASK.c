
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Type ;
struct TYPE_3__ {int sclass; int name; } ;
typedef TYPE_1__* Symbol ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(Symbol VAR_1, Type VAR_2) {
 switch (VAR_1->sclass) {
 case 132:
  FUNC_1(VAR_0, "%s;\n", FUNC_2(VAR_2, VAR_1->name));
  break;
 case 129: case 130:
  FUNC_1(VAR_0, "%k %s;\n", VAR_1->sclass, FUNC_2(VAR_2, VAR_1->name));
  break;
 case 128: case 131:
  break;
 default: FUNC_0(0);
 }
}
