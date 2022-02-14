
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int quicly_stream_t ;
typedef int quicly_stream_id_t ;
typedef int quicly_conn_t ;
struct TYPE_3__ {scalar_t__ off; scalar_t__ base; } ;
typedef TYPE_1__ ptls_buffer_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_0, ptls_buffer_t *VAR_1, size_t VAR_2[5])
{
    size_t VAR_3;
    int VAR_4;

    if (VAR_1->off == 0)
        return 0;

    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
        size_t VAR_5 = VAR_2[VAR_3 + 1] - VAR_2[VAR_3];
        if (VAR_5 == 0)
            continue;
        quicly_stream_t *VAR_6 = FUNC_1(VAR_0, -(quicly_stream_id_t)(1 + VAR_3));
        FUNC_0(VAR_6 != ((void*)0));
        if ((VAR_4 = FUNC_2(VAR_6, VAR_1->base + VAR_2[VAR_3], VAR_5)) != 0)
            return VAR_4;
    }

    return 0;
}
