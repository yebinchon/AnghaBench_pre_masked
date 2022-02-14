
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int read; } ;
struct TYPE_6__ {TYPE_1__ _cb; } ;
typedef TYPE_2__ h2o_socket_t ;
typedef int h2o_socket_cb ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(h2o_socket_t *VAR_0, h2o_socket_cb VAR_1)
{
    VAR_0->_cb.read = VAR_1;
    FUNC_0(VAR_0);
}
