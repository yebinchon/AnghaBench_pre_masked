
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_session_ticket_t {int hmac; int cipher; int keybuf; int * name; } ;
struct st_quic_keyset_t {int dummy; } ;
struct TYPE_8__ {scalar_t__ size; struct st_quic_keyset_t* entries; } ;
struct TYPE_7__ {unsigned int generation; TYPE_4__ keys; } ;
struct TYPE_5__ {scalar_t__ size; struct st_session_ticket_t** entries; } ;
struct TYPE_6__ {unsigned int generation; int rwlock; TYPE_1__ tickets; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct st_quic_keyset_t*) ;
 int FUNC_4 (int *,TYPE_4__*,scalar_t__) ;
 int FUNC_5 (struct st_quic_keyset_t*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static struct st_quic_keyset_t *FUNC_9(void)
{
    unsigned VAR_2;

    while ((VAR_2 = VAR_1.generation) != VAR_0.generation) {

        while (VAR_0.keys.size != 0)
            FUNC_3(VAR_0.keys.entries + --VAR_0.keys.size);


        FUNC_6(&VAR_1.rwlock);
        FUNC_2(VAR_1.tickets.size != 0);
        FUNC_4(((void*)0), &VAR_0.keys, VAR_1.tickets.size);
        for (; VAR_0.keys.size != VAR_1.tickets.size; ++VAR_0.keys.size) {
            struct st_session_ticket_t *VAR_3 = VAR_1.tickets.entries[VAR_0.keys.size];
            FUNC_5(VAR_0.keys.entries + VAR_0.keys.size, VAR_3->name[0],
                        FUNC_8(VAR_3->keybuf, FUNC_0(VAR_3->cipher) + FUNC_1(VAR_3->hmac)));
        }
        FUNC_7(&VAR_1.rwlock);


        VAR_0.generation = VAR_2;
    }

    return VAR_0.keys.entries;
}
