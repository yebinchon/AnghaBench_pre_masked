
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int off_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,char**) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int,char*,int) ;
 char* FUNC_10 (int,int) ;
 char* FUNC_11 (char*,int) ;
 int VAR_0 ;
 int FUNC_12 (int*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,char*,int ) ;

__attribute__((used)) static char *FUNC_15(char *VAR_1, off_t VAR_2) {
    int VAR_3[2];
    int VAR_4[2];

    if (FUNC_8(VAR_3) != 0 ||
        FUNC_8(VAR_4) != 0) {
        FUNC_13("migrate_config: Could not create pipes");
        return ((void*)0);
    }

    pid_t VAR_5 = FUNC_6();
    if (VAR_5 == -1) {
        FUNC_13("Could not fork()");
        return ((void*)0);
    }


    if (VAR_5 == 0) {

        FUNC_3(VAR_3[1]);
        FUNC_4(VAR_3[0], 0);


        FUNC_3(VAR_4[0]);
        FUNC_4(VAR_4[1], 1);

        static char *VAR_6[] = {
            ((void*)0),
            ((void*)0)};
        FUNC_5("i3-migrate-config-to-v4", VAR_6);
    }




    FUNC_3(VAR_3[0]);



    if (FUNC_14(VAR_3[1], VAR_1, VAR_2) == -1) {
        FUNC_13("Could not write to pipe");
        return ((void*)0);
    }
    FUNC_3(VAR_3[1]);


    FUNC_3(VAR_4[1]);


    int VAR_7 = 65535;
    char *VAR_8 = FUNC_10(VAR_7, 1);
    int VAR_9 = 0, VAR_10;
    do {
        if (VAR_9 == VAR_7) {
            VAR_7 += 65535;
            VAR_8 = FUNC_11(VAR_8, VAR_7);
        }
        VAR_10 = FUNC_9(VAR_4[0], VAR_8 + VAR_9, VAR_7 - VAR_9);
        if (VAR_10 == -1) {
            FUNC_13("Cannot read from pipe");
            FUNC_0(VAR_8);
            return ((void*)0);
        }
        VAR_9 += VAR_10;
    } while (VAR_10 > 0);


    int VAR_11;
    FUNC_12(&VAR_11);
    if (!FUNC_2(VAR_11)) {
        FUNC_7(VAR_0, "Child did not terminate normally, using old config file (will lead to broken behaviour)\n");
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    int VAR_12 = FUNC_1(VAR_11);
    if (VAR_12 != 0) {
        FUNC_7(VAR_0, "Migration process exit code was != 0\n");
        if (VAR_12 == 2) {
            FUNC_7(VAR_0, "could not start the migration script\n");

        } else if (VAR_12 == 1) {
            FUNC_7(VAR_0, "This already was a v4 config. Please add the following line to your config file:\n");
            FUNC_7(VAR_0, "# i3 config file (v4)\n");

        }
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    return VAR_8;
}
