
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inflight; } ;
struct TYPE_6__ {TYPE_1__ sending; } ;
struct st_fcgi_generator_t {TYPE_2__ resp; int timeout; int * sock; TYPE_4__* handler; } ;
struct TYPE_7__ {scalar_t__ keepalive_timeout; } ;
struct TYPE_8__ {int sockpool; TYPE_3__ config; } ;


 int FUNC_0 (struct st_fcgi_generator_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct st_fcgi_generator_t *VAR_0, int VAR_1)
{
    if (VAR_0->handler->config.keepalive_timeout != 0 && VAR_1)
        FUNC_2(&VAR_0->handler->sockpool, VAR_0->sock);
    else
        FUNC_1(VAR_0->sock);
    VAR_0->sock = ((void*)0);
    if (FUNC_3(&VAR_0->timeout))
        FUNC_4(&VAR_0->timeout);
    if (!VAR_0->resp.sending.inflight)
        FUNC_0(VAR_0);
}
