
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* base; } ;
struct TYPE_6__ {TYPE_3__* path; TYPE_1__ source; } ;
struct TYPE_7__ {TYPE_2__ config; } ;
typedef TYPE_3__ h2o_mruby_handler_t ;
typedef int h2o_handler_t ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(h2o_handler_t *VAR_0)
{
    h2o_mruby_handler_t *VAR_1 = (void *)VAR_0;

    FUNC_0(VAR_1->config.source.base);
    FUNC_0(VAR_1->config.path);
    FUNC_0(VAR_1);
}
