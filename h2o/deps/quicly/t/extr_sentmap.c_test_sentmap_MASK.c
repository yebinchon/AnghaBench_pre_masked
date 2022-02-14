
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int quicly_sentmap_t ;
typedef int quicly_sentmap_iter_t ;
struct TYPE_3__ {int packet_number; int sent_at; scalar_t__ ack_epoch; int bytes_in_flight; } ;
typedef TYPE_1__ quicly_sent_packet_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ,int *) ;

void FUNC_12(void)
{
    quicly_sentmap_t VAR_5;
    uint64_t VAR_6;
    size_t VAR_7;
    quicly_sentmap_iter_t VAR_8;
    const quicly_sent_packet_t *VAR_9;

    FUNC_7(&VAR_5);


    for (VAR_6 = 0; VAR_6 < 10; ++VAR_6) {
        for (VAR_7 = 1; VAR_7 <= 5; ++VAR_7) {
            FUNC_9(&VAR_5, VAR_6 * 5 + VAR_7, VAR_6, 0);
            FUNC_3(&VAR_5, VAR_2);
            FUNC_3(&VAR_5, VAR_2);
            FUNC_4(&VAR_5, 1);
        }
    }


    FUNC_8(&VAR_5, &VAR_8);
    for (VAR_6 = 0; VAR_6 < 10; ++VAR_6) {
        for (VAR_7 = 1; VAR_7 <= 5; ++VAR_7) {
            const quicly_sent_packet_t *VAR_10 = FUNC_6(&VAR_8);
            FUNC_2(VAR_10->packet_number == VAR_6 * 5 + VAR_7);
            FUNC_2(VAR_10->sent_at == VAR_6);
            FUNC_2(VAR_10->ack_epoch == 0);
            FUNC_2(VAR_10->bytes_in_flight == 1);
            FUNC_10(&VAR_8);
        }
    }
    FUNC_2(FUNC_6(&VAR_8)->packet_number == VAR_1);
    FUNC_2(FUNC_1(&VAR_5) == 150 / 16 + 1);


    FUNC_8(&VAR_5, &VAR_8);
    while (FUNC_6(&VAR_8)->packet_number <= 10)
        FUNC_10(&VAR_8);
    FUNC_0(FUNC_6(&VAR_8)->packet_number == 11);
    while (FUNC_6(&VAR_8)->packet_number <= 40)
        FUNC_11(&VAR_5, &VAR_8, VAR_0, ((void*)0));
    FUNC_2(VAR_4 == 30 * 4);
    FUNC_2(VAR_3 == 0);

    size_t VAR_11 = 0;
    for (FUNC_8(&VAR_5, &VAR_8); (VAR_9 = FUNC_6(&VAR_8))->packet_number != VAR_1;
         FUNC_10(&VAR_8)) {
        FUNC_2(VAR_9->bytes_in_flight != 0);
        FUNC_2(VAR_9->packet_number <= 10 || 40 < VAR_9->packet_number);
        ++VAR_11;
    }
    FUNC_2(VAR_11 == 20);
    FUNC_2(FUNC_1(&VAR_5) == 30 / 16 + 1 + 1 + 30 / 16 + 1);

    FUNC_5(&VAR_5);
}
