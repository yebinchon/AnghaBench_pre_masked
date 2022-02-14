
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int defined; int name; } ;
typedef TYPE_1__* Symbol ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(Symbol VAR_0, void *VAR_1) {
 if (!VAR_0->defined)
  FUNC_0("undefined label `%s'\n", VAR_0->name);
 VAR_0->defined = 1;
}
