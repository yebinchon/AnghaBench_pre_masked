
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ error; int problem_value; char* problem; int problem_offset; } ;
typedef TYPE_1__ yaml_parser_t ;
struct TYPE_8__ {char* test; char* title; int result; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

int FUNC_5(void)
{
    yaml_parser_t VAR_2;
    int VAR_3 = 0;
    int VAR_4;
    FUNC_0("checking utf-8 sequences...\n");
    for (VAR_4 = 0; VAR_1[VAR_4].test; VAR_4++) {
        char *VAR_5 = VAR_1[VAR_4].title;
        int VAR_6 = VAR_1[VAR_4].result;
        int VAR_7;
        char *VAR_8 = VAR_1[VAR_4].test;
        char *VAR_9 = VAR_8;
        FUNC_0("\t%s:\n", VAR_5);
        while(1) {
            while (*VAR_9 != '|' && *VAR_9 != '!') VAR_9++;
            FUNC_2(&VAR_2);
            FUNC_3(&VAR_2, (unsigned char *)VAR_8, VAR_9-VAR_8);
            VAR_7 = FUNC_4(&VAR_2, VAR_9-VAR_8);
            if (VAR_7 != VAR_6) {
                FUNC_0("\t\t- ");
                VAR_3 ++;
            }
            else {
                FUNC_0("\t\t+ ");
            }
            if (!VAR_2.error) {
                FUNC_0("(no error)\n");
            }
            else if (VAR_2.error == VAR_0) {
                if (VAR_2.problem_value != -1) {
                    FUNC_0("(reader error: %s: #%X at %d)\n",
                            VAR_2.problem, VAR_2.problem_value, VAR_2.problem_offset);
                }
                else {
                    FUNC_0("(reader error: %s at %d)\n",
                            VAR_2.problem, VAR_2.problem_offset);
                }
            }
            if (*VAR_9 == '!') break;
            VAR_8 = ++VAR_9;
            FUNC_1(&VAR_2);
        };
        FUNC_0("\n");
    }
    FUNC_0("checking utf-8 sequences: %d fail(s)\n", VAR_3);
    return VAR_3;
}
