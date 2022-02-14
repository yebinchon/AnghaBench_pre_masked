
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cb ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ h2o_websocket_conn_t ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(h2o_websocket_conn_t *VAR_0)
{
    (*VAR_0->cb)(VAR_0, ((void*)0));
}
