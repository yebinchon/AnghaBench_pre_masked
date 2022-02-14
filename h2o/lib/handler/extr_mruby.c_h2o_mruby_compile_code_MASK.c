
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mrb_parser_state {scalar_t__ nerr; TYPE_2__* error_buffer; } ;
struct RProc {int dummy; } ;
struct TYPE_12__ {int capture_errors; int lineno; } ;
typedef TYPE_3__ mrbc_context ;
typedef int mrb_state ;
struct TYPE_10__ {scalar_t__ len; int base; } ;
struct TYPE_13__ {int lineno; TYPE_1__ source; int * path; } ;
typedef TYPE_4__ h2o_mruby_config_vars_t ;
struct TYPE_11__ {int lineno; char* message; int column; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int ,scalar_t__,int,int ) ;
 struct RProc* FUNC_2 (int *,struct mrb_parser_state*) ;
 struct mrb_parser_state* FUNC_3 (int *,int ,int,TYPE_3__*) ;
 int FUNC_4 (struct mrb_parser_state*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_3__*,int *) ;
 int FUNC_8 (char*,int,char*,int,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

struct RProc *FUNC_11(mrb_state *VAR_1, h2o_mruby_config_vars_t *VAR_2, char *VAR_3)
{
    mrbc_context *VAR_4;
    struct mrb_parser_state *VAR_5;
    struct RProc *VAR_6 = ((void*)0);


    if ((VAR_4 = FUNC_6(VAR_1)) == ((void*)0)) {
        FUNC_0("%s: no memory\n", VAR_0);
    }
    if (VAR_2->path != ((void*)0))
        FUNC_7(VAR_1, VAR_4, VAR_2->path);
    VAR_4->capture_errors = 1;
    VAR_4->lineno = VAR_2->lineno;
    if ((VAR_5 = FUNC_3(VAR_1, VAR_2->source.base, (int)VAR_2->source.len, VAR_4)) == ((void*)0)) {
        FUNC_0("%s: no memory\n", VAR_0);
    }

    if (VAR_5->nerr != 0) {
        if (VAR_3 == ((void*)0)) {
            FUNC_0("%s: internal error (unexpected state)\n", VAR_0);
        }
        FUNC_8(VAR_3, 256, "line %d:%s", VAR_5->error_buffer[0].lineno, VAR_5->error_buffer[0].message);
        FUNC_9(VAR_3, "\n\n");
        if (FUNC_1(VAR_3 + FUNC_10(VAR_3), VAR_2->source.base, VAR_2->source.len,
                                VAR_5->error_buffer[0].lineno - VAR_2->lineno + 1, VAR_5->error_buffer[0].column) != 0) {

            VAR_3[FUNC_10(VAR_3) - 2] = '\0';
        }
        goto Exit;
    }

    if ((VAR_6 = FUNC_2(VAR_1, VAR_5)) == ((void*)0)) {
        FUNC_0("%s: internal error (mrb_generate_code failed)\n", VAR_0);
    }

Exit:
    FUNC_4(VAR_5);
    FUNC_5(VAR_1, VAR_4);
    return VAR_6;
}
