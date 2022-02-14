
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__* Symbol ;


 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(Symbol VAR_0, void *VAR_1) {
 int VAR_2;
 Symbol *VAR_3 = VAR_1;

 for (VAR_2 = 0; VAR_3[VAR_2]; VAR_2++)
  if (VAR_0->name == VAR_3[VAR_2]->name) {
   VAR_3[VAR_2] = VAR_0;
   return;
  }
 FUNC_0("declared parameter `%s' is missing\n", VAR_0->name);
}
