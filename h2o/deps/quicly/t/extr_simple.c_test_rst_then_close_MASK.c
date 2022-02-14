
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ reset_stream; scalar_t__ stop_sending; } ;
struct TYPE_9__ {int is_detached; TYPE_1__ error_received; } ;
typedef TYPE_2__ test_streambuf_t ;
struct TYPE_10__ {int recvstate; int sendstate; TYPE_2__* data; int stream_id; } ;
typedef TYPE_3__ quicly_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
    quicly_stream_t *VAR_4, *VAR_5;
    test_streambuf_t *VAR_6, *VAR_7;
    uint64_t VAR_8;
    int VAR_9;


    VAR_9 = FUNC_4(VAR_1, &VAR_4, 0);
    FUNC_1(VAR_9 == 0);
    VAR_8 = VAR_4->stream_id;
    VAR_6 = VAR_4->data;
    FUNC_7(VAR_4, FUNC_0(12345));
    FUNC_6(VAR_4, FUNC_0(54321));

    FUNC_9(VAR_1, VAR_3);


    FUNC_1(FUNC_3(VAR_3) == 1);
    VAR_5 = FUNC_2(VAR_3, VAR_8);
    FUNC_1(VAR_5 != ((void*)0));
    VAR_7 = VAR_5->data;
    FUNC_1(FUNC_8(&VAR_5->sendstate));
    FUNC_1(FUNC_5(&VAR_5->recvstate));
    FUNC_1(VAR_7->error_received.reset_stream == FUNC_0(12345));
    FUNC_1(VAR_7->error_received.stop_sending == FUNC_0(54321));

    VAR_2 += VAR_0;
    FUNC_9(VAR_3, VAR_1);


    FUNC_1(VAR_6->is_detached);
    FUNC_1(VAR_6->error_received.stop_sending == -1);
    FUNC_1(VAR_6->error_received.reset_stream == FUNC_0(54321));
    FUNC_1(FUNC_3(VAR_1) == 0);

    VAR_2 += VAR_0;
    FUNC_9(VAR_1, VAR_3);

    FUNC_1(VAR_7->is_detached);
    FUNC_1(FUNC_3(VAR_3) == 0);
}
