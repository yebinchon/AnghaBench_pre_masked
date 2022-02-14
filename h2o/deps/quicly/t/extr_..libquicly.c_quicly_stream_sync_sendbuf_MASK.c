
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sendstate; } ;
typedef TYPE_1__ quicly_stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(quicly_stream_t *VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_1) {
        if ((VAR_2 = FUNC_0(&VAR_0->sendstate)) != 0)
            return VAR_2;
    }

    FUNC_1(VAR_0);
    return 0;
}
