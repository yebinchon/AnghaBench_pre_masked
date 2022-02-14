
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; int * values; int * names; } ;
typedef int JSON_Status ;
typedef TYPE_1__ JSON_Object ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

JSON_Status FUNC_3(JSON_Object *VAR_2) {
    size_t VAR_3 = 0;
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
        FUNC_2(VAR_2->names[VAR_3]);
        FUNC_1(VAR_2->values[VAR_3]);
    }
    VAR_2->count = 0;
    return VAR_1;
}
