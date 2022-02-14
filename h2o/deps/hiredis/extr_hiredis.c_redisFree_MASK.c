
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* path; } ;
struct TYPE_6__ {TYPE_3__* source_addr; TYPE_3__* host; } ;
struct TYPE_8__ {scalar_t__ fd; struct TYPE_8__* timeout; TYPE_2__ unix_sock; TYPE_1__ tcp; int * reader; int * obuf; } ;
typedef TYPE_3__ redisContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(redisContext *VAR_0) {
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->fd > 0)
        FUNC_0(VAR_0->fd);
    if (VAR_0->obuf != ((void*)0))
        FUNC_3(VAR_0->obuf);
    if (VAR_0->reader != ((void*)0))
        FUNC_2(VAR_0->reader);
    if (VAR_0->tcp.host)
        FUNC_1(VAR_0->tcp.host);
    if (VAR_0->tcp.source_addr)
        FUNC_1(VAR_0->tcp.source_addr);
    if (VAR_0->unix_sock.path)
        FUNC_1(VAR_0->unix_sock.path);
    if (VAR_0->timeout)
        FUNC_1(VAR_0->timeout);
    FUNC_1(VAR_0);
}
