
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int _timeout; int * _connect_req; } ;
typedef TYPE_1__ h2o_httpclient_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(h2o_httpclient_t *VAR_0)
{
    if (VAR_0->_connect_req != ((void*)0)) {
        FUNC_1(VAR_0->_connect_req);
        VAR_0->_connect_req = ((void*)0);
    }

    if (FUNC_2(&VAR_0->_timeout))
        FUNC_3(&VAR_0->_timeout);

    FUNC_0(VAR_0);
}
