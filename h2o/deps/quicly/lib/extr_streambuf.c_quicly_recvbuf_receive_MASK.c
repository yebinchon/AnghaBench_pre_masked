
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int quicly_stream_t ;
struct TYPE_4__ {size_t off; scalar_t__ base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

int FUNC_2(quicly_stream_t *VAR_0, ptls_buffer_t *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4)
{
    if (VAR_4 != 0) {
        int VAR_5;
        if ((VAR_5 = FUNC_1(VAR_1, VAR_2 + VAR_4 - VAR_1->off)) != 0)
            return VAR_5;
        FUNC_0(VAR_1->base + VAR_2, VAR_3, VAR_4);
        if (VAR_1->off < VAR_2 + VAR_4)
            VAR_1->off = VAR_2 + VAR_4;
    }
    return 0;
}
