
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* source_addr; } ;
struct TYPE_7__ {TYPE_1__ tcp; } ;
struct TYPE_8__ {TYPE_2__ endpoint; int member_0; } ;
typedef TYPE_3__ redisOptions ;
typedef int redisAsyncContext ;


 int FUNC_0 (TYPE_3__*,char const*,int) ;
 int * FUNC_1 (TYPE_3__*) ;

redisAsyncContext *FUNC_2(const char *VAR_0, int VAR_1,
                                         const char *VAR_2) {
    redisOptions VAR_3 = {0};
    FUNC_0(&VAR_3, VAR_0, VAR_1);
    VAR_3.endpoint.tcp.source_addr = VAR_2;
    return FUNC_1(&VAR_3);
}
