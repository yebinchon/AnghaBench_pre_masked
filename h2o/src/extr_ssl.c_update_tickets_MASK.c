
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct st_session_ticket_t {scalar_t__ not_after; scalar_t__* name; scalar_t__ not_before; } ;
struct TYPE_12__ {int size; struct st_session_ticket_t** entries; } ;
typedef TYPE_4__ session_ticket_vector_t ;
struct TYPE_9__ {int md; int cipher; } ;
struct TYPE_10__ {TYPE_1__ generating; } ;
struct TYPE_11__ {TYPE_2__ vars; } ;
struct TYPE_13__ {int lifetime; TYPE_3__ ticket; } ;


 TYPE_8__ VAR_0 ;
 int * FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (struct st_session_ticket_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (struct st_session_ticket_t**,struct st_session_ticket_t**,int) ;
 struct st_session_ticket_t* FUNC_5 (int ,int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(session_ticket_vector_t *VAR_1, uint64_t VAR_2)
{
    int VAR_3 = 0, VAR_4;


    while (VAR_1->size != 0) {
        struct st_session_ticket_t *VAR_5 = VAR_1->entries[VAR_1->size - 1];
        if (VAR_2 <= VAR_5->not_after)
            break;
        VAR_1->entries[--VAR_1->size] = ((void*)0);
        FUNC_1(VAR_5);
        VAR_3 = 1;
    }




    if (VAR_1->size > 1) {
        size_t VAR_6 = 0, VAR_7;
        do {
            for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_1->size; ++VAR_7)
                if (VAR_1->entries[VAR_7]->name[0] == VAR_1->entries[VAR_6]->name[0])
                    break;
            if (VAR_7 < VAR_1->size) {
                FUNC_1(VAR_1->entries[VAR_6]);
                FUNC_4(VAR_1->entries + VAR_6, VAR_1->entries + VAR_6 + 1,
                        sizeof(*VAR_1->entries) * (VAR_1->size - VAR_6 - 1));
                --VAR_1->size;
            } else {
                ++VAR_6;
            }
        } while (VAR_6 < VAR_1->size - 1);
    }
    if (VAR_1->size >= 256)
        FUNC_2("no space for unique QUIC key identifier");


    VAR_4 = FUNC_0(VAR_1, VAR_2) != ((void*)0);
    if (!VAR_4 || (VAR_1->entries[0]->not_before + VAR_0.lifetime / 4 < VAR_2)) {
        uint64_t VAR_8 = VAR_4 ? VAR_2 + 60 : VAR_2;
        struct st_session_ticket_t *VAR_9 = FUNC_5(VAR_0.ticket.vars.generating.cipher, VAR_0.ticket.vars.generating.md,
                                                        VAR_8, VAR_8 + VAR_0.lifetime - 1, 1);

        while (1) {
            size_t VAR_10;
            for (VAR_10 = 0; VAR_10 < VAR_1->size; ++VAR_10)
                if (VAR_1->entries[VAR_10]->name[0] == VAR_9->name[0])
                    break;
            if (VAR_10 == VAR_1->size)
                break;
            ++VAR_9->name[0];
        }
        FUNC_3(((void*)0), VAR_1, VAR_1->size + 1);
        FUNC_4(VAR_1->entries + 1, VAR_1->entries, sizeof(VAR_1->entries[0]) * VAR_1->size);
        ++VAR_1->size;
        VAR_1->entries[0] = VAR_9;
        VAR_3 = 1;
    }

    return VAR_3;
}
