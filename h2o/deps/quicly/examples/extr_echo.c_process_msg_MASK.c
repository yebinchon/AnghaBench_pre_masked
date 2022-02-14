
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {int msg_name; TYPE_1__* msg_iov; } ;
typedef int quicly_decoded_packet_t ;
typedef int quicly_conn_t ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,int *,int *,int ,int *,int *,int *,int *) ;
 size_t FUNC_1 (int *,int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;

__attribute__((used)) static void FUNC_4(int VAR_3, quicly_conn_t **VAR_4, struct msghdr *VAR_5, size_t VAR_6)
{
    size_t VAR_7, VAR_8, VAR_9;


    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_8) {
        quicly_decoded_packet_t VAR_10;
        if ((VAR_8 = FUNC_1(&VAR_1, &VAR_10, VAR_5->msg_iov[0].iov_base + VAR_7, VAR_6 - VAR_7)) == VAR_0)
            return;

        for (VAR_9 = 0; VAR_4[VAR_9] != ((void*)0); ++VAR_9)
            if (FUNC_2(VAR_4[VAR_9], ((void*)0), VAR_5->msg_name, &VAR_10))
                break;
        if (VAR_4[VAR_9] != ((void*)0)) {

            FUNC_3(VAR_4[VAR_9], ((void*)0), VAR_5->msg_name, &VAR_10);
        } else if (!VAR_3) {

            FUNC_0(VAR_4 + VAR_9, &VAR_1, ((void*)0), VAR_5->msg_name, &VAR_10, ((void*)0), &VAR_2, ((void*)0));
        }
    }
}
