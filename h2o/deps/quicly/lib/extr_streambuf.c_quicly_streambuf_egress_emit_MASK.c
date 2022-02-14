
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int egress; } ;
typedef TYPE_1__ quicly_streambuf_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ quicly_stream_t ;


 int FUNC_0 (TYPE_2__*,int *,size_t,void*,size_t*,int*) ;

int FUNC_1(quicly_stream_t *VAR_0, size_t VAR_1, void *VAR_2, size_t *VAR_3, int *VAR_4)
{
    quicly_streambuf_t *VAR_5 = VAR_0->data;
    return FUNC_0(VAR_0, &VAR_5->egress, VAR_1, VAR_2, VAR_3, VAR_4);
}
