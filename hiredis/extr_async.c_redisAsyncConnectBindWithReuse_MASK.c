
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* source_addr; } ;
struct TYPE_7__ {TYPE_1__ tcp; } ;
struct TYPE_8__ {TYPE_2__ endpoint; int options; int member_0; } ;
typedef TYPE_3__ redisOptions ;
typedef int redisAsyncContext ;


 int FUNC_0 (TYPE_3__*,char const*,int) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_3__*) ;

redisAsyncContext *FUNC_2(const char *VAR_1, int VAR_2,
                                                  const char *VAR_3) {
    redisOptions VAR_4 = {0};
    FUNC_0(&VAR_4, VAR_1, VAR_2);
    VAR_4.options |= VAR_0;
    VAR_4.endpoint.tcp.source_addr = VAR_3;
    return FUNC_1(&VAR_4);
}
