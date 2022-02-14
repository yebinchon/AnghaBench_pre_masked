
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ingress; int egress; } ;
typedef TYPE_1__ quicly_streambuf_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(quicly_stream_t *VAR_0, int VAR_1)
{
    quicly_streambuf_t *VAR_2 = VAR_0->data;

    FUNC_2(&VAR_2->egress);
    FUNC_1(&VAR_2->ingress);
    FUNC_0(VAR_2);
    VAR_0->data = ((void*)0);
}
