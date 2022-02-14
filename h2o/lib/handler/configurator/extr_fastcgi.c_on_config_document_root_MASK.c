
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* scalar; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct fastcgi_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_12__ {scalar_t__ configurator; } ;
typedef TYPE_4__ h2o_configurator_command_t ;
struct TYPE_9__ {void* document_root; } ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 void* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct fastcgi_configurator_t *VAR_3 = (void *)VAR_0->configurator;

    if (VAR_2->data.scalar[0] == '\0') {

        VAR_3->vars->document_root = FUNC_1(((void*)0), 0);
    } else if (VAR_2->data.scalar[0] == '/') {

        VAR_3->vars->document_root = FUNC_1(VAR_2->data.scalar, FUNC_2(VAR_2->data.scalar));
    } else {
        FUNC_0(VAR_0, VAR_2, "value does not start from `/`");
        return -1;
    }
    return 0;
}
