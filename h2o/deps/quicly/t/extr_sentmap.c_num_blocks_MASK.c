
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_quicly_sent_block_t {struct st_quicly_sent_block_t* next; } ;
struct TYPE_3__ {struct st_quicly_sent_block_t* head; } ;
typedef TYPE_1__ quicly_sentmap_t ;



__attribute__((used)) static size_t FUNC_0(quicly_sentmap_t *VAR_0)
{
    struct st_quicly_sent_block_t *VAR_1;
    size_t VAR_2 = 0;

    for (VAR_1 = VAR_0->head; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
        ++VAR_2;

    return VAR_2;
}
