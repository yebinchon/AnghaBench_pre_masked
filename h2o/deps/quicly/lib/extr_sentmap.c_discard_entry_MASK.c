
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_quicly_sent_block_t {scalar_t__ num_entries; TYPE_1__* entries; } ;
typedef int quicly_sentmap_t ;
struct TYPE_5__ {scalar_t__ count; TYPE_1__* p; struct st_quicly_sent_block_t** ref; } ;
typedef TYPE_2__ quicly_sentmap_iter_t ;
struct TYPE_4__ {int * acked; } ;


 int FUNC_0 (int ) ;
 struct st_quicly_sent_block_t** FUNC_1 (int *,struct st_quicly_sent_block_t**) ;

__attribute__((used)) static void FUNC_2(quicly_sentmap_t *VAR_0, quicly_sentmap_iter_t *VAR_1)
{
    FUNC_0(VAR_1->p->acked != ((void*)0));
    VAR_1->p->acked = ((void*)0);

    struct st_quicly_sent_block_t *VAR_2 = *VAR_1->ref;
    if (--VAR_2->num_entries == 0) {
        VAR_1->ref = FUNC_1(VAR_0, VAR_1->ref);
        VAR_2 = *VAR_1->ref;
        VAR_1->p = VAR_2->entries - 1;
        VAR_1->count = VAR_2->num_entries + 1;
    }
}
