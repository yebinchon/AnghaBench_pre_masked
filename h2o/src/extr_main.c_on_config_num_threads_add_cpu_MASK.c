
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* scalar; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_9__ {unsigned int* entries; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_4__ thread_map; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,char*) ;
 int FUNC_1 (int *,TYPE_4__*,scalar_t__) ;
 int * FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char*,unsigned int*,...) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static inline int FUNC_5(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    if (VAR_4->type != VAR_0) {
        FUNC_0(VAR_2, VAR_4, "CPUs in cpu sequence must be a scalar");
        return -1;
    }

    const char *VAR_5 = VAR_4->data.scalar;
    unsigned VAR_6, VAR_7, VAR_8;
    int VAR_9;
    if (FUNC_2(VAR_5, '-') == ((void*)0)) {
        if (FUNC_3(VAR_5, "%u%n", &VAR_6, &VAR_9) != 1 || VAR_9 != FUNC_4(VAR_5))
            goto Error;
        VAR_7 = VAR_6;
    } else {
        if (FUNC_3(VAR_5, "%u-%u%n", &VAR_6, &VAR_7, &VAR_9) != 2 || VAR_9 != FUNC_4(VAR_5))
            goto Error;
        if (VAR_6 > VAR_7)
            goto Error;
    }
    for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++) {
        FUNC_1(((void*)0), &VAR_1.thread_map, VAR_1.thread_map.size + 1);
        VAR_1.thread_map.entries[VAR_1.thread_map.size++] = VAR_8;
    }
    return 0;
Error:
    FUNC_0(
        VAR_2, VAR_4, "Invalid CPU number: CPUs must be specified as a non-negative number or as a range of non-negative numbers");
    return -1;
}
