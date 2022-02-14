
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int super; } ;
struct TYPE_7__ {TYPE_1__ ctx; } ;
struct listener_ctx_t {TYPE_2__ http3; } ;
struct TYPE_8__ {struct listener_ctx_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;


 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct listener_ctx_t *VAR_3 = VAR_1->data;
    FUNC_0(&VAR_3->http3.ctx.super, VAR_1, VAR_0);
}
