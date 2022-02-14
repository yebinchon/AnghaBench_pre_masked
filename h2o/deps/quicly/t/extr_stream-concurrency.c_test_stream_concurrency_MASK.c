
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ reset_stream; scalar_t__ stop_sending; } ;
struct TYPE_18__ {int is_detached; TYPE_2__ error_received; } ;
typedef TYPE_3__ test_streambuf_t ;
struct TYPE_19__ {int streams_blocked; TYPE_3__* data; int stream_id; } ;
typedef TYPE_4__ quicly_stream_t ;
typedef int quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
typedef int quicly_conn_t ;
struct TYPE_16__ {size_t max_streams_bidi; } ;
struct TYPE_15__ {int sa; } ;
struct TYPE_14__ {TYPE_1__ transport_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int **,int) ;
 TYPE_13__ VAR_1 ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 TYPE_10__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int **,TYPE_10__*,int *,int *,int *,int *,int ,int *) ;
 int FUNC_8 (int **,TYPE_10__*,char*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 TYPE_4__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,TYPE_4__**,int ) ;
 int FUNC_12 (TYPE_4__*,scalar_t__) ;
 int FUNC_13 (TYPE_4__*,scalar_t__) ;
 int FUNC_14 (int *,int **,size_t*) ;
 int FUNC_15 (TYPE_4__*,char*,int) ;
 int FUNC_16 (int *,int *) ;

void FUNC_17(void)
{
    quicly_conn_t *VAR_4, *VAR_5;
    size_t VAR_6 = VAR_2.transport_params.max_streams_bidi;
    quicly_stream_t *VAR_7[VAR_6 + 2], *VAR_8;
    test_streambuf_t *VAR_9[VAR_6 + 1], *VAR_10;
    size_t VAR_11;
    int VAR_12;

    {
        quicly_datagram_t *VAR_13;
        size_t VAR_14;
        quicly_decoded_packet_t VAR_15;

        VAR_12 = FUNC_8(&VAR_4, &VAR_2, "example.com", &VAR_1.sa, ((void*)0), FUNC_4(), FUNC_6(((void*)0), 0),
                             ((void*)0), ((void*)0));
        FUNC_5(VAR_12 == 0);
        VAR_14 = 1;
        VAR_12 = FUNC_14(VAR_4, &VAR_13, &VAR_14);
        FUNC_5(VAR_12 == 0);
        FUNC_5(VAR_14 == 1);
        FUNC_5(FUNC_2(&VAR_15, &VAR_13, 1) == 1);
        FUNC_5(VAR_14 == 1);
        VAR_12 = FUNC_7(&VAR_5, &VAR_2, ((void*)0), &VAR_1.sa, &VAR_15, ((void*)0), FUNC_4(), ((void*)0));
        FUNC_5(VAR_12 == 0);
        FUNC_3(&VAR_13, 1);
        FUNC_16(VAR_5, VAR_4);
    }


    for (VAR_11 = 0; VAR_11 < VAR_6 + 1; ++VAR_11) {
        VAR_12 = FUNC_11(VAR_4, VAR_7 + VAR_11, 0);
        FUNC_1(VAR_12 == 0);
        VAR_9[VAR_11] = VAR_7[VAR_11]->data;
        if (VAR_7[VAR_11]->streams_blocked)
            break;
        VAR_12 = FUNC_15(VAR_7[VAR_11], "hello", 5);
        FUNC_1(VAR_12 == 0);
    }
    FUNC_5(VAR_11 == VAR_6);

    FUNC_16(VAR_4, VAR_5);
    FUNC_16(VAR_5, VAR_4);


    FUNC_5(VAR_7[VAR_11]->streams_blocked);


    VAR_8 = FUNC_10(VAR_5, VAR_7[VAR_11 - 1]->stream_id);
    FUNC_5(VAR_8 != ((void*)0));
    VAR_10 = VAR_8->data;
    FUNC_13(VAR_7[VAR_11 - 1], FUNC_0(123));
    FUNC_12(VAR_7[VAR_11 - 1], FUNC_0(456));
    FUNC_16(VAR_4, VAR_5);
    FUNC_16(VAR_5, VAR_4);
    FUNC_5(VAR_10->error_received.reset_stream == FUNC_0(123));
    FUNC_5(VAR_10->error_received.stop_sending == FUNC_0(456));
    FUNC_5(!VAR_10->is_detached);
    FUNC_5(VAR_9[VAR_11 - 1]->error_received.reset_stream == FUNC_0(456));
    FUNC_5(VAR_9[VAR_11 - 1]->is_detached);


    FUNC_5(VAR_7[VAR_11]->streams_blocked);

    VAR_3 += VAR_0;
    FUNC_16(VAR_4, VAR_5);
    FUNC_16(VAR_5, VAR_4);


    FUNC_5(VAR_10->is_detached);
    FUNC_5(!VAR_7[VAR_11]->streams_blocked);
    ++VAR_11;


    VAR_12 = FUNC_11(VAR_4, VAR_7 + VAR_11, 0);
    FUNC_5(VAR_12 == 0);
    FUNC_5(VAR_7[VAR_11]->streams_blocked);

    FUNC_9(VAR_4);
    FUNC_9(VAR_5);
}
