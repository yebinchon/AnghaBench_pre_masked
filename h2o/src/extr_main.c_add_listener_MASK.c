
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct listener_config_t {int fd; int proxy_protocol; int quic; int ssl; int ** hosts; int addrlen; int addr; } ;
typedef int socklen_t ;
struct TYPE_2__ {int num_listeners; struct listener_config_t** listeners; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (int) ;
 struct listener_config_t** FUNC_1 (struct listener_config_t**,int) ;
 int FUNC_2 (int *,struct sockaddr*,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static struct listener_config_t *FUNC_4(int VAR_1, struct sockaddr *VAR_2, socklen_t VAR_3, int VAR_4, int VAR_5)
{
    struct listener_config_t *VAR_6 = FUNC_0(sizeof(*VAR_6));

    FUNC_2(&VAR_6->addr, VAR_2, VAR_3);
    VAR_6->fd = VAR_1;
    VAR_6->addrlen = VAR_3;
    if (VAR_4) {
        VAR_6->hosts = ((void*)0);
    } else {
        VAR_6->hosts = FUNC_0(sizeof(VAR_6->hosts[0]));
        VAR_6->hosts[0] = ((void*)0);
    }
    FUNC_3(&VAR_6->ssl, 0, sizeof(VAR_6->ssl));
    VAR_6->proxy_protocol = VAR_5;
    FUNC_3(&VAR_6->quic, 0, sizeof(VAR_6->quic));

    VAR_0.listeners = FUNC_1(VAR_0.listeners, sizeof(*VAR_0.listeners) * (VAR_0.num_listeners + 1));
    VAR_0.listeners[VAR_0.num_listeners++] = VAR_6;

    return VAR_6;
}
