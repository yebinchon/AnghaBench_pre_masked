
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ingress; } ;
struct TYPE_9__ {int reset_stream; } ;
struct TYPE_11__ {int is_detached; TYPE_2__ super; TYPE_1__ error_received; } ;
typedef TYPE_3__ test_streambuf_t ;
struct TYPE_12__ {scalar_t__ stream_id; int recvstate; TYPE_3__* data; } ;
typedef TYPE_4__ quicly_stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__**,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,char const*,int ) ;
 int VAR_3 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
    const char *VAR_4 = "GET / HTTP/1.0\r\n\r\n", *VAR_5 = "HTTP/1.0 200 OK\r\n\r\nhello world";
    quicly_stream_t *VAR_6, *VAR_7;
    test_streambuf_t *VAR_8, *VAR_9;
    int VAR_10;

    VAR_10 = FUNC_4(VAR_1, &VAR_6, 0);
    FUNC_1(VAR_10 == 0);
    FUNC_1(VAR_6->stream_id == 0);
    VAR_8 = VAR_6->data;

    FUNC_7(VAR_6, VAR_4, FUNC_8(VAR_4));
    FUNC_6(VAR_6);
    FUNC_1(FUNC_3(VAR_1) == 1);

    FUNC_9(VAR_1, VAR_3);

    VAR_7 = FUNC_2(VAR_3, VAR_6->stream_id);
    FUNC_1(VAR_7 != ((void*)0));
    VAR_9 = VAR_7->data;
    FUNC_1(FUNC_5(&VAR_7->recvstate));
    FUNC_1(VAR_9->error_received.reset_stream == -1);
    FUNC_1(FUNC_0(&VAR_9->super.ingress, VAR_4));
    FUNC_7(VAR_7, VAR_5, FUNC_8(VAR_5));
    FUNC_6(VAR_7);
    FUNC_1(FUNC_3(VAR_3) == 1);

    FUNC_9(VAR_3, VAR_1);

    FUNC_1(VAR_8->is_detached);
    FUNC_1(VAR_8->error_received.reset_stream == -1);
    FUNC_1(FUNC_0(&VAR_8->super.ingress, VAR_5));
    FUNC_1(FUNC_3(VAR_1) == 0);
    FUNC_1(!VAR_9->is_detached);

    VAR_2 += VAR_0;
    FUNC_9(VAR_1, VAR_3);

    FUNC_1(VAR_9->is_detached);
    FUNC_1(FUNC_3(VAR_3) == 0);
}
