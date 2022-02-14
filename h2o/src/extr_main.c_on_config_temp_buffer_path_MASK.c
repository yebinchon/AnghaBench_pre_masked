
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* scalar; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
typedef int buf ;
struct TYPE_8__ {int fn_template; } ;


 int FUNC_0 (int *,TYPE_2__*,char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    char VAR_4[sizeof(VAR_0.fn_template)];

    int VAR_5 = FUNC_1(VAR_4, sizeof(VAR_4), "%s%s", VAR_3->data.scalar, FUNC_3(VAR_0.fn_template, '/'));
    if (VAR_5 >= sizeof(VAR_4)) {
        FUNC_0(VAR_1, VAR_3, "path is too long");
        return -1;
    }
    FUNC_2(VAR_0.fn_template, VAR_4);

    return 0;
}
