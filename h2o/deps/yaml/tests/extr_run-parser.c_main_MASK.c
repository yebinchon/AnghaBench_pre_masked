
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yaml_parser_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ yaml_event_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;

int
FUNC_10(int VAR_2, char *VAR_3[])
{
    int VAR_4;

    if (VAR_2 < 2) {
        FUNC_4("Usage: %s file1.yaml ...\n", VAR_3[0]);
        return 0;
    }

    for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4 ++)
    {
        FILE *VAR_5;
        yaml_parser_t VAR_6;
        yaml_event_t VAR_7;
        int VAR_8 = 0;
        int VAR_9 = 0;
        int VAR_10 = 0;

        FUNC_4("[%d] Parsing '%s': ", VAR_4, VAR_3[VAR_4]);
        FUNC_2(VAR_1);

        VAR_5 = FUNC_3(VAR_3[VAR_4], "rb");
        FUNC_0(*VAR_5);

        FUNC_0(FUNC_7(&VAR_6));

        FUNC_9(&VAR_6, VAR_5);

        while (!VAR_8)
        {
            if (!FUNC_8(&VAR_6, &VAR_7)) {
                VAR_10 = 1;
                break;
            }

            VAR_8 = (VAR_7.type == VAR_0);

            FUNC_5(&VAR_7);

            VAR_9 ++;
        }

        FUNC_6(&VAR_6);

        FUNC_0(!FUNC_1(VAR_5));

        FUNC_4("%s (%d events)\n", (VAR_10 ? "FAILURE" : "SUCCESS"), VAR_9);
    }

    return 0;
}
