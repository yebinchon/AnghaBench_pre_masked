
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http1client_t {TYPE_1__* sock; scalar_t__ bytes_to_consume; } ;
struct TYPE_4__ {int input; } ;
typedef TYPE_1__ h2o_socket_t ;
typedef int h2o_httpclient_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static h2o_socket_t *FUNC_2(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http1client_t *VAR_1 = (void *)VAR_0;
    h2o_socket_t *VAR_2 = VAR_1->sock;
    FUNC_1(VAR_2);
    FUNC_0(&VAR_2->input, VAR_1->bytes_to_consume);
    VAR_1->bytes_to_consume = 0;
    VAR_1->sock = ((void*)0);
    return VAR_2;
}
