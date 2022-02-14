
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int scalar; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,char*,...) ;
 int * FUNC_1 (int ,char) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_1, yoml_t *VAR_2)
{
    if (VAR_2->type != VAR_0) {
        FUNC_0(VAR_1, VAR_2, "expected a scalar (mime-type)");
        return -1;
    }
    if (FUNC_1(VAR_2->data.scalar, '/') == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2, "the string \"%s\" does not look like a mime-type", VAR_2->data.scalar);
        return -1;
    }
    return 0;
}
