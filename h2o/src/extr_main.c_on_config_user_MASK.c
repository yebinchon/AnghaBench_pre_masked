
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int scalar; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
typedef TYPE_3__ yoml_t ;
struct TYPE_12__ {TYPE_2__* globalconf; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_13__ {int base; } ;
struct TYPE_10__ {int user; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*,char*,int ) ;
 TYPE_7__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    VAR_1 = 0;
    if (FUNC_0(VAR_4->data.scalar) == ((void*)0)) {
        if (VAR_1 == 0) {
            FUNC_1(VAR_2, VAR_4, "user:%s does not exist", VAR_4->data.scalar);
        } else {
            FUNC_3("getpwnam");
        }
        return -1;
    }
    VAR_3->globalconf->user = FUNC_2(((void*)0), VAR_4->data.scalar, VAR_0).base;
    return 0;
}
