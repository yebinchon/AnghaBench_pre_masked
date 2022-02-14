
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* ctx; } ;
struct st_h2o_memcached_resumption_accept_data_t {TYPE_3__ super; int get_req; } ;
struct TYPE_10__ {struct st_h2o_memcached_resumption_accept_data_t* data; } ;
typedef TYPE_4__ h2o_socket_t ;
typedef int h2o_iovec_t ;
struct TYPE_7__ {int ctx; } ;
struct TYPE_11__ {TYPE_1__ memcached; } ;
struct TYPE_8__ {int libmemcached_receiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,struct st_h2o_memcached_resumption_accept_data_t*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(h2o_socket_t *VAR_4, h2o_iovec_t VAR_5)
{
    struct st_h2o_memcached_resumption_accept_data_t *VAR_6 = VAR_4->data;

    VAR_6->get_req = FUNC_0(VAR_2.memcached.ctx, VAR_6->super.ctx->libmemcached_receiver, VAR_5,
                                      VAR_3, VAR_6, VAR_0 | VAR_1);
}
