
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int array_max; int rel; int old_type; int old_prefix; } ;
struct TYPE_8__ {TYPE_1__ ty; } ;
struct TYPE_9__ {TYPE_2__ def; int def_name; int def_kind; } ;
typedef TYPE_3__ definition ;
struct TYPE_10__ {int array_max; int rel; int type; int prefix; int name; } ;
typedef TYPE_4__ declaration ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_2(definition *VAR_1)
{
 declaration VAR_2;

 VAR_1->def_kind = VAR_0;
 FUNC_1(&VAR_2, VAR_0);
 VAR_1->def_name = VAR_2.name;
 FUNC_0(VAR_2.name, 1);
 VAR_1->def.ty.old_prefix = VAR_2.prefix;
 VAR_1->def.ty.old_type = VAR_2.type;
 VAR_1->def.ty.rel = VAR_2.rel;
 VAR_1->def.ty.array_max = VAR_2.array_max;
}
