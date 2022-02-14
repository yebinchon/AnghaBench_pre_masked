
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yajl_status ;
typedef int yajl_handle ;
typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct stat {int st_mtime; } ;
typedef int ssize_t ;
typedef int mtime ;
typedef int destpath ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (char*) ;
 char* FUNC_10 () ;
 char* VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,scalar_t__*,scalar_t__*,char**) ;
 int FUNC_13 (int,int ,scalar_t__,char*) ;
 char* VAR_7 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int,char*,int) ;
 int FUNC_18 (char*,char*,size_t) ;
 char* FUNC_19 (char*,int ,int ) ;
 int FUNC_20 (char**,char*,char*) ;
 char* FUNC_21 (size_t) ;
 char* FUNC_22 (char*,size_t) ;
 int FUNC_23 (char*,struct stat*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_24 (char*,int,char*,int ) ;
 int * FUNC_25 (char*,char*) ;
 int FUNC_26 (int *) ;
 int VAR_10 ;
 int FUNC_27 (int *,int *,int *) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ,unsigned char const*,int) ;
 scalar_t__ VAR_11 ;

void FUNC_30(void) {
    if (FUNC_9("DISPLAY") == ((void*)0)) {
        FUNC_7(VAR_8, "\nYour DISPLAY environment variable is not set.\n");
        FUNC_7(VAR_8, "Are you running i3 via SSH or on a virtual console?\n");
        FUNC_7(VAR_8, "Try DISPLAY=:0 i3 --moreversion\n");
        FUNC_5(VAR_0);
    }

    char *VAR_12 = FUNC_19("I3_PID", VAR_4, VAR_5);
    if (VAR_12 == ((void*)0)) {

        FUNC_16("\nRunning version: < 4.2-200\n");
        FUNC_5(VAR_1);
    }



    FUNC_16("(Getting version from running i3, press ctrl-c to abort…)");
    FUNC_6(VAR_9);

    int VAR_13 = FUNC_11(((void*)0));
    if (FUNC_13(VAR_13, 0, VAR_2,
                         (uint8_t *)"") == -1)
        FUNC_3(VAR_0, "IPC: write()");

    uint32_t VAR_14;
    uint32_t VAR_15;
    uint8_t *VAR_16;
    int VAR_17;
    if ((VAR_17 = FUNC_12(VAR_13, &VAR_15, &VAR_14, &VAR_16)) != 0) {
        if (VAR_17 == -1)
            FUNC_3(VAR_0, "IPC: read()");
        FUNC_5(VAR_0);
    }

    if (VAR_15 != VAR_2)
        FUNC_4(VAR_0, "Got reply type %d, but expected %d (GET_VERSION)", VAR_15, VAR_2);

    yajl_handle VAR_18 = FUNC_27(&VAR_10, ((void*)0), ((void*)0));

    yajl_status VAR_19 = FUNC_29(VAR_18, (const unsigned char *)VAR_16, (int)VAR_14);
    if (VAR_19 != VAR_11)
        FUNC_4(VAR_0, "Could not parse my own reply. That's weird. reply is %.*s", (int)VAR_14, VAR_16);

    FUNC_16("\rRunning i3 version: %s (pid %s)\n", VAR_6, VAR_12);

    if (VAR_7) {
        struct stat VAR_20;
        time_t VAR_21;
        char VAR_22[64];
        FUNC_16("Loaded i3 config: %s", VAR_7);
        if (FUNC_23(VAR_7, &VAR_20) == -1) {
            FUNC_16("\n");
            FUNC_0("Cannot stat config file \"%s\"\n", VAR_7);
        } else {
            FUNC_24(VAR_22, sizeof(VAR_22), "%c", FUNC_14(&(VAR_20.st_mtime)));
            FUNC_26(&VAR_21);
            FUNC_16(" (Last modified: %s, %.f seconds ago)\n", VAR_22, FUNC_2(VAR_21, VAR_20.st_mtime));
        }
    }


    size_t VAR_23 = 1024;
    ssize_t VAR_24;
    char *VAR_25;
    char *VAR_26 = FUNC_21(VAR_23);

    FUNC_20(&VAR_25, "/proc/%d/exe", FUNC_10());

    while ((VAR_24 = FUNC_18(VAR_25, VAR_26, VAR_23)) == (ssize_t)VAR_23) {
        VAR_23 = VAR_23 * 2;
        VAR_26 = FUNC_22(VAR_26, VAR_23);
    }
    if (VAR_24 == -1)
        FUNC_3(VAR_0, "readlink(%s)", VAR_25);


    VAR_26[VAR_24] = '\0';

    FUNC_16("\n");
    FUNC_16("The i3 binary you just called: %s\n", VAR_26);

    FUNC_8(VAR_25);
    FUNC_20(&VAR_25, "/proc/%s/exe", VAR_12);

    while ((VAR_24 = FUNC_18(VAR_25, VAR_26, VAR_23)) == (ssize_t)VAR_23) {
        VAR_23 = VAR_23 * 2;
        VAR_26 = FUNC_22(VAR_26, VAR_23);
    }
    if (VAR_24 == -1)
        FUNC_3(VAR_0, "readlink(%s)", VAR_25);


    VAR_26[VAR_24] = '\0';



    if (FUNC_25(VAR_26, "(deleted)") != ((void*)0))
        FUNC_16("RUNNING BINARY DIFFERENT FROM BINARY ON DISK!\n");




    FUNC_8(VAR_25);
    FUNC_20(&VAR_25, "/proc/%s/cmdline", VAR_12);

    int VAR_27;
    if ((VAR_27 = FUNC_15(VAR_25, VAR_3)) == -1)
        FUNC_3(VAR_0, "open(%s)", VAR_25);
    if (FUNC_17(VAR_27, VAR_26, sizeof(VAR_26)) == -1)
        FUNC_3(VAR_0, "read(%s)", VAR_25);
    FUNC_1(VAR_27);

    FUNC_16("The i3 binary you are running: %s\n", VAR_26);

    FUNC_8(VAR_25);
    FUNC_8(VAR_26);


    FUNC_28(VAR_18);
    FUNC_8(VAR_16);
    FUNC_8(VAR_12);
}
