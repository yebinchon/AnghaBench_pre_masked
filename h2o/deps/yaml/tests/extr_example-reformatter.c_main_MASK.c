
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int column; int line; } ;
struct TYPE_19__ {int column; int line; } ;
struct TYPE_21__ {scalar_t__ type; int error; int problem_value; char* problem; int problem_offset; char* context; TYPE_2__ problem_mark; TYPE_1__ context_mark; } ;
typedef TYPE_3__ yaml_parser_t ;
typedef TYPE_3__ yaml_event_t ;
typedef TYPE_3__ yaml_emitter_t ;
typedef int parser ;
typedef int event ;
typedef int emitter ;







 scalar_t__ VAR_0 ;

 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;

int
FUNC_14(int VAR_4, char *VAR_5[])
{
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10 = 0;

    yaml_parser_t VAR_11;
    yaml_emitter_t VAR_12;
    yaml_event_t VAR_13;



    FUNC_1(&VAR_11, 0, sizeof(VAR_11));
    FUNC_1(&VAR_12, 0, sizeof(VAR_12));
    FUNC_1(&VAR_13, 0, sizeof(VAR_13));



    for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9 ++)
    {
        if (FUNC_3(VAR_5[VAR_9], "-h") == 0
                || FUNC_3(VAR_5[VAR_9], "--help") == 0) {
            VAR_6 = 1;
        }

        else if (FUNC_3(VAR_5[VAR_9], "-c") == 0
                || FUNC_3(VAR_5[VAR_9], "--canonical") == 0) {
            VAR_7 = 1;
        }

        else if (FUNC_3(VAR_5[VAR_9], "-u") == 0
                || FUNC_3(VAR_5[VAR_9], "--unicode") == 0) {
            VAR_8 = 1;
        }

        else {
            FUNC_0(VAR_1, "Unrecognized option: %s\n"
                    "Try `%s --help` for more information.\n",
                    VAR_5[VAR_9], VAR_5[0]);
            return 1;
        }
    }



    if (VAR_6)
    {
        FUNC_2("%s [--canonical] [--unicode] <input >output\n"
                "or\n%s -h | --help\nReformat a YAML stream\n\nOptions:\n"
                "-h, --help\t\tdisplay this help and exit\n"
                "-c, --canonical\t\toutput in the canonical YAML format\n"
                "-u, --unicode\t\toutput unescaped non-ASCII characters\n",
                VAR_5[0], VAR_5[0]);
        return 0;
    }



    if (!FUNC_11(&VAR_11))
        goto parser_error;

    if (!FUNC_6(&VAR_12))
        goto emitter_error;



    FUNC_13(&VAR_11, VAR_2);



    FUNC_8(&VAR_12, VAR_3);

    FUNC_7(&VAR_12, VAR_7);
    FUNC_9(&VAR_12, VAR_8);



    while (!VAR_10)
    {


        if (!FUNC_12(&VAR_11, &VAR_13))
            goto parser_error;



        if (VAR_13.type == VAR_0) {
            VAR_10 = 1;
        }



        if (!FUNC_5(&VAR_12, &VAR_13))
            goto emitter_error;
    }

    FUNC_10(&VAR_11);
    FUNC_4(&VAR_12);

    return 0;

parser_error:



    switch (VAR_11.error)
    {
        case 132:
            FUNC_0(VAR_1, "Memory error: Not enough memory for parsing\n");
            break;

        case 130:
            if (VAR_11.problem_value != -1) {
                FUNC_0(VAR_1, "Reader error: %s: #%X at %d\n", VAR_11.problem,
                        VAR_11.problem_value, VAR_11.problem_offset);
            }
            else {
                FUNC_0(VAR_1, "Reader error: %s at %d\n", VAR_11.problem,
                        VAR_11.problem_offset);
            }
            break;

        case 129:
            if (VAR_11.context) {
                FUNC_0(VAR_1, "Scanner error: %s at line %d, column %d\n"
                        "%s at line %d, column %d\n", VAR_11.context,
                        VAR_11.context_mark.line+1, VAR_11.context_mark.column+1,
                        VAR_11.problem, VAR_11.problem_mark.line+1,
                        VAR_11.problem_mark.column+1);
            }
            else {
                FUNC_0(VAR_1, "Scanner error: %s at line %d, column %d\n",
                        VAR_11.problem, VAR_11.problem_mark.line+1,
                        VAR_11.problem_mark.column+1);
            }
            break;

        case 131:
            if (VAR_11.context) {
                FUNC_0(VAR_1, "Parser error: %s at line %d, column %d\n"
                        "%s at line %d, column %d\n", VAR_11.context,
                        VAR_11.context_mark.line+1, VAR_11.context_mark.column+1,
                        VAR_11.problem, VAR_11.problem_mark.line+1,
                        VAR_11.problem_mark.column+1);
            }
            else {
                FUNC_0(VAR_1, "Parser error: %s at line %d, column %d\n",
                        VAR_11.problem, VAR_11.problem_mark.line+1,
                        VAR_11.problem_mark.column+1);
            }
            break;

        default:

            FUNC_0(VAR_1, "Internal error\n");
            break;
    }

    FUNC_10(&VAR_11);
    FUNC_4(&VAR_12);

    return 1;

emitter_error:



    switch (VAR_12.error)
    {
        case 132:
            FUNC_0(VAR_1, "Memory error: Not enough memory for emitting\n");
            break;

        case 128:
            FUNC_0(VAR_1, "Writer error: %s\n", VAR_12.problem);
            break;

        case 133:
            FUNC_0(VAR_1, "Emitter error: %s\n", VAR_12.problem);
            break;

        default:

            FUNC_0(VAR_1, "Internal error\n");
            break;
    }

    FUNC_10(&VAR_11);
    FUNC_4(&VAR_12);

    return 1;
}
