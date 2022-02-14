
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ingress; } ;
typedef TYPE_1__ quicly_streambuf_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int FUNC_0 (TYPE_2__*,int *,size_t,void const*,size_t) ;

int FUNC_1(quicly_stream_t *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3)
{
    quicly_streambuf_t *VAR_4 = VAR_0->data;
    return FUNC_0(VAR_0, &VAR_4->ingress, VAR_1, VAR_2, VAR_3);
}
