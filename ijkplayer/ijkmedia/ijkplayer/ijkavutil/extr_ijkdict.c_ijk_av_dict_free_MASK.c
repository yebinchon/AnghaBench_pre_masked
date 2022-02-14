
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; struct TYPE_4__* elems; struct TYPE_4__* value; struct TYPE_4__* key; } ;
typedef TYPE_1__ IjkAVDictionary ;


 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(IjkAVDictionary **VAR_0)
{
    IjkAVDictionary *VAR_1 = *VAR_0;

    if (VAR_1) {
        while (VAR_1->count--) {
            FUNC_0(&VAR_1->elems[VAR_1->count].key);
            FUNC_0(&VAR_1->elems[VAR_1->count].value);
        }
        FUNC_0(&VAR_1->elems);
    }
    FUNC_0(VAR_0);
}
