
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * path; } ;
struct TYPE_7__ {int * source_addr; int * host; } ;
struct TYPE_9__ {char* errstr; int * reader; int * obuf; int * timeout; TYPE_2__ unix_sock; TYPE_1__ tcp; scalar_t__ err; } ;
typedef TYPE_3__ redisContext ;


 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;

__attribute__((used)) static redisContext *FUNC_4(void) {
    redisContext *VAR_0;

    VAR_0 = FUNC_0(1,sizeof(redisContext));
    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_0->err = 0;
    VAR_0->errstr[0] = '\0';
    VAR_0->obuf = FUNC_3();
    VAR_0->reader = FUNC_2();
    VAR_0->tcp.host = ((void*)0);
    VAR_0->tcp.source_addr = ((void*)0);
    VAR_0->unix_sock.path = ((void*)0);
    VAR_0->timeout = ((void*)0);

    if (VAR_0->obuf == ((void*)0) || VAR_0->reader == ((void*)0)) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }

    return VAR_0;
}
