
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


typedef int h2o_memcached_context_t ;
struct TYPE_9__ {int prefix; int num_threads; } ;
struct TYPE_11__ {TYPE_3__ memcached; } ;
struct TYPE_10__ {TYPE_5__ vars; } ;
struct TYPE_7__ {int text_protocol; int port; int host; } ;
struct TYPE_8__ {TYPE_1__ memcached; } ;
struct TYPE_12__ {int lifetime; TYPE_4__ cache; TYPE_2__ store; } ;
typedef int SSL_CTX ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int **,size_t,int) ;

__attribute__((used)) static void FUNC_3(SSL_CTX **VAR_1, size_t VAR_2)
{
    h2o_memcached_context_t *VAR_3 =
        FUNC_1(VAR_0.store.memcached.host, VAR_0.store.memcached.port, VAR_0.store.memcached.text_protocol,
                                     VAR_0.cache.vars.memcached.num_threads, VAR_0.cache.vars.memcached.prefix);
    FUNC_0(VAR_3, VAR_0.lifetime);
    FUNC_2(VAR_1, VAR_2, 1);
}
