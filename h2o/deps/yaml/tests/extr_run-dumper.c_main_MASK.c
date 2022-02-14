
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yaml_parser_t ;
typedef int yaml_emitter_t ;
typedef unsigned char yaml_document_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char**,char**,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_8 (char*,unsigned char*,size_t,int) ;
 int FUNC_9 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (unsigned char*) ;
 int FUNC_12 (unsigned char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,unsigned char*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,unsigned char*,int,size_t*) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,unsigned char*) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int *,unsigned char*,size_t) ;

int
FUNC_27(int VAR_3, char *VAR_4[])
{
    int VAR_5;
    int VAR_6 = 0;
    int VAR_7 = 0;

    VAR_5 = 1;
    while (VAR_5 < VAR_3) {
        if (FUNC_10(VAR_4[VAR_5], "-c") == 0) {
            VAR_6 = 1;
        }
        else if (FUNC_10(VAR_4[VAR_5], "-u") == 0) {
            VAR_7 = 1;
        }
        else if (VAR_4[VAR_5][0] == '-') {
            FUNC_9("Unknown option: '%s'\n", VAR_4[VAR_5]);
            return 0;
        }
        if (VAR_4[VAR_5][0] == '-') {
            if (VAR_5 < VAR_3-1) {
                FUNC_6(VAR_4+VAR_5, VAR_4+VAR_5+1, (VAR_3-VAR_5-1)*sizeof(char *));
            }
            VAR_3 --;
        }
        else {
            VAR_5 ++;
        }
    }

    if (VAR_3 < 2) {
        FUNC_9("Usage: %s [-c] [-u] file1.yaml ...\n", VAR_4[0]);
        return 0;
    }

    for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5 ++)
    {
        FILE *VAR_8;
        yaml_parser_t VAR_9;
        yaml_emitter_t VAR_10;

        yaml_document_t VAR_11;
        unsigned char VAR_12[VAR_0+1];
        size_t VAR_13 = 0;
        yaml_document_t VAR_14[VAR_1];
        size_t VAR_15 = 0;
        int VAR_16 = 0;
        int VAR_17 = 0;
        int VAR_18 = 0;
        int VAR_19;
        FUNC_7(VAR_12, 0, VAR_0+1);
        FUNC_7(VAR_14, 0, VAR_1*sizeof(yaml_document_t));

        FUNC_9("[%d] Loading, dumping, and loading again '%s': ", VAR_5, VAR_4[VAR_5]);
        FUNC_4(VAR_2);

        VAR_8 = FUNC_5(VAR_4[VAR_5], "rb");
        FUNC_0(*VAR_8);

        FUNC_0(FUNC_23(&VAR_9));
        FUNC_25(&VAR_9, VAR_8);
        FUNC_0(FUNC_17(&VAR_10));
        if (VAR_6) {
            FUNC_19(&VAR_10, 1);
        }
        if (VAR_7) {
            FUNC_21(&VAR_10, 1);
        }
        FUNC_20(&VAR_10, VAR_12, VAR_0, &VAR_13);
        FUNC_18(&VAR_10);

        while (!VAR_16)
        {
            if (!FUNC_24(&VAR_9, &VAR_11)) {
                VAR_18 = 1;
                break;
            }

            VAR_16 = (!FUNC_12(&VAR_11));
            if (!VAR_16) {
                FUNC_0(VAR_15 < VAR_1);
                FUNC_0(FUNC_2(&(VAR_14[VAR_15++]), &VAR_11));
                FUNC_0(FUNC_15(&VAR_10, &VAR_11) ||
                        (FUNC_16(&VAR_10) && FUNC_8(VAR_4[VAR_5], VAR_12, VAR_13, VAR_17)));
                VAR_17 ++;
            }
            else {
                FUNC_11(&VAR_11);
            }
        }

        FUNC_22(&VAR_9);
        FUNC_0(!FUNC_3(VAR_8));
        FUNC_13(&VAR_10);
        FUNC_14(&VAR_10);

        if (!VAR_18)
        {
            VAR_17 = VAR_16 = 0;
            FUNC_0(FUNC_23(&VAR_9));
            FUNC_26(&VAR_9, VAR_12, VAR_13);

            while (!VAR_16)
            {
                FUNC_0(FUNC_24(&VAR_9, &VAR_11) || FUNC_8(VAR_4[VAR_5], VAR_12, VAR_13, VAR_17));
                VAR_16 = (!FUNC_12(&VAR_11));
                if (!VAR_16) {
                    FUNC_0(FUNC_1(VAR_14+VAR_17, &VAR_11) || FUNC_8(VAR_4[VAR_5], VAR_12, VAR_13, VAR_17));
                    VAR_17 ++;
                }
                FUNC_11(&VAR_11);
            }
            FUNC_22(&VAR_9);
        }

        for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19 ++) {
            FUNC_11(VAR_14+VAR_19);
        }

        FUNC_9("PASSED (length: %d)\n", VAR_13);
        FUNC_8(VAR_4[VAR_5], VAR_12, VAR_13, -1);
    }

    return 0;
}
