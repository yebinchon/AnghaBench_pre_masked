
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rp_generator_t {TYPE_1__* client; int * last_content_before_send; int sending; } ;
typedef int h2o_req_t ;
typedef int h2o_generator_t ;
struct TYPE_2__ {int (* update_window ) (TYPE_1__*) ;} ;


 int FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(h2o_generator_t *VAR_0, h2o_req_t *VAR_1)
{
    struct rp_generator_t *VAR_2 = (void *)VAR_0;

    FUNC_1(&VAR_2->sending);
    FUNC_0(VAR_2);
    if (VAR_2->last_content_before_send == ((void*)0))
        VAR_2->client->update_window(VAR_2->client);
}
