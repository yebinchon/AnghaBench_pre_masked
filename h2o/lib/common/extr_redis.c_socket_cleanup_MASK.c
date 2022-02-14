
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_redis_socket_data_t {TYPE_2__* context; int socket; } ;
struct TYPE_3__ {int fd; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 int FUNC_0 (struct st_redis_socket_data_t*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct st_redis_socket_data_t *VAR_1 = (struct st_redis_socket_data_t *)VAR_0;
    FUNC_1(VAR_1->socket);
    VAR_1->context->c.fd = -1;
    FUNC_0(VAR_1);
}
