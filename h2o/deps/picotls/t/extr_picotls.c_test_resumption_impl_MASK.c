
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int member_0; } ;
typedef TYPE_2__ ptls_save_ticket_t ;
struct TYPE_14__ {scalar_t__ id; } ;
typedef TYPE_3__ ptls_key_exchange_algorithm_t ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_4__ ptls_encrypt_ticket_t ;
struct TYPE_17__ {int ticket_lifetime; int max_early_data_size; TYPE_4__* encrypt_ticket; int * save_ticket; TYPE_1__** key_exchanges; } ;
struct TYPE_16__ {int * base; } ;
struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_11__ {int require_dhe_on_psk; TYPE_3__** key_exchanges; TYPE_2__* save_ticket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_10__* VAR_3 ;
 TYPE_9__* VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__ FUNC_2 (int *,int ) ;
 TYPE_3__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_5__,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_10, int VAR_11)
{
    FUNC_0(VAR_3->key_exchanges[0]->id == VAR_4->key_exchanges[0]->id);
    FUNC_0(VAR_3->key_exchanges[1] == ((void*)0));
    FUNC_0(VAR_4->key_exchanges[1] == ((void*)0));
    FUNC_0(VAR_3->key_exchanges[0]->id != VAR_7);
    ptls_key_exchange_algorithm_t *VAR_12[] = {&VAR_7, VAR_3->key_exchanges[0], ((void*)0)},
                                  **VAR_13 = VAR_3->key_exchanges;

    if (VAR_10)
        VAR_3->key_exchanges = VAR_12;

    ptls_encrypt_ticket_t VAR_14 = {VAR_5};
    ptls_save_ticket_t VAR_15 = {VAR_6};

    FUNC_0(VAR_4->ticket_lifetime == 0);
    FUNC_0(VAR_4->max_early_data_size == 0);
    FUNC_0(VAR_4->encrypt_ticket == ((void*)0));
    FUNC_0(VAR_4->save_ticket == ((void*)0));
    VAR_8 = FUNC_2(((void*)0), 0);

    VAR_4->ticket_lifetime = 86400;
    VAR_4->max_early_data_size = 8192;
    VAR_4->encrypt_ticket = &VAR_14;
    VAR_3->save_ticket = &VAR_15;

    VAR_9 = 0;
    FUNC_3(VAR_8, VAR_10 ? VAR_1 : VAR_0, 1, 0, 0);
    FUNC_1(VAR_9 == 1);
    FUNC_1(VAR_8.base != ((void*)0));


    FUNC_3(VAR_8, VAR_0, 1, 0, VAR_11);
    if (VAR_11 == 1) {
        FUNC_1(VAR_9 == 3);
    } else {
        FUNC_1(VAR_9 == 1);
    }


    FUNC_3(VAR_8, VAR_2, 1, 0, VAR_11);
    if (VAR_11 == 1) {
        FUNC_1(VAR_9 == 5);
    } else {
        FUNC_1(VAR_9 == 1);
    }

    VAR_3->require_dhe_on_psk = 1;


    FUNC_3(VAR_8, VAR_0, 1, 0, VAR_11);
    if (VAR_11 == 1) {
        FUNC_1(VAR_9 == 7);
    } else {
        FUNC_1(VAR_9 == 1);
    }


    FUNC_3(VAR_8, VAR_2, 1, 0, VAR_11);
    if (VAR_11 == 1) {
        FUNC_1(VAR_9 == 9);
    } else {
        FUNC_1(VAR_9 == 1);
    }

    VAR_3->require_dhe_on_psk = 0;
    VAR_4->ticket_lifetime = 0;
    VAR_4->max_early_data_size = 0;
    VAR_4->encrypt_ticket = ((void*)0);
    VAR_3->save_ticket = ((void*)0);
    VAR_3->key_exchanges = VAR_13;
}
