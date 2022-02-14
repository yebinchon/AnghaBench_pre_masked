
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct rp_ws_upgrade_info_t {int ctx; int timeout; int * upstream_sock; } ;
struct rp_generator_t {TYPE_3__* client; TYPE_2__* src_req; } ;
typedef int h2o_socket_t ;
struct TYPE_6__ {TYPE_1__* conn; } ;
typedef TYPE_2__ h2o_req_t ;
struct TYPE_7__ {int * (* steal_socket ) (TYPE_3__*) ;} ;
struct TYPE_5__ {int ctx; } ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ,struct rp_ws_upgrade_info_t*) ;
 struct rp_ws_upgrade_info_t* FUNC_1 (int) ;
 int VAR_0 ;
 int * FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_3(struct rp_generator_t *VAR_1, uint64_t VAR_2)
{
    h2o_req_t *VAR_3 = VAR_1->src_req;
    h2o_socket_t *VAR_4 = VAR_1->client->steal_socket(VAR_1->client);
    struct rp_ws_upgrade_info_t *VAR_5 = FUNC_1(sizeof(*VAR_5));
    VAR_5->upstream_sock = VAR_4;
    VAR_5->timeout = VAR_2;
    VAR_5->ctx = VAR_3->conn->ctx;
    FUNC_0(VAR_3, ((void*)0), 0, VAR_0, VAR_5);
}
