
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int key; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_8__ {scalar_t__ size; unsigned int sizemask; TYPE_1__** table; } ;
typedef TYPE_2__ dict ;


 scalar_t__ FUNC_0 (TYPE_2__*,void const*,int ) ;
 unsigned int FUNC_1 (TYPE_2__*,void const*) ;

__attribute__((used)) static dictEntry *FUNC_2(dict *VAR_0, const void *VAR_1) {
    dictEntry *VAR_2;
    unsigned int VAR_3;

    if (VAR_0->size == 0) return ((void*)0);
    VAR_3 = FUNC_1(VAR_0, VAR_1) & VAR_0->sizemask;
    VAR_2 = VAR_0->table[VAR_3];
    while(VAR_2) {
        if (FUNC_0(VAR_0, VAR_1, VAR_2->key))
            return VAR_2;
        VAR_2 = VAR_2->next;
    }
    return ((void*)0);
}
