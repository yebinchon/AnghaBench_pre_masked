
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yajl_gen ;
struct TYPE_2__ {int * restart_state_path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (char*) ;
 int VAR_10 ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,unsigned char const*,size_t) ;
 int FUNC_15 (int (*) (char*),...) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static char *FUNC_17(void) {
    FUNC_11(VAR_1, "C");
    yajl_gen VAR_11 = FUNC_16(((void*)0));

    FUNC_4(VAR_11, VAR_8, 1);

    FUNC_11(VAR_1, "");

    const unsigned char *VAR_12;
    size_t VAR_13;
    FUNC_15(VAR_10, &VAR_12, &VAR_13);



    char *VAR_14;
    if (VAR_7.restart_state_path == ((void*)0)) {
        VAR_14 = FUNC_6("restart-state");
        if (!VAR_14)
            return ((void*)0);
    } else {
        VAR_14 = FUNC_10(VAR_7.restart_state_path);
    }



    char *VAR_15 = FUNC_12(VAR_14);
    char *VAR_16 = FUNC_3(VAR_15);
    FUNC_0("Creating \"%s\" for storing the restart layout\n", VAR_16);
    if (FUNC_7(VAR_16, VAR_0) != 0)
        FUNC_1("Could not create \"%s\" for storing the restart layout, layout will be lost.\n", VAR_16);
    FUNC_5(VAR_15);

    int VAR_17 = FUNC_8(VAR_14, VAR_4 | VAR_2 | VAR_3, VAR_5 | VAR_6);
    if (VAR_17 == -1) {
        FUNC_9("open()");
        FUNC_5(VAR_14);
        return ((void*)0);
    }

    if (FUNC_14(VAR_17, VAR_12, VAR_13) == -1) {
        FUNC_1("Could not write restart layout to \"%s\", layout will be lost: %s\n", VAR_14, FUNC_13(VAR_9));
        FUNC_5(VAR_14);
        FUNC_2(VAR_17);
        return ((void*)0);
    }

    FUNC_2(VAR_17);

    if (VAR_13 > 0) {
        FUNC_0("layout: %.*s\n", (int)VAR_13, VAR_12);
    }

    FUNC_15(FUNC_5);

    return VAR_14;
}
