
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rel; int array_max; int name; int type; } ;
typedef TYPE_1__ declaration ;




 int FUNC_0 (int,TYPE_1__*,int,int const) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, declaration *VAR_2, int VAR_3)
{
 switch (VAR_2->rel) {
 case 129 :
  FUNC_0(VAR_1, VAR_2, VAR_3, 129);
  break;
 case 128 :
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_0, "{\n");
  FUNC_2(VAR_0, VAR_1 + 1);
  FUNC_1(VAR_0, "%s *genp;\n\n", VAR_2->type);
  FUNC_2(VAR_0, VAR_1 + 1);
  FUNC_1(VAR_0,
   "for (i = 0, genp = objp->%s;\n", VAR_2->name);
  FUNC_2(VAR_0, VAR_1 + 2);
  FUNC_1(VAR_0, "i < %s; i++) {\n", VAR_2->array_max);
  FUNC_0(VAR_1 + 2, VAR_2, VAR_3, 128);
  FUNC_2(VAR_0, VAR_1 + 1);
  FUNC_1(VAR_0, "}\n");
  FUNC_2(VAR_0, VAR_1);
  FUNC_1(VAR_0, "}\n");
  break;
 default:
  break;
 }
}
