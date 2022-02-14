
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rel; int old_type; } ;
struct TYPE_6__ {TYPE_1__ ty; } ;
struct TYPE_7__ {scalar_t__ def_kind; TYPE_2__ def; int def_name; } ;
typedef TYPE_3__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(definition *VAR_3)
{
 FUNC_2(VAR_3->def_name,
       VAR_3->def_kind != VAR_0 ||
       !FUNC_1(VAR_3->def.ty.old_type,
      VAR_3->def.ty.rel));


 if (VAR_2 == 0)
  return;

 FUNC_0(VAR_1, "\tregister long *buf;\n\n");
}
