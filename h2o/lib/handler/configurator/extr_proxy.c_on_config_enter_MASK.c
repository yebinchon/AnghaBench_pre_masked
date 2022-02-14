
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
struct proxy_configurator_t {TYPE_4__* vars; scalar_t__ first_byte_timeout_set; scalar_t__ connect_timeout_set; } ;
typedef int h2o_configurator_t ;
struct TYPE_7__ {int * hostconf; int * pathconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
typedef int h2o_cache_t ;
struct TYPE_6__ {int * headers_cmds; } ;
struct TYPE_8__ {int ssl_ctx; TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_11(h2o_configurator_t *VAR_4, h2o_configurator_context_t *VAR_5, yoml_t *VAR_6)
{
    struct proxy_configurator_t *VAR_7 = (void *)VAR_4;

    FUNC_10(VAR_7->vars + 1, VAR_7->vars, sizeof(*VAR_7->vars));
    if (VAR_7->vars[1].conf.headers_cmds != ((void*)0))
        FUNC_8(VAR_7->vars[1].conf.headers_cmds);
    ++VAR_7->vars;
    VAR_7->connect_timeout_set = 0;
    VAR_7->first_byte_timeout_set = 0;

    if (VAR_5->pathconf == ((void*)0) && VAR_5->hostconf == ((void*)0)) {

        VAR_7->vars->ssl_ctx = FUNC_3();
        char *VAR_8 = FUNC_6("share/h2o/ca-bundle.crt");
        if (FUNC_0(VAR_7->vars->ssl_ctx, VAR_8, ((void*)0)) != 1)
            FUNC_7("Warning: failed to load the default certificates file at %s. Proxying to HTTPS servers may fail.\n",
                             VAR_8);
        FUNC_5(VAR_8);
        FUNC_1(VAR_7->vars->ssl_ctx, VAR_3 | VAR_2, ((void*)0));
        h2o_cache_t *VAR_9 =
            FUNC_4(VAR_0, VAR_1);
        FUNC_9(VAR_7->vars->ssl_ctx, VAR_9);
    } else {
        FUNC_2(VAR_7->vars->ssl_ctx);
    }

    return 0;
}
