
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {char* filename; scalar_t__ line; } ;
typedef TYPE_2__ yoml_t ;
struct TYPE_16__ {char* filename; } ;
typedef TYPE_3__ yoml_parse_args_t ;
struct TYPE_14__ {scalar_t__ line; } ;
struct TYPE_17__ {char* problem; TYPE_1__ problem_mark; } ;
typedef TYPE_4__ yaml_parser_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int VAR_1 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,int *,TYPE_3__*) ;

__attribute__((used)) static yoml_t *FUNC_8(yoml_parse_args_t *VAR_2, yoml_t *VAR_3)
{
    FILE *VAR_4;
    yaml_parser_t VAR_5;
    yoml_t *VAR_6;

    if ((VAR_4 = FUNC_1(VAR_2->filename, "rb")) == ((void*)0)) {
        FUNC_2(VAR_1, "could not open configuration file %s: %s\n", VAR_2->filename, FUNC_3(VAR_0));
        return ((void*)0);
    }

    FUNC_5(&VAR_5);
    FUNC_6(&VAR_5, VAR_4);

    VAR_6 = FUNC_7(&VAR_5, ((void*)0), VAR_2);

    if (VAR_6 == ((void*)0)) {
        FUNC_2(VAR_1, "failed to parse configuration file %s line %d", VAR_2->filename, (int)VAR_5.problem_mark.line + 1);
        if (VAR_3 != ((void*)0)) {
            FUNC_2(VAR_1, " (included from file %s line %d)", VAR_3->filename, (int)VAR_3->line + 1);
        }
        FUNC_2(VAR_1, ": %s\n", VAR_5.problem);
    }

    FUNC_4(&VAR_5);

    FUNC_0(VAR_4);

    return VAR_6;
}
