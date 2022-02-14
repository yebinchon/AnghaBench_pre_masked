
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** names; char** values; int count; size_t capacity; } ;
typedef char JSON_Value ;
typedef int JSON_Status ;
typedef TYPE_1__ JSON_Object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char**,int) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static JSON_Status FUNC_3(JSON_Object *VAR_2, size_t VAR_3) {
    char **VAR_4 = ((void*)0);
    JSON_Value **VAR_5 = ((void*)0);

    if ((VAR_2->names == ((void*)0) && VAR_2->values != ((void*)0)) ||
        (VAR_2->names != ((void*)0) && VAR_2->values == ((void*)0)) ||
        VAR_3 == 0) {
            return VAR_0;
    }
    VAR_4 = (char**)FUNC_2(VAR_3 * sizeof(char*));
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }
    VAR_5 = (JSON_Value**)FUNC_2(VAR_3 * sizeof(JSON_Value*));
    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_4);
        return VAR_0;
    }
    if (VAR_2->names != ((void*)0) && VAR_2->values != ((void*)0) && VAR_2->count > 0) {
        FUNC_0(VAR_4, VAR_2->names, VAR_2->count * sizeof(char*));
        FUNC_0(VAR_5, VAR_2->values, VAR_2->count * sizeof(JSON_Value*));
    }
    FUNC_1(VAR_2->names);
    FUNC_1(VAR_2->values);
    VAR_2->names = VAR_4;
    VAR_2->values = VAR_5;
    VAR_2->capacity = VAR_3;
    return VAR_1;
}
