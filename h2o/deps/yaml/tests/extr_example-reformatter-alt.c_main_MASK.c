
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int column; int line; } ;
struct TYPE_21__ {int column; int line; } ;
struct TYPE_22__ {int error; int problem_value; char* problem; int problem_offset; char* context; TYPE_1__ problem_mark; TYPE_2__ context_mark; } ;
typedef TYPE_3__ yaml_parser_t ;
typedef TYPE_3__ yaml_emitter_t ;
typedef TYPE_3__ yaml_document_t ;
typedef int parser ;
typedef int emitter ;
typedef int document ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;

int
FUNC_15(int VAR_3, char *VAR_4[])
{
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8;
    int VAR_9 = 0;

    yaml_parser_t VAR_10;
    yaml_emitter_t VAR_11;
    yaml_document_t VAR_12;



    FUNC_1(&VAR_10, 0, sizeof(VAR_10));
    FUNC_1(&VAR_11, 0, sizeof(VAR_11));
    FUNC_1(&VAR_12, 0, sizeof(VAR_12));



    for (VAR_8 = 1; VAR_8 < VAR_3; VAR_8 ++)
    {
        if (FUNC_3(VAR_4[VAR_8], "-h") == 0
                || FUNC_3(VAR_4[VAR_8], "--help") == 0) {
            VAR_5 = 1;
        }

        else if (FUNC_3(VAR_4[VAR_8], "-c") == 0
                || FUNC_3(VAR_4[VAR_8], "--canonical") == 0) {
            VAR_6 = 1;
        }

        else if (FUNC_3(VAR_4[VAR_8], "-u") == 0
                || FUNC_3(VAR_4[VAR_8], "--unicode") == 0) {
            VAR_7 = 1;
        }

        else {
            FUNC_0(VAR_0, "Unrecognized option: %s\n"
                    "Try `%s --help` for more information.\n",
                    VAR_4[VAR_8], VAR_4[0]);
            return 1;
        }
    }



    if (VAR_5)
    {
        FUNC_2("%s [--canonical] [--unicode] <input >output\n"
                "or\n%s -h | --help\nReformat a YAML stream\n\nOptions:\n"
                "-h, --help\t\tdisplay this help and exit\n"
                "-c, --canonical\t\toutput in the canonical YAML format\n"
                "-u, --unicode\t\toutput unescaped non-ASCII characters\n",
                VAR_4[0], VAR_4[0]);
        return 0;
    }



    if (!FUNC_12(&VAR_10))
        goto parser_error;

    if (!FUNC_7(&VAR_11))
        goto emitter_error;



    FUNC_14(&VAR_10, VAR_1);



    FUNC_9(&VAR_11, VAR_2);

    FUNC_8(&VAR_11, VAR_6);
    FUNC_10(&VAR_11, VAR_7);



    while (!VAR_9)
    {


        if (!FUNC_13(&VAR_10, &VAR_12))
            goto parser_error;



        if (!FUNC_4(&VAR_12)) {
            VAR_9 = 1;
        }



        if (!FUNC_6(&VAR_11, &VAR_12))
            goto emitter_error;
    }

    FUNC_11(&VAR_10);
    FUNC_5(&VAR_11);

    return 0;

parser_error:



    switch (VAR_10.error)
    {
        case 132:
            FUNC_0(VAR_0, "Memory error: Not enough memory for parsing\n");
            break;

        case 130:
            if (VAR_10.problem_value != -1) {
                FUNC_0(VAR_0, "Reader error: %s: #%X at %d\n", VAR_10.problem,
                        VAR_10.problem_value, VAR_10.problem_offset);
            }
            else {
                FUNC_0(VAR_0, "Reader error: %s at %d\n", VAR_10.problem,
                        VAR_10.problem_offset);
            }
            break;

        case 129:
            if (VAR_10.context) {
                FUNC_0(VAR_0, "Scanner error: %s at line %d, column %d\n"
                        "%s at line %d, column %d\n", VAR_10.context,
                        VAR_10.context_mark.line+1, VAR_10.context_mark.column+1,
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            else {
                FUNC_0(VAR_0, "Scanner error: %s at line %d, column %d\n",
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            break;

        case 131:
            if (VAR_10.context) {
                FUNC_0(VAR_0, "Parser error: %s at line %d, column %d\n"
                        "%s at line %d, column %d\n", VAR_10.context,
                        VAR_10.context_mark.line+1, VAR_10.context_mark.column+1,
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            else {
                FUNC_0(VAR_0, "Parser error: %s at line %d, column %d\n",
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            break;

        case 134:
            if (VAR_10.context) {
                FUNC_0(VAR_0, "Composer error: %s at line %d, column %d\n"
                        "%s at line %d, column %d\n", VAR_10.context,
                        VAR_10.context_mark.line+1, VAR_10.context_mark.column+1,
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            else {
                FUNC_0(VAR_0, "Composer error: %s at line %d, column %d\n",
                        VAR_10.problem, VAR_10.problem_mark.line+1,
                        VAR_10.problem_mark.column+1);
            }
            break;

        default:

            FUNC_0(VAR_0, "Internal error\n");
            break;
    }

    FUNC_11(&VAR_10);
    FUNC_5(&VAR_11);

    return 1;

emitter_error:



    switch (VAR_11.error)
    {
        case 132:
            FUNC_0(VAR_0, "Memory error: Not enough memory for emitting\n");
            break;

        case 128:
            FUNC_0(VAR_0, "Writer error: %s\n", VAR_11.problem);
            break;

        case 133:
            FUNC_0(VAR_0, "Emitter error: %s\n", VAR_11.problem);
            break;

        default:

            FUNC_0(VAR_0, "Internal error\n");
            break;
    }

    FUNC_11(&VAR_10);
    FUNC_5(&VAR_11);

    return 1;
}
