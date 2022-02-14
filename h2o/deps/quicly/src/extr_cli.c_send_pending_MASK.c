
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* free_packet ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ quicly_packet_allocator_t ;
typedef int quicly_datagram_t ;
typedef int quicly_conn_t ;
typedef int packets ;
struct TYPE_5__ {TYPE_1__* packet_allocator; } ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,size_t*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(int VAR_0, quicly_conn_t *VAR_1)
{
    quicly_datagram_t *VAR_2[16];
    size_t VAR_3, VAR_4;
    int VAR_5;

    do {
        VAR_3 = sizeof(VAR_2) / sizeof(VAR_2[0]);
        if ((VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_3)) == 0) {
            for (VAR_4 = 0; VAR_4 != VAR_3; ++VAR_4) {
                if ((VAR_5 = FUNC_3(VAR_0, VAR_2[VAR_4])) == -1)
                    FUNC_0("sendmsg failed");
                VAR_5 = 0;
                quicly_packet_allocator_t *VAR_6 = FUNC_1(VAR_1)->packet_allocator;
                VAR_6->free_packet(VAR_6, VAR_2[VAR_4]);
            }
        }
    } while (VAR_5 == 0 && VAR_3 == sizeof(VAR_2) / sizeof(VAR_2[0]));

    return VAR_5;
}
