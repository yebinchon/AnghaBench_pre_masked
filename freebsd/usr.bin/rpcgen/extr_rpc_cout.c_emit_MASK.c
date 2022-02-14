
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int old_type; } ;
struct TYPE_12__ {TYPE_1__ ty; } ;
struct TYPE_13__ {int def_kind; int def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;

void
FUNC_8(definition *VAR_2)
{
 if (VAR_2->def_kind == VAR_0) {
  return;
 }
 if (VAR_2->def_kind == VAR_1) {
  FUNC_1(VAR_2);
  return;
 }
 if (VAR_2->def_kind == 129) {






  if (FUNC_7(VAR_2->def.ty.old_type, VAR_2->def_name) == 0)
   return;
 }
 FUNC_5(VAR_2);
 switch (VAR_2->def_kind) {
 case 128:
  FUNC_4(VAR_2);
  break;
 case 131:
  FUNC_0(VAR_2);
  break;
 case 130:
  FUNC_2(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;

 default:
  break;
 }
 FUNC_6();
}
