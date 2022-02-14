
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
typedef int quicly_conn_t ;
typedef int datagrams ;
struct TYPE_2__ {int sa; } ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int **,size_t) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int **,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int **,size_t*) ;

size_t FUNC_5(quicly_conn_t *VAR_2, quicly_conn_t *VAR_3)
{
    quicly_datagram_t *VAR_4[32];
    size_t VAR_5, VAR_6;
    quicly_decoded_packet_t VAR_7[32];
    int VAR_8;

    VAR_5 = sizeof(VAR_4) / sizeof(VAR_4[0]);
    VAR_8 = FUNC_4(VAR_2, VAR_4, &VAR_5);
    FUNC_2(VAR_8 == 0);

    if (VAR_5 != 0) {
        size_t VAR_9 = FUNC_0(VAR_7, VAR_4, VAR_5);
        for (VAR_6 = 0; VAR_6 != VAR_9; ++VAR_6) {
            VAR_8 = FUNC_3(VAR_3, ((void*)0), &VAR_1.sa, VAR_7 + VAR_6);
            FUNC_2(VAR_8 == 0 || VAR_8 == VAR_0);
        }
        FUNC_1(VAR_4, VAR_5);
    }

    return VAR_5;
}
