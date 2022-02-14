
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int quicly_stream_t ;
struct TYPE_3__ {size_t off; scalar_t__ base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_2 (int *,size_t) ;

void FUNC_3(quicly_stream_t *VAR_0, ptls_buffer_t *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_2 <= VAR_1->off);
    VAR_1->off -= VAR_2;
    FUNC_1(VAR_1->base, VAR_1->base + VAR_2, VAR_1->off);

    FUNC_2(VAR_0, VAR_2);
}
