
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; size_t capacity; int ** items; } ;
typedef int JSON_Value ;
typedef int JSON_Status ;
typedef TYPE_1__ JSON_Array ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int **,int) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static JSON_Status FUNC_3(JSON_Array *VAR_2, size_t VAR_3) {
    JSON_Value **VAR_4 = ((void*)0);
    if (VAR_3 == 0) {
        return VAR_0;
    }
    VAR_4 = (JSON_Value**)FUNC_2(VAR_3 * sizeof(JSON_Value*));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_2->items != ((void*)0) && VAR_2->count > 0) {
        FUNC_0(VAR_4, VAR_2->items, VAR_2->count * sizeof(JSON_Value*));
    }
    FUNC_1(VAR_2->items);
    VAR_2->items = VAR_4;
    VAR_2->capacity = VAR_3;
    return VAR_1;
}
