
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
typedef TYPE_1__ JSON_Value ;
typedef int JSON_Status ;
typedef int JSON_Array ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

JSON_Status FUNC_1(JSON_Array *VAR_1, JSON_Value *VAR_2) {
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_2->parent != ((void*)0)) {
        return VAR_0;
    }
    return FUNC_0(VAR_1, VAR_2);
}
