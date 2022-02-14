
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ def_kind; int def_name; } ;
typedef TYPE_1__ definition ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(definition *VAR_2, const char *VAR_3)
{

 if (VAR_2->def_kind == VAR_1 || VAR_2->def_kind == VAR_0) {
  return (0);
 } else {
  return (FUNC_0(VAR_2->def_name, VAR_3));
 }
}
