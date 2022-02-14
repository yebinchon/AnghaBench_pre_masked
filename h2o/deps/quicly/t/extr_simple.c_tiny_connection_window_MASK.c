
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int uint64_t ;
struct TYPE_18__ {scalar_t__ size; } ;
struct TYPE_19__ {TYPE_1__ vecs; } ;
struct TYPE_20__ {TYPE_2__ egress; int ingress; } ;
struct TYPE_22__ {TYPE_3__ super; } ;
typedef TYPE_5__ test_streambuf_t ;
struct TYPE_23__ {TYPE_5__* data; int stream_id; } ;
typedef TYPE_6__ quicly_stream_t ;
typedef int quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
struct TYPE_24__ {scalar_t__ (* cb ) (TYPE_7__*) ;} ;
struct TYPE_21__ {int max_data; } ;
struct TYPE_17__ {int sa; } ;
struct TYPE_16__ {TYPE_4__ transport_params; TYPE_7__* now; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int **,int) ;
 TYPE_15__ VAR_3 ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 TYPE_12__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,TYPE_12__*,int *,int *,int *,int *,int ,int *) ;
 int FUNC_7 (int *,TYPE_12__*,char*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_6__* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,TYPE_6__**,int ) ;
 int FUNC_13 (int ,int **,size_t*) ;
 int FUNC_14 (TYPE_6__*,char*,int ) ;
 int FUNC_15 (TYPE_6__*,int ) ;
 int VAR_6 ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static void FUNC_20(void)
{
    uint64_t VAR_7 = VAR_4.transport_params.max_data;
    quicly_stream_t *VAR_8, *VAR_9;
    test_streambuf_t *VAR_10, *VAR_11;
    size_t VAR_12;
    int VAR_13;
    char VAR_14[1025];

    VAR_4.transport_params.max_data = 1024;
    for (VAR_12 = 0; VAR_12 < 1024 / 16; ++VAR_12)
        FUNC_16(VAR_14 + VAR_12 * 16, "0123456789abcdef");
    VAR_14[1024] = '\0';

    {
        quicly_datagram_t *VAR_15;
        size_t VAR_16;
        quicly_decoded_packet_t VAR_17;

        VAR_13 = FUNC_7(&VAR_2, &VAR_4, "example.com", &VAR_3.sa, ((void*)0), FUNC_3(), FUNC_5(((void*)0), 0),
                             ((void*)0), ((void*)0));
        FUNC_4(VAR_13 == 0);
        VAR_16 = 1;
        VAR_13 = FUNC_13(VAR_2, &VAR_15, &VAR_16);
        FUNC_4(VAR_13 == 0);
        FUNC_4(VAR_16 == 1);
        FUNC_4(FUNC_9(VAR_2) > VAR_4.now->cb(VAR_4.now));
        FUNC_1(&VAR_17, &VAR_15, 1);
        FUNC_4(VAR_16 == 1);
        VAR_13 = FUNC_6(&VAR_6, &VAR_4, ((void*)0), &VAR_3.sa, &VAR_17, ((void*)0), FUNC_3(), ((void*)0));
        FUNC_4(VAR_13 == 0);
        FUNC_2(&VAR_15, 1);
    }

    FUNC_19(VAR_6, VAR_2);
    FUNC_4(FUNC_10(VAR_2) == VAR_1);
    FUNC_4(FUNC_8(VAR_2));

    VAR_13 = FUNC_12(VAR_2, &VAR_8, 0);
    FUNC_4(VAR_13 == 0);
    VAR_10 = VAR_8->data;
    for (VAR_12 = 0; VAR_12 < 16; ++VAR_12)
        FUNC_14(VAR_8, VAR_14, FUNC_17(VAR_14));

    FUNC_19(VAR_2, VAR_6);

    VAR_9 = FUNC_11(VAR_6, VAR_8->stream_id);
    FUNC_4(VAR_9 != ((void*)0));
    VAR_11 = VAR_9->data;
    FUNC_4(FUNC_0(&VAR_11->super.ingress, VAR_14));
    FUNC_15(VAR_9, FUNC_17(VAR_14));

    for (VAR_12 = 1; VAR_12 < 16; ++VAR_12) {
        FUNC_19(VAR_6, VAR_2);
        FUNC_19(VAR_2, VAR_6);
        FUNC_4(FUNC_0(&VAR_11->super.ingress, VAR_14));
        FUNC_15(VAR_9, FUNC_17(VAR_14));
    }

    VAR_5 += VAR_0;
    FUNC_19(VAR_6, VAR_2);

    FUNC_4(VAR_10->super.egress.vecs.size == 0);

    VAR_4.transport_params.max_data = VAR_7;
}
