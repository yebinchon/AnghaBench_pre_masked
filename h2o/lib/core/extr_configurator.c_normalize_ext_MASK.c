
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* scalar; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(h2o_configurator_command_t *VAR_0, yoml_t *VAR_1)
{
    if (FUNC_1(VAR_1->data.scalar, "default") == 0) {

        return "";
    } else if (FUNC_0(VAR_0, VAR_1) == 0) {
        return VAR_1->data.scalar + 1;
    } else {
        return ((void*)0);
    }
}
