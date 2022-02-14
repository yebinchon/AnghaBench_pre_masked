
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int quicly_decoded_packet_t ;
struct TYPE_7__ {int len; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_2__ quicly_datagram_t ;
typedef int packets ;
struct TYPE_9__ {int sa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,TYPE_2__**,size_t) ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (TYPE_2__**,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *,int ,int *) ;
 int FUNC_6 (int *,int *,char*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int *,int *) ;
 int FUNC_10 (int ,TYPE_2__**,size_t*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(void)
{
    quicly_datagram_t *VAR_5[32];
    size_t VAR_6, VAR_7;
    quicly_decoded_packet_t VAR_8[32];
    int VAR_9, VAR_10;


    VAR_9 = FUNC_6(&VAR_1, &VAR_3, "example.com", &VAR_2.sa, ((void*)0), FUNC_2(), FUNC_4(((void*)0), 0), ((void*)0),
                         ((void*)0));
    FUNC_3(VAR_9 == 0);
    VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]);
    VAR_9 = FUNC_10(VAR_1, VAR_5, &VAR_6);
    FUNC_3(VAR_9 == 0);
    FUNC_3(VAR_6 == 1);
    FUNC_3(VAR_5[0]->data.len == 1280);


    VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_6);
    FUNC_3(VAR_7 == 1);
    VAR_9 = FUNC_5(&VAR_4, &VAR_3, ((void*)0), &VAR_2.sa, VAR_8, ((void*)0), FUNC_2(), ((void*)0));
    FUNC_3(VAR_9 == 0);
    FUNC_1(VAR_5, VAR_6);
    FUNC_3(FUNC_8(VAR_4) == VAR_0);
    FUNC_3(FUNC_7(VAR_4));
    VAR_6 = sizeof(VAR_5) / sizeof(VAR_5[0]);
    VAR_9 = FUNC_10(VAR_4, VAR_5, &VAR_6);
    FUNC_3(VAR_9 == 0);
    FUNC_3(VAR_6 != 0);


    VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_6);
    for (VAR_10 = 0; VAR_10 != VAR_7; ++VAR_10) {
        VAR_9 = FUNC_9(VAR_1, ((void*)0), &VAR_2.sa, VAR_8 + VAR_10);
        FUNC_3(VAR_9 == 0);
    }
    FUNC_1(VAR_5, VAR_6);
    FUNC_3(FUNC_8(VAR_1) == VAR_0);
    FUNC_3(FUNC_7(VAR_1));
}
