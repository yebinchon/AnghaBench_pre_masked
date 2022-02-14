
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_handler_t ;
struct TYPE_4__ {int sockpool; } ;
typedef TYPE_1__ h2o_fastcgi_handler_t ;
struct TYPE_5__ {int loop; } ;
typedef TYPE_2__ h2o_context_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    h2o_fastcgi_handler_t *VAR_2 = (void *)VAR_0;
    FUNC_0(&VAR_2->sockpool, VAR_1->loop);
}
