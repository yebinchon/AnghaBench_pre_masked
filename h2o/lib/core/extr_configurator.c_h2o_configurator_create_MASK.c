
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int configurators; } ;
typedef TYPE_1__ h2o_globalconf_t ;
struct TYPE_8__ {int _link; } ;
typedef TYPE_2__ h2o_configurator_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_2__*,int ,size_t) ;

h2o_configurator_t *FUNC_4(h2o_globalconf_t *VAR_0, size_t VAR_1)
{
    h2o_configurator_t *VAR_2;

    FUNC_0(VAR_1 >= sizeof(*VAR_2));

    VAR_2 = FUNC_2(VAR_1);
    FUNC_3(VAR_2, 0, VAR_1);
    FUNC_1(&VAR_0->configurators, &VAR_2->_link);

    return VAR_2;
}
