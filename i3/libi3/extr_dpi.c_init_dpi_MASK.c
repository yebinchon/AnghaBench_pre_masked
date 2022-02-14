
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_xrm_database_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 double VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (double) ;
 double FUNC_5 (char*,char**) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int *,char**) ;

void FUNC_9(void) {
    xcb_xrm_database_t *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);

    if (VAR_1 == ((void*)0)) {
        goto init_dpi_end;
    }

    VAR_3 = FUNC_7(VAR_1);
    if (VAR_3 == ((void*)0)) {
        FUNC_1("Failed to open the resource database.\n");
        goto init_dpi_end;
    }

    FUNC_8(VAR_3, "Xft.dpi", ((void*)0), &VAR_4);
    if (VAR_4 == ((void*)0)) {
        FUNC_0("Resource Xft.dpi not specified, skipping.\n");
        goto init_dpi_end;
    }

    char *VAR_5;
    double VAR_6 = FUNC_5(VAR_4, &VAR_5);
    if (VAR_6 == VAR_0 || VAR_2 < 0 || *VAR_5 != '\0' || VAR_5 == VAR_4) {
        FUNC_1("Xft.dpi = %s is an invalid number and couldn't be parsed.\n", VAR_4);
        VAR_2 = 0;
        goto init_dpi_end;
    }
    VAR_2 = FUNC_4(VAR_6);

    FUNC_0("Found Xft.dpi = %ld.\n", VAR_2);

init_dpi_end:
    FUNC_2(VAR_4);

    if (VAR_3 != ((void*)0)) {
        FUNC_6(VAR_3);
    }

    if (VAR_2 == 0) {
        FUNC_0("Using fallback for calculating DPI.\n");
        VAR_2 = FUNC_3();
        FUNC_0("Using dpi = %ld\n", VAR_2);
    }
}
