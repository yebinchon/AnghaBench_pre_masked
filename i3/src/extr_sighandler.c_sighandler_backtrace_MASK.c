
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (char**,char*,char*,...) ;
 char** VAR_3 ;
 int FUNC_15 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_16(void) {
    char *VAR_4 = FUNC_10("TMPDIR");
    if (VAR_4 == ((void*)0))
        VAR_4 = "/tmp";

    pid_t VAR_5 = FUNC_11();

    char *VAR_6 = ((void*)0);
    int VAR_7 = 0;


    do {
        FUNC_2(VAR_6);
        FUNC_14(&VAR_6, "%s/i3-backtrace.%d.%d.txt", VAR_4, VAR_5, VAR_7);
        VAR_7++;
    } while (FUNC_12(VAR_6));

    pid_t VAR_8 = FUNC_9();
    if (VAR_8 < 0) {
        FUNC_0("Failed to fork for GDB\n");
        return -1;
    } else if (VAR_8 == 0) {

        int VAR_9[2],
            VAR_10[2];

        if (FUNC_13(VAR_9) == -1) {
            FUNC_1("Failed to init stdin_pipe\n");
            return -1;
        }
        if (FUNC_13(VAR_10) == -1) {
            FUNC_1("Failed to init stdout_pipe\n");
            return -1;
        }




        FUNC_5(VAR_1);
        FUNC_5(VAR_2);
        FUNC_5(VAR_0);




        FUNC_6(VAR_9[0], VAR_1);
        FUNC_6(VAR_10[1], VAR_2);

        char *VAR_11, *VAR_12;
        FUNC_14(&VAR_11, "%d", VAR_5);
        FUNC_14(&VAR_12, "set logging file %s", VAR_6);

        char *VAR_13[] = {
            "gdb",
            VAR_3[0],
            "-p",
            VAR_11,
            "-batch",
            "-nx",
            "-ex", VAR_12,
            "-ex", "set logging on",
            "-ex", "bt full",
            "-ex", "quit",
            ((void*)0)};
        FUNC_7(VAR_13[0], VAR_13);
        FUNC_0("Failed to exec GDB\n");
        FUNC_8(1);
    }
    int VAR_14 = 0;

    FUNC_15(VAR_8, &VAR_14, 0);


    if (!FUNC_4(VAR_14) || FUNC_3(VAR_14) != 0) {
        FUNC_0("GDB did not run properly\n");
        return -1;
    } else if (!FUNC_12(VAR_6)) {
        FUNC_0("GDB executed successfully, but no backtrace was generated\n");
        return -1;
    }
    return 1;
}
