
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ count; TYPE_3__* p; TYPE_1__** ref; } ;
typedef TYPE_2__ quicly_sentmap_iter_t ;
struct TYPE_7__ {int * acked; } ;
typedef TYPE_3__ quicly_sent_t ;
struct TYPE_5__ {scalar_t__ num_entries; TYPE_3__* entries; struct TYPE_5__* next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(quicly_sentmap_iter_t *VAR_1)
{
    if (--VAR_1->count != 0) {
        ++VAR_1->p;
    } else if (*(VAR_1->ref = &(*VAR_1->ref)->next) == ((void*)0)) {
        VAR_1->p = (quicly_sent_t *)&VAR_0;
        VAR_1->count = 0;
        return;
    } else {
        FUNC_0((*VAR_1->ref)->num_entries != 0);
        VAR_1->count = (*VAR_1->ref)->num_entries;
        VAR_1->p = (*VAR_1->ref)->entries;
    }
    while (VAR_1->p->acked == ((void*)0))
        ++VAR_1->p;
}
