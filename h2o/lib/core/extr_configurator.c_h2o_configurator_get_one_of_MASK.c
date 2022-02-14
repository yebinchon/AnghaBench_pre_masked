
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* scalar; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef size_t ssize_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,char*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

ssize_t FUNC_4(h2o_configurator_command_t *VAR_1, yoml_t *VAR_2, const char *VAR_3)
{
    const char *VAR_4, *VAR_5;
    ssize_t VAR_6, VAR_7;

    if (VAR_2->type != VAR_0)
        goto Error;

    VAR_4 = VAR_2->data.scalar;
    VAR_6 = FUNC_2(VAR_4);

    VAR_5 = VAR_3;
    for (VAR_7 = 0;; ++VAR_7) {
        if (FUNC_3(VAR_5, VAR_4, VAR_6) == 0 &&
            (VAR_5[VAR_6] == '\0' || VAR_5[VAR_6] == ',')) {

            return VAR_7;
        }
        VAR_5 = FUNC_1(VAR_5, ',');
        if (VAR_5 == ((void*)0))
            goto Error;
        VAR_5 += 1;
    }


Error:
    FUNC_0(VAR_1, VAR_2, "argument must be one of: %s", VAR_3);
    return -1;
}
