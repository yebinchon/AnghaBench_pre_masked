
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_detached; } ;
typedef TYPE_1__ test_streambuf_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int VAR_0 ;

void FUNC_0(quicly_stream_t *VAR_1, int VAR_2)
{
    test_streambuf_t *VAR_3 = VAR_1->data;
    VAR_3->is_detached = 1;
    ++VAR_0;
}
