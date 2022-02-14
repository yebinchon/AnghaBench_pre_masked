
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ dictEntry ;
struct TYPE_11__ {int used; TYPE_1__** table; } ;
typedef TYPE_2__ dict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,void*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(dict *VAR_2, void *VAR_3, void *VAR_4) {
    int VAR_5;
    dictEntry *VAR_6;



    if ((VAR_5 = FUNC_0(VAR_2, VAR_3)) == -1)
        return VAR_0;


    VAR_6 = FUNC_3(sizeof(*VAR_6));
    VAR_6->next = VAR_2->table[VAR_5];
    VAR_2->table[VAR_5] = VAR_6;


    FUNC_1(VAR_2, VAR_6, VAR_3);
    FUNC_2(VAR_2, VAR_6, VAR_4);
    VAR_2->used++;
    return VAR_1;
}
