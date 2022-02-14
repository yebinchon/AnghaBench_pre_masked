
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sending; } ;
struct st_fcgi_generator_t {TYPE_1__ resp; } ;
typedef int h2o_req_t ;
typedef int h2o_generator_t ;


 int FUNC_0 (struct st_fcgi_generator_t*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(h2o_generator_t *VAR_0, h2o_req_t *VAR_1)
{
    struct st_fcgi_generator_t *VAR_2 = (void *)VAR_0;

    FUNC_1(&VAR_2->resp.sending);
    FUNC_0(VAR_2);
}
