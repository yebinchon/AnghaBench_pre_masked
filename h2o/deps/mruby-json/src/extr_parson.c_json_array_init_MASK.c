
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ capacity; int ** items; int * wrapping_value; } ;
typedef int JSON_Value ;
typedef TYPE_1__ JSON_Array ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static JSON_Array * FUNC_1(JSON_Value *VAR_0) {
    JSON_Array *VAR_1 = (JSON_Array*)FUNC_0(sizeof(JSON_Array));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_1->wrapping_value = VAR_0;
    VAR_1->items = (JSON_Value**)((void*)0);
    VAR_1->capacity = 0;
    VAR_1->count = 0;
    return VAR_1;
}
