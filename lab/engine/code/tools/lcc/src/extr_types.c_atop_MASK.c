
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_7__ {struct TYPE_7__* type; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

Type FUNC_3(Type VAR_0) {
 if (FUNC_1(VAR_0))
  return FUNC_2(VAR_0->type);
 FUNC_0("type error: %s\n", "array expected");
 return FUNC_2(VAR_0);
}
