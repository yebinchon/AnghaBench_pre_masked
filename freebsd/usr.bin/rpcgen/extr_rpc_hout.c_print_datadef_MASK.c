
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int rel; int old_type; } ;
struct TYPE_12__ {TYPE_1__ ty; } ;
struct TYPE_13__ {int def_kind; TYPE_2__ def; int def_name; } ;
typedef TYPE_3__ definition ;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(definition *VAR_1, int VAR_2)
{

 if (VAR_1->def_kind == 131)
  return;

 if (VAR_1->def_kind != 133) {
  FUNC_0(VAR_0, "\n");
 }
 switch (VAR_1->def_kind) {
 case 130:
  FUNC_5(VAR_1);
  break;
 case 128:
  FUNC_7(VAR_1);
  break;
 case 132:
  FUNC_3(VAR_1);
  break;
 case 129:
  FUNC_6(VAR_1);
  break;
 case 131:
  FUNC_4(VAR_1, VAR_2);
  break;
 case 133:
  FUNC_2(VAR_1);
  break;
 }
 if (VAR_1->def_kind != 131 && VAR_1->def_kind != 133) {
     FUNC_8(VAR_1->def_name,
        VAR_1->def_kind != 129 ||
        !FUNC_1(VAR_1->def.ty.old_type,
       VAR_1->def.ty.rel));
 }
}
