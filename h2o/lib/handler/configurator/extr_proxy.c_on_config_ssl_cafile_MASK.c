
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int scalar; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct proxy_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_12__ {scalar_t__ configurator; } ;
typedef TYPE_4__ h2o_configurator_command_t ;
typedef int X509_STORE ;
struct TYPE_9__ {int ssl_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,char*,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *,int,int *) ;

__attribute__((used)) static int FUNC_6(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct proxy_configurator_t *VAR_4 = (void *)VAR_1->configurator;
    X509_STORE *VAR_5 = FUNC_3();
    int VAR_6 = -1;

    if (FUNC_2(VAR_5, VAR_3->data.scalar, ((void*)0)) == 1) {
        FUNC_5(&VAR_4->vars->ssl_ctx, VAR_5, -1, ((void*)0));
        VAR_6 = 0;
    } else {
        FUNC_4(VAR_1, VAR_3, "failed to load certificates file:%s", VAR_3->data.scalar);
        FUNC_0(VAR_0);
    }

    FUNC_1(VAR_5);
    return VAR_6;
}
