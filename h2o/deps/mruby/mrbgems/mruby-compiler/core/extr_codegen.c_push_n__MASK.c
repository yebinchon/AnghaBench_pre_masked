
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sp; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(codegen_scope *VAR_1, int VAR_2)
{
  if (VAR_1->sp+VAR_2 >= 0xffff) {
    FUNC_0(VAR_1, "too complex expression");
  }
  VAR_1->sp+=VAR_2;
  VAR_0;
}
