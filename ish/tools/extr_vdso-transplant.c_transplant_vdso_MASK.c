
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef scalar_t__ dword_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int,scalar_t__,unsigned long) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char*,scalar_t__*,scalar_t__*,char**) ;
 scalar_t__ FUNC_10 (char*,char*) ;

void FUNC_11(int VAR_3, const void *VAR_4, size_t VAR_5) {

    char VAR_6[32];
    FUNC_8(VAR_6, "/proc/%d/maps", VAR_3);
    FILE *VAR_7 = FUNC_4(VAR_6, "r");

    char VAR_8[256];
    dword_t VAR_9, VAR_10;
    while (FUNC_3(VAR_8, sizeof(VAR_8), VAR_7) != ((void*)0)) {
        char *VAR_11 = ((void*)0);
        FUNC_9(VAR_8, "%8x-%8x %*s %*s %*s %*s %ms\n", &VAR_9, &VAR_10, &VAR_11);
        if (VAR_11) {
            if (FUNC_10(VAR_11, "[vdso]") == 0) {
                FUNC_5(VAR_11);
                break;
            }
            FUNC_5(VAR_11);
        }
    }
    FUNC_2(VAR_7);


    for (dword_t VAR_12 = VAR_9; VAR_12 < VAR_10; VAR_12 += sizeof(unsigned long)) {
        unsigned long VAR_13 = 0;
        if (VAR_12 - VAR_9 < VAR_5) {
            VAR_13 = *(unsigned long *) ((char *) VAR_4 + VAR_12 - VAR_9);
        }
        if (FUNC_7(VAR_2, VAR_3, VAR_12, VAR_13) < 0) {
            FUNC_6("ptrace vdso poke"); FUNC_1(1);
        }
    }


    dword_t VAR_14 = *(dword_t *) ((char *) VAR_4 + 24) + VAR_9;

    FUNC_0(VAR_3, VAR_0, VAR_14);
    FUNC_0(VAR_3, VAR_1, VAR_9);
}
