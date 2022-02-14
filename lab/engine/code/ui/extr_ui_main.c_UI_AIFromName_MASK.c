
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int aliasCount; TYPE_1__* aliasList; } ;
struct TYPE_3__ {char const* ai; int name; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0.aliasCount; VAR_2++) {
  if (FUNC_0(VAR_0.aliasList[VAR_2].name, VAR_1) == 0) {
   return VAR_0.aliasList[VAR_2].ai;
  }
 }
 return "James";
}
