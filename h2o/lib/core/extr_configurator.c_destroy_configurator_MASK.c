
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* entries; } ;
struct TYPE_7__ {TYPE_1__ commands; int (* dispose ) (TYPE_2__*) ;} ;
typedef TYPE_2__ h2o_configurator_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(h2o_configurator_t *VAR_0)
{
    if (VAR_0->dispose != ((void*)0))
        VAR_0->dispose(VAR_0);
    FUNC_0(VAR_0->commands.entries);
    FUNC_0(VAR_0);
}
