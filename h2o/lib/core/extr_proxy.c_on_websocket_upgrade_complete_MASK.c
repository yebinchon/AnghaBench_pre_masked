
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rp_ws_upgrade_info_t {int upstream_sock; int timeout; int ctx; } ;
struct TYPE_4__ {int input; } ;
typedef TYPE_1__ h2o_socket_t ;


 int FUNC_0 (struct rp_ws_upgrade_info_t*) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, h2o_socket_t *VAR_1, size_t VAR_2)
{
    struct rp_ws_upgrade_info_t *VAR_3 = VAR_0;

    if (VAR_1 != ((void*)0)) {
        FUNC_1(&VAR_1->input, VAR_2);
        FUNC_3(VAR_3->ctx, VAR_1, VAR_3->upstream_sock, VAR_3->timeout);
    } else {
        FUNC_2(VAR_3->upstream_sock);
    }
    FUNC_0(VAR_3);
}
