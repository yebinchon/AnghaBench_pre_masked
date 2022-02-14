
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int prefix; } ;
struct TYPE_10__ {TYPE_3__ redis; } ;
struct TYPE_11__ {TYPE_4__ vars; } ;
struct TYPE_7__ {int port; int host; } ;
struct TYPE_8__ {TYPE_1__ redis; } ;
struct TYPE_12__ {TYPE_5__ cache; int lifetime; TYPE_2__ store; } ;
typedef int SSL_CTX ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int **,size_t,int) ;

__attribute__((used)) static void FUNC_2(SSL_CTX **VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0.store.redis.host, VAR_0.store.redis.port, VAR_0.lifetime,
                                          VAR_0.cache.vars.redis.prefix);
    FUNC_1(VAR_1, VAR_2, 1);
}
