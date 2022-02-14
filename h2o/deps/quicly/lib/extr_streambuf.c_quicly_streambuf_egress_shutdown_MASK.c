
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes_written; } ;
struct TYPE_7__ {TYPE_1__ egress; } ;
typedef TYPE_2__ quicly_streambuf_t ;
struct TYPE_8__ {int sendstate; TYPE_2__* data; } ;
typedef TYPE_3__ quicly_stream_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

int FUNC_2(quicly_stream_t *VAR_0)
{
    quicly_streambuf_t *VAR_1 = VAR_0->data;
    FUNC_0(&VAR_0->sendstate, VAR_1->egress.bytes_written);
    return FUNC_1(VAR_0, 1);
}
