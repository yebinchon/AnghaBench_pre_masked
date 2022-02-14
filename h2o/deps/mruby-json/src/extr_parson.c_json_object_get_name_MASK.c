
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const** names; } ;
typedef TYPE_1__ JSON_Object ;


 size_t FUNC_0 (TYPE_1__ const*) ;

const char * FUNC_1(const JSON_Object *VAR_0, size_t VAR_1) {
    if (VAR_0 == ((void*)0) || VAR_1 >= FUNC_0(VAR_0)) {
        return ((void*)0);
    }
    return VAR_0->names[VAR_1];
}
