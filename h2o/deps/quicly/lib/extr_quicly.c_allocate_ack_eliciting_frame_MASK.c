
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int quicly_sent_t ;
typedef int quicly_sent_acked_cb ;
typedef int quicly_send_context_t ;
struct TYPE_5__ {int sentmap; } ;
struct TYPE_6__ {TYPE_1__ egress; } ;
typedef TYPE_2__ quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,size_t,int) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_1, quicly_send_context_t *VAR_2, size_t VAR_3, quicly_sent_t **VAR_4,
                                        quicly_sent_acked_cb VAR_5)
{
    int VAR_6;

    if ((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, 1)) != 0)
        return VAR_6;
    if ((*VAR_4 = FUNC_1(&VAR_1->egress.sentmap, VAR_5)) == ((void*)0))
        return VAR_0;


    return VAR_6;
}
