
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sendstate; } ;
typedef TYPE_1__ quicly_stream_t ;
typedef int quicly_conn_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 size_t FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_2)
{
    quicly_stream_t *VAR_3;
    char VAR_4[4096];
    size_t VAR_5;

    if ((VAR_3 = FUNC_0(VAR_2, 0)) == ((void*)0) || !FUNC_1(&VAR_3->sendstate))
        return 0;

    while ((VAR_5 = FUNC_4(0, VAR_4, sizeof(VAR_4))) == -1 && VAR_1 == VAR_0)
        ;
    if (VAR_5 == 0) {

        FUNC_2(VAR_3);
        return 0;
    } else {

        FUNC_3(VAR_3, VAR_4, VAR_5);
        return 1;
    }
}
