
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * write; } ;
struct TYPE_6__ {TYPE_2__ _cb; } ;
struct TYPE_4__ {scalar_t__ cnt; } ;
struct st_h2o_evloop_socket_t {TYPE_3__ super; TYPE_1__ _wreq; } ;
typedef int h2o_socket_t ;
typedef int * h2o_socket_cb ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_evloop_socket_t*) ;

void FUNC_2(h2o_socket_t *VAR_0, h2o_socket_cb VAR_1)
{
    struct st_h2o_evloop_socket_t *VAR_2 = (struct st_h2o_evloop_socket_t *)VAR_0;
    FUNC_0(VAR_2->super._cb.write == ((void*)0));
    FUNC_0(VAR_2->_wreq.cnt == 0);

    VAR_2->super._cb.write = VAR_1;
    FUNC_1(VAR_2);
}
