
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int key; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_8__ {unsigned int sizemask; TYPE_1__** table; } ;
typedef TYPE_2__ dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,void const*,int ) ;
 unsigned int FUNC_2 (TYPE_2__*,void const*) ;

__attribute__((used)) static int FUNC_3(dict *VAR_1, const void *VAR_2) {
    unsigned int VAR_3;
    dictEntry *VAR_4;


    if (FUNC_0(VAR_1) == VAR_0)
        return -1;

    VAR_3 = FUNC_2(VAR_1, VAR_2) & VAR_1->sizemask;

    VAR_4 = VAR_1->table[VAR_3];
    while(VAR_4) {
        if (FUNC_1(VAR_1, VAR_2, VAR_4->key))
            return -1;
        VAR_4 = VAR_4->next;
    }
    return VAR_3;
}
