
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct listener_config_t {int * hosts; } ;
typedef int h2o_configurator_t ;
struct TYPE_6__ {int * pathconf; int * hostconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
struct TYPE_5__ {int * hosts; } ;
struct TYPE_7__ {size_t num_listeners; TYPE_1__ globalconf; struct listener_config_t** listeners; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    if (VAR_2->pathconf != ((void*)0)) {

    } else if (VAR_2->hostconf == ((void*)0)) {

        size_t VAR_4;
        for (VAR_4 = 0; VAR_4 != VAR_0.num_listeners; ++VAR_4) {
            struct listener_config_t *VAR_5 = VAR_0.listeners[VAR_4];
            if (VAR_5->hosts == ((void*)0))
                VAR_5->hosts = VAR_0.globalconf.hosts;
        }
    } else if (VAR_2->pathconf == ((void*)0)) {

        if (VAR_0.num_listeners == 0) {
            FUNC_0(
                ((void*)0), VAR_3,
                "mandatory configuration directive `listen` does not exist, neither at global level or at this host level");
            return -1;
        }
    }

    return 0;
}
