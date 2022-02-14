
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct st_session_ticket_t {scalar_t__ not_before; scalar_t__ not_after; } ;
struct TYPE_3__ {size_t size; struct st_session_ticket_t** entries; } ;
typedef TYPE_1__ session_ticket_vector_t ;



__attribute__((used)) static struct st_session_ticket_t *FUNC_0(session_ticket_vector_t *VAR_0, uint64_t VAR_1)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 != VAR_0->size; ++VAR_2) {
        struct st_session_ticket_t *VAR_3 = VAR_0->entries[VAR_2];
        if (VAR_3->not_before <= VAR_1) {
            if (VAR_1 <= VAR_3->not_after) {
                return VAR_3;
            } else {
                return ((void*)0);
            }
        }
    }
    return ((void*)0);
}
