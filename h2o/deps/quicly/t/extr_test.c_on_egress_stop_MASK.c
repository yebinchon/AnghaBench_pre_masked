
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stop_sending; } ;
struct TYPE_6__ {TYPE_1__ error_received; } ;
typedef TYPE_2__ test_streambuf_t ;
struct TYPE_7__ {TYPE_2__* data; } ;
typedef TYPE_3__ quicly_stream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(quicly_stream_t *VAR_0, int VAR_1)
{
    FUNC_1(FUNC_0(VAR_1));
    test_streambuf_t *VAR_2 = VAR_0->data;
    VAR_2->error_received.stop_sending = VAR_1;
    return 0;
}
