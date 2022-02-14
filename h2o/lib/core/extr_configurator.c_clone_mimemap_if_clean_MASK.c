
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* mimemap; TYPE_1__* parent; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_4__ {scalar_t__* mimemap; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(h2o_configurator_context_t *VAR_0)
{
    if (VAR_0->parent == ((void*)0))
        return;
    if (*VAR_0->mimemap != *VAR_0->parent->mimemap)
        return;
    FUNC_0(*VAR_0->mimemap);

    *VAR_0->mimemap = FUNC_1(*VAR_0->mimemap);
}
