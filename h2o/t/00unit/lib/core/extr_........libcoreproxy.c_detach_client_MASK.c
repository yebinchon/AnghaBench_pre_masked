
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rp_generator_t {TYPE_1__* client; } ;
struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ h2o_httpclient_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static h2o_httpclient_t *FUNC_1(struct rp_generator_t *VAR_0)
{
    h2o_httpclient_t *VAR_1 = VAR_0->client;
    FUNC_0(VAR_1 != ((void*)0));
    VAR_1->data = ((void*)0);
    VAR_0->client = ((void*)0);
    return VAR_1;
}
