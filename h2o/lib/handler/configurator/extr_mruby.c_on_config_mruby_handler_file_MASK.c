
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int scalar; } ;
struct TYPE_14__ {TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct mruby_configurator_t {TYPE_9__* vars; } ;
struct TYPE_15__ {int len; int * base; int * member_0; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_16__ {int pathconf; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
struct TYPE_17__ {scalar_t__ configurator; } ;
typedef TYPE_5__ h2o_configurator_command_t ;
struct TYPE_18__ {scalar_t__ lineno; int path; TYPE_3__ source; } ;
typedef int FILE ;


 int FUNC_0 (int ,TYPE_9__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mruby_configurator_t*) ;
 int FUNC_8 (TYPE_5__*,TYPE_2__*,char*,int ,char*) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int ,TYPE_9__*) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct mruby_configurator_t *VAR_4 = (void *)VAR_1->configurator;
    FILE *VAR_5 = ((void*)0);
    h2o_iovec_t VAR_6 = {((void*)0)};
    int VAR_7 = -1;


    if ((VAR_5 = FUNC_4(VAR_3->data.scalar, "rt")) == ((void*)0)) {
        FUNC_8(VAR_1, VAR_3, "failed to open file: %s:%s", VAR_3->data.scalar, FUNC_11(VAR_0));
        goto Exit;
    }
    while (!FUNC_2(VAR_5)) {
        VAR_6.base = FUNC_9(VAR_6.base, VAR_6.len + 65536);
        VAR_6.len += FUNC_5(VAR_6.base + VAR_6.len, 1, 65536, VAR_5);
        if (FUNC_3(VAR_5)) {
            FUNC_8(VAR_1, VAR_3, "I/O error occurred while reading file:%s:%s", VAR_3->data.scalar,
                                       FUNC_11(VAR_0));
            goto Exit;
        }
    }


    VAR_4->vars->source = VAR_6;
    VAR_6.base = ((void*)0);
    VAR_4->vars->path = VAR_3->data.scalar;
    VAR_4->vars->lineno = 0;


    char VAR_8[1024];
    if (!FUNC_0(FUNC_7(VAR_4), VAR_4->vars, VAR_8)) {
        FUNC_8(VAR_1, VAR_3, "failed to compile file:%s:%s", VAR_3->data.scalar, VAR_8);
        goto Exit;
    }


    FUNC_10(VAR_2->pathconf, VAR_4->vars);

    VAR_7 = 0;

Exit:
    if (VAR_5 != ((void*)0))
        FUNC_1(VAR_5);
    if (VAR_6.base != ((void*)0))
        FUNC_6(VAR_6.base);
    return VAR_7;
}
