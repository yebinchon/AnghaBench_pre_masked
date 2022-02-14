
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int index; TYPE_3__* entry; TYPE_3__* nextEntry; TYPE_1__* ht; } ;
typedef TYPE_2__ dictIterator ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_3__ dictEntry ;
struct TYPE_6__ {TYPE_3__** table; scalar_t__ size; } ;



__attribute__((used)) static dictEntry *FUNC_0(dictIterator *VAR_0) {
    while (1) {
        if (VAR_0->entry == ((void*)0)) {
            VAR_0->index++;
            if (VAR_0->index >=
                    (signed)VAR_0->ht->size) break;
            VAR_0->entry = VAR_0->ht->table[VAR_0->index];
        } else {
            VAR_0->entry = VAR_0->nextEntry;
        }
        if (VAR_0->entry) {


            VAR_0->nextEntry = VAR_0->entry->next;
            return VAR_0->entry;
        }
    }
    return ((void*)0);
}
