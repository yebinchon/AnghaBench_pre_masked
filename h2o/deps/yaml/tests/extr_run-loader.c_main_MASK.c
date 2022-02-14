
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yaml_parser_t ;
typedef int yaml_document_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

int
FUNC_11(int VAR_1, char *VAR_2[])
{
    int VAR_3;

    if (VAR_1 < 2) {
        FUNC_4("Usage: %s file1.yaml ...\n", VAR_2[0]);
        return 0;
    }

    for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3 ++)
    {
        FILE *VAR_4;
        yaml_parser_t VAR_5;
        yaml_document_t VAR_6;
        int VAR_7 = 0;
        int VAR_8 = 0;
        int VAR_9 = 0;

        FUNC_4("[%d] Loading '%s': ", VAR_3, VAR_2[VAR_3]);
        FUNC_2(VAR_0);

        VAR_4 = FUNC_3(VAR_2[VAR_3], "rb");
        FUNC_0(*VAR_4);

        FUNC_0(FUNC_8(&VAR_5));

        FUNC_10(&VAR_5, VAR_4);

        while (!VAR_7)
        {
            if (!FUNC_9(&VAR_5, &VAR_6)) {
                VAR_9 = 1;
                break;
            }

            VAR_7 = (!FUNC_6(&VAR_6));

            FUNC_5(&VAR_6);

            if (!VAR_7) VAR_8 ++;
        }

        FUNC_7(&VAR_5);

        FUNC_0(!FUNC_1(VAR_4));

        FUNC_4("%s (%d documents)\n", (VAR_9 ? "FAILURE" : "SUCCESS"), VAR_8);
    }

    return 0;
}
