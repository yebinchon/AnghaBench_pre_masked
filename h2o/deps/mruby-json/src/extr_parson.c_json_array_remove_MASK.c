
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; scalar_t__ items; } ;
typedef int JSON_Value ;
typedef int JSON_Status ;
typedef TYPE_1__ JSON_Array ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,size_t) ;

JSON_Status FUNC_4(JSON_Array *VAR_2, size_t VAR_3) {
    size_t VAR_4 = 0;
    if (VAR_2 == ((void*)0) || VAR_3 >= FUNC_0(VAR_2)) {
        return VAR_0;
    }
    FUNC_2(FUNC_1(VAR_2, VAR_3));
    VAR_4 = (FUNC_0(VAR_2) - 1 - VAR_3) * sizeof(JSON_Value*);
    FUNC_3(VAR_2->items + VAR_3, VAR_2->items + VAR_3 + 1, VAR_4);
    VAR_2->count -= 1;
    return VAR_1;
}
