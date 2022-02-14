
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct st_h2o_accept_data_t {int connected_at; TYPE_6__* ctx; } ;
struct sockaddr_storage {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
struct TYPE_10__ {struct st_h2o_accept_data_t* data; TYPE_8__* input; } ;
typedef TYPE_1__ h2o_socket_t ;
struct TYPE_13__ {int (* destroy ) (struct st_h2o_accept_data_t*) ;} ;
struct TYPE_12__ {int size; int bytes; } ;
struct TYPE_11__ {int * ssl_ctx; } ;


 TYPE_9__ VAR_0 ;
 int FUNC_0 (TYPE_8__**,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,void*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,void*,int *) ;
 int FUNC_7 (struct st_h2o_accept_data_t*) ;
 int FUNC_8 (struct st_h2o_accept_data_t*) ;

__attribute__((used)) static void FUNC_9(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_accept_data_t *VAR_4 = VAR_2->data;

    if (VAR_3 != ((void*)0)) {
        VAR_0.destroy(VAR_4);
        FUNC_3(VAR_2);
        return;
    }

    struct sockaddr_storage VAR_5;
    socklen_t VAR_6;
    ssize_t VAR_7 = FUNC_6(VAR_2->input->bytes, VAR_2->input->size, (void *)&VAR_5, &VAR_6);
    switch (VAR_7) {
    case -1:
        break;
    case -2:
        return;
    default:
        FUNC_0(&VAR_2->input, VAR_7);
        if (VAR_6 != 0)
            FUNC_4(VAR_2, (void *)&VAR_5, VAR_6);
        break;
    }

    if (VAR_4->ctx->ssl_ctx != ((void*)0)) {
        FUNC_5(VAR_2, VAR_4->ctx->ssl_ctx, ((void*)0), FUNC_2(((void*)0), 0), VAR_1);
    } else {
        struct st_h2o_accept_data_t *VAR_8 = VAR_2->data;
        VAR_2->data = ((void*)0);
        FUNC_1(VAR_8->ctx, VAR_2, VAR_8->connected_at);
        VAR_0.destroy(VAR_8);
    }
}
