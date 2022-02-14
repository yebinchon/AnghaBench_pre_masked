
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct loss_cond_t {int (* cb ) (struct loss_cond_t*) ;} ;
typedef void* quicly_loss_conf_t ;
typedef int quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
struct TYPE_6__ {int sa; } ;
struct TYPE_5__ {void* loss; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int **,int) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (struct loss_cond_t*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *,TYPE_1__*,int *,int *,int *,int *,int ,int *) ;
 int FUNC_7 (int *,TYPE_1__*,char*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int **,size_t*) ;
 int VAR_7 ;
 int FUNC_11 (struct loss_cond_t*) ;
 int FUNC_12 (int ,int ,size_t*,size_t*,struct loss_cond_t*,int ) ;

__attribute__((used)) static void FUNC_13(void)
{
    quicly_loss_conf_t VAR_8 = VAR_1;
    struct loss_cond_t VAR_9, VAR_10;
    size_t VAR_11, VAR_12;
    int VAR_13;

    VAR_5.loss = VAR_8;
    FUNC_2(&VAR_9);
    FUNC_2(&VAR_10);

    VAR_6 = 0;

    {
        quicly_datagram_t *VAR_14;
        size_t VAR_15;
        quicly_decoded_packet_t VAR_16;

        VAR_13 = FUNC_7(&VAR_3, &VAR_5, "example.com", &VAR_4.sa, ((void*)0), FUNC_3(), FUNC_5(((void*)0), 0),
                             ((void*)0), ((void*)0));
        FUNC_4(VAR_13 == 0);
        VAR_15 = 1;
        VAR_13 = FUNC_10(VAR_3, &VAR_14, &VAR_15);
        FUNC_4(VAR_13 == 0);
        FUNC_4(VAR_15 == 1);
        FUNC_0(&VAR_16, &VAR_14, 1);
        FUNC_4(VAR_15 == 1);
        VAR_13 = FUNC_6(&VAR_7, &VAR_5, ((void*)0), &VAR_4.sa, &VAR_16, ((void*)0), FUNC_3(), ((void*)0));
        FUNC_4(VAR_13 == 0);
        FUNC_1(&VAR_14, 1);
        VAR_10.cb(&VAR_10);
    }


    VAR_13 = FUNC_12(VAR_7, VAR_3, &VAR_11, &VAR_12, &VAR_9, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 2);
    FUNC_4(VAR_12 == 1);
    FUNC_4(FUNC_9(VAR_3) == VAR_2);
    FUNC_4(!FUNC_8(VAR_3));

    VAR_6 += VAR_0;


    VAR_13 = FUNC_12(VAR_3, VAR_7, &VAR_11, &VAR_12, &VAR_10, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 0);

    FUNC_4(FUNC_9(VAR_3) == VAR_2);
    FUNC_4(!FUNC_8(VAR_3));

    VAR_6 += 1000;


    VAR_13 = FUNC_12(VAR_7, VAR_3, &VAR_11, &VAR_12, &VAR_9, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 1);
    FUNC_4(FUNC_9(VAR_3) == VAR_2);
    FUNC_4(!FUNC_8(VAR_3));

    VAR_6 += VAR_0;


    VAR_13 = FUNC_12(VAR_3, VAR_7, &VAR_11, &VAR_12, &VAR_10, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 1);

    VAR_6 += 1000;


    VAR_13 = FUNC_12(VAR_7, VAR_3, &VAR_11, &VAR_12, &VAR_9, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 0);

    FUNC_4(FUNC_9(VAR_3) == VAR_2);
    FUNC_4(!FUNC_8(VAR_3));


    VAR_13 = FUNC_12(VAR_3, VAR_7, &VAR_11, &VAR_12, &VAR_10, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 0);

    VAR_6 += 1000;


    VAR_13 = FUNC_12(VAR_7, VAR_3, &VAR_11, &VAR_12, &VAR_9, 0);
    FUNC_4(VAR_13 == 0);
    FUNC_4(VAR_11 == 1);
    FUNC_4(VAR_12 == 1);

    FUNC_4(FUNC_9(VAR_3) == VAR_2);
    FUNC_4(FUNC_8(VAR_3));

    VAR_5.loss = (quicly_loss_conf_t)VAR_1;
}
