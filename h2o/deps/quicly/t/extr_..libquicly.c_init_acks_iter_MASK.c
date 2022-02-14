
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int quicly_sentmap_iter_t ;
struct TYPE_9__ {scalar_t__ sent_at; scalar_t__ bytes_in_flight; } ;
typedef TYPE_2__ quicly_sent_packet_t ;
struct TYPE_8__ {int sentmap; } ;
struct TYPE_10__ {TYPE_1__ egress; } ;
typedef TYPE_3__ quicly_conn_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(quicly_conn_t *VAR_2, quicly_sentmap_iter_t *VAR_3)
{

    int64_t VAR_4 = VAR_1 - FUNC_0(VAR_2);
    const quicly_sent_packet_t *VAR_5;

    FUNC_2(&VAR_2->egress.sentmap, VAR_3);

    while ((VAR_5 = FUNC_1(VAR_3))->sent_at <= VAR_4 && VAR_5->bytes_in_flight == 0)
        FUNC_3(&VAR_2->egress.sentmap, VAR_3, VAR_0, VAR_2);
}
