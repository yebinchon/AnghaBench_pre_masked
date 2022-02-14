
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_7__ {TYPE_1__* _peername; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_6__ {int len; int addr; } ;


 int FUNC_0 (TYPE_2__*,struct sockaddr*) ;
 int FUNC_1 (TYPE_2__*,struct sockaddr*,int ) ;
 int FUNC_2 (struct sockaddr*,int *,int ) ;

socklen_t FUNC_3(h2o_socket_t *VAR_0, struct sockaddr *VAR_1)
{

    if (VAR_0->_peername != ((void*)0)) {
        FUNC_2(VAR_1, &VAR_0->_peername->addr, VAR_0->_peername->len);
        return VAR_0->_peername->len;
    }

    socklen_t VAR_2 = FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, VAR_1, VAR_2);
    return VAR_2;
}
