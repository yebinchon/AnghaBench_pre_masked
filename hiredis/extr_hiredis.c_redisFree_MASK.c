
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* path; } ;
struct TYPE_11__ {TYPE_4__* source_addr; TYPE_4__* host; } ;
struct TYPE_12__ {int privdata; TYPE_2__* funcs; struct TYPE_12__* saddr; struct TYPE_12__* timeout; TYPE_1__ unix_sock; TYPE_3__ tcp; int reader; int obuf; } ;
typedef TYPE_4__ redisContext ;
struct TYPE_10__ {int (* free_privdata ) (int ) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(redisContext *VAR_0) {
    if (VAR_0 == ((void*)0))
        return;
    FUNC_2(VAR_0);

    FUNC_4(VAR_0->obuf);
    FUNC_3(VAR_0->reader);
    FUNC_0(VAR_0->tcp.host);
    FUNC_0(VAR_0->tcp.source_addr);
    FUNC_0(VAR_0->unix_sock.path);
    FUNC_0(VAR_0->timeout);
    FUNC_0(VAR_0->saddr);
    if (VAR_0->funcs->free_privdata) {
        VAR_0->funcs->free_privdata(VAR_0->privdata);
    }
    FUNC_1(VAR_0, 0xff, sizeof(*VAR_0));
    FUNC_0(VAR_0);
}
