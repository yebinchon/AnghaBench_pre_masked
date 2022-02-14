
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_h2o_tunnel_t {int timeout_entry; int timeout; TYPE_1__* ctx; } ;
struct TYPE_2__ {int loop; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct st_h2o_tunnel_t *VAR_0)
{
    FUNC_1(&VAR_0->timeout_entry);
    FUNC_0(VAR_0->ctx->loop, VAR_0->timeout, &VAR_0->timeout_entry);
}
