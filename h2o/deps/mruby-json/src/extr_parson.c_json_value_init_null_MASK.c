
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int * parent; } ;
typedef TYPE_1__ JSON_Value ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

JSON_Value * FUNC_1(void) {
    JSON_Value *VAR_1 = (JSON_Value*)FUNC_0(sizeof(JSON_Value));
    if (!VAR_1) {
        return ((void*)0);
    }
    VAR_1->parent = ((void*)0);
    VAR_1->type = VAR_0;
    return VAR_1;
}
