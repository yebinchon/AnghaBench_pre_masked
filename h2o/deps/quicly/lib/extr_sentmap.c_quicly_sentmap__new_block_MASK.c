
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_quicly_sent_block_t {struct st_quicly_sent_block_t* next; scalar_t__ next_insert_at; scalar_t__ num_entries; } ;
struct TYPE_3__ {struct st_quicly_sent_block_t* tail; struct st_quicly_sent_block_t* head; } ;
typedef TYPE_1__ quicly_sentmap_t ;


 struct st_quicly_sent_block_t* FUNC_0 (int) ;

struct st_quicly_sent_block_t *FUNC_1(quicly_sentmap_t *VAR_0)
{
    struct st_quicly_sent_block_t *VAR_1;

    if ((VAR_1 = FUNC_0(sizeof(*VAR_1))) == ((void*)0))
        return ((void*)0);

    VAR_1->next = ((void*)0);
    VAR_1->num_entries = 0;
    VAR_1->next_insert_at = 0;
    if (VAR_0->tail != ((void*)0)) {
        VAR_0->tail->next = VAR_1;
        VAR_0->tail = VAR_1;
    } else {
        VAR_0->head = VAR_0->tail = VAR_1;
    }

    return VAR_1;
}
