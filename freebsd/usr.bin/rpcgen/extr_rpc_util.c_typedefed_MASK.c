
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * old_prefix; } ;
struct TYPE_6__ {TYPE_1__ ty; } ;
struct TYPE_7__ {scalar_t__ def_kind; int def_name; TYPE_2__ def; } ;
typedef TYPE_3__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(definition *VAR_1, const char *VAR_2)
{
 if (VAR_1->def_kind != VAR_0 || VAR_1->def.ty.old_prefix != ((void*)0)) {
  return (0);
 } else {
  return (FUNC_0(VAR_1->def_name, VAR_2));
 }
}
