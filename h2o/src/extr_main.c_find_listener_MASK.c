
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int * ctx; } ;
struct listener_config_t {scalar_t__ addrlen; TYPE_1__ quic; int addr; } ;
typedef scalar_t__ socklen_t ;
struct TYPE_4__ {size_t num_listeners; struct listener_config_t** listeners; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,struct sockaddr*,int) ;

__attribute__((used)) static struct listener_config_t *FUNC_1(struct sockaddr *VAR_1, socklen_t VAR_2, int VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 != VAR_0.num_listeners; ++VAR_4) {
        struct listener_config_t *VAR_5 = VAR_0.listeners[VAR_4];
        if (VAR_5->addrlen == VAR_2 && FUNC_0((void *)&VAR_5->addr, VAR_1, 1) == 0 &&
            (VAR_5->quic.ctx != ((void*)0)) == VAR_3)
            return VAR_5;
    }

    return ((void*)0);
}
