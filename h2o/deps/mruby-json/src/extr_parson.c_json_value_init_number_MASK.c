
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double number; } ;
struct TYPE_5__ {TYPE_1__ value; int type; int * parent; } ;
typedef TYPE_2__ JSON_Value ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

JSON_Value * FUNC_1(double VAR_1) {
    JSON_Value *VAR_2 = ((void*)0);
    if ((VAR_1 * 0.0) != 0.0) {
        return ((void*)0);
    }
    VAR_2 = (JSON_Value*)FUNC_0(sizeof(JSON_Value));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2->parent = ((void*)0);
    VAR_2->type = VAR_0;
    VAR_2->value.number = VAR_1;
    return VAR_2;
}
