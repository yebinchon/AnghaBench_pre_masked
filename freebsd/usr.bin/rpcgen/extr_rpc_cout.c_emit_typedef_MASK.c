
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int relation ;
struct TYPE_6__ {char* old_prefix; char* old_type; char* array_max; int rel; } ;
struct TYPE_5__ {TYPE_2__ ty; } ;
struct TYPE_7__ {int def_name; TYPE_1__ def; } ;
typedef TYPE_3__ definition ;


 int FUNC_0 (int,char const*,char const*,int ,char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(definition *VAR_0)
{
 const char *VAR_1 = VAR_0->def.ty.old_prefix;
 const char *VAR_2 = VAR_0->def.ty.old_type;
 const char *VAR_3 = VAR_0->def.ty.array_max;
 relation VAR_4 = VAR_0->def.ty.rel;

 FUNC_0(1, VAR_1, VAR_2, VAR_4, VAR_3, "objp", VAR_0->def_name);
}
