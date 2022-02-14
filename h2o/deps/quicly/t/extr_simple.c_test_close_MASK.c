
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ quicly_closed_by_peer_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int sa; } ;
struct TYPE_5__ {TYPE_1__* closed_by_peer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int FUNC_2 (int *,int **,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (int) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int **,size_t*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(void)
{
    quicly_closed_by_peer_t VAR_10 = {VAR_9}, *VAR_11 = VAR_5.closed_by_peer;
    quicly_datagram_t *VAR_12;
    size_t VAR_13;
    int64_t VAR_14, VAR_15;
    int VAR_16;

    VAR_5.closed_by_peer = &VAR_10;


    VAR_16 = FUNC_4(VAR_3, FUNC_0(12345), "good bye");
    FUNC_3(VAR_16 == 0);
    FUNC_3(FUNC_7(VAR_3) == VAR_1);
    FUNC_3(FUNC_6(VAR_3) <= VAR_6);
    VAR_13 = 1;
    VAR_16 = FUNC_9(VAR_3, &VAR_12, &VAR_13);
    FUNC_1(VAR_13 == 1);
    VAR_14 = FUNC_6(VAR_3);
    FUNC_3(VAR_6 < VAR_14 && VAR_14 < VAR_6 + 1000);

    {
        quicly_decoded_packet_t VAR_17;
        FUNC_2(&VAR_17, &VAR_12, 1);
        VAR_16 = FUNC_8(VAR_7, ((void*)0), &VAR_4.sa, &VAR_17);
        FUNC_3(VAR_16 == 0);
        FUNC_3(VAR_8 == 12345);
        FUNC_3(FUNC_7(VAR_7) == VAR_2);
        VAR_15 = FUNC_6(VAR_7);
        FUNC_3(VAR_6 < VAR_15 && VAR_15 < VAR_6 + 1000);
    }


    VAR_13 = 1;
    VAR_16 = FUNC_9(VAR_7, &VAR_12, &VAR_13);
    FUNC_3(VAR_16 == 0);
    FUNC_3(VAR_13 == 0);


    VAR_6 = VAR_14 < VAR_15 ? VAR_15 : VAR_14;
    VAR_13 = 1;
    VAR_16 = FUNC_9(VAR_3, &VAR_12, &VAR_13);
    FUNC_3(VAR_16 == VAR_0);
    FUNC_5(VAR_3);
    VAR_13 = 1;
    VAR_16 = FUNC_9(VAR_7, &VAR_12, &VAR_13);
    FUNC_3(VAR_16 == VAR_0);
    FUNC_5(VAR_7);

    VAR_3 = ((void*)0);
    VAR_7 = ((void*)0);
    VAR_5.closed_by_peer = VAR_11;
}
