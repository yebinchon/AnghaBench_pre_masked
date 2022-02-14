
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int initial; } ;
typedef TYPE_1__ quicly_conn_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_1)
{
    int VAR_2;

    if ((VAR_2 = FUNC_1(VAR_1, 1u << VAR_0)) != 0)
        return VAR_2;
    FUNC_0(VAR_1, VAR_0);
    FUNC_2(&VAR_1->initial);

    return 0;
}
