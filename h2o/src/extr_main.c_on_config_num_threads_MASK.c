
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t size; int * elements; } ;
struct TYPE_10__ {TYPE_1__ sequence; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_12__ {scalar_t__ size; int* entries; } ;
struct TYPE_13__ {TYPE_5__ thread_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_8__ VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,char*,size_t*) ;
 int FUNC_2 (int *,TYPE_5__*,size_t) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_command_t *VAR_3, h2o_configurator_context_t *VAR_4, yoml_t *VAR_5)
{
    VAR_2.thread_map.size = 0;
    if (VAR_5->type == VAR_0) {
        size_t VAR_6, VAR_7 = 0;
        if (FUNC_1(VAR_3, VAR_5, "%zu", &VAR_7) != 0)
            return -1;
        FUNC_2(((void*)0), &VAR_2.thread_map, VAR_7);
        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
            VAR_2.thread_map.entries[VAR_2.thread_map.size++] = -1;
    } else if (VAR_5->type == VAR_1) {
        FUNC_0(
            VAR_3, VAR_5, "Can't handle a CPU list, this platform doesn't support thread pinning via `pthread_setaffinity_np`");
        return -1;

    }
    if (VAR_2.thread_map.size == 0) {
        FUNC_0(VAR_3, VAR_5, "num-threads must be >=1");
        return -1;
    }
    return 0;
}
