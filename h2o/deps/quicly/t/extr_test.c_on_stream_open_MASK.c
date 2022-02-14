
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int stop_sending; int reset_stream; } ;
struct TYPE_7__ {TYPE_1__ error_received; } ;
typedef TYPE_2__ test_streambuf_t ;
struct TYPE_8__ {int * callbacks; TYPE_2__* data; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef int quicly_stream_open_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(quicly_stream_open_t *VAR_1, quicly_stream_t *VAR_2)
{
    test_streambuf_t *VAR_3;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_3));
    FUNC_0(VAR_4 == 0);
    VAR_3 = VAR_2->data;
    VAR_3->error_received.stop_sending = -1;
    VAR_3->error_received.reset_stream = -1;
    VAR_2->callbacks = &VAR_0;

    return 0;
}
