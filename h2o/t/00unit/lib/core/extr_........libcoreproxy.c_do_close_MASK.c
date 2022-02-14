
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rp_generator_t {int send_headers_timeout; int * client; } ;
struct TYPE_4__ {int (* cancel ) (TYPE_1__*) ;} ;
typedef TYPE_1__ h2o_httpclient_t ;


 TYPE_1__* FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct rp_generator_t *VAR_0)
{
    if (VAR_0->client != ((void*)0)) {
        h2o_httpclient_t *VAR_1 = FUNC_0(VAR_0);
        VAR_1->cancel(VAR_1);
    }
    FUNC_1(&VAR_0->send_headers_timeout);
}
