
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int quicly_streambuf_t ;
struct TYPE_5__ {int * callbacks; } ;
typedef TYPE_1__ quicly_stream_t ;
typedef int quicly_stream_id_t ;
typedef int quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_2, size_t VAR_3)
{
    quicly_stream_t *VAR_4;
    int VAR_5;

    if ((VAR_4 = FUNC_1(VAR_2, -(quicly_stream_id_t)(1 + VAR_3), 65536, 65536)) == ((void*)0))
        return VAR_0;
    if ((VAR_5 = FUNC_2(VAR_4, sizeof(quicly_streambuf_t))) != 0) {
        FUNC_0(VAR_4, VAR_5);
        return VAR_5;
    }
    VAR_4->callbacks = &VAR_1;

    return 0;
}
