
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char* const*,char* const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char const*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int,int ) ;
 int VAR_7 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int*) ;

int FUNC_13(int VAR_8, const char *VAR_9, char *const VAR_10[], char *const VAR_11[]) {

    int VAR_12 = FUNC_7(0xffffffff);
    VAR_12 |= VAR_0;
    FUNC_7(VAR_12);

    int VAR_13 = FUNC_3();
    if (VAR_13 < 0) {
        FUNC_6("fork");
        FUNC_1(1);
    }
    if (VAR_13 == 0) {


        FUNC_11(FUNC_8(VAR_2, VAR_3), "rdtsc faulting");

        FUNC_11(FUNC_9(VAR_4, 0, ((void*)0), ((void*)0)), "ptrace traceme");

        for (int VAR_14 = 0; VAR_14 < VAR_5 - 1; VAR_14++)
            FUNC_10(VAR_14, VAR_6);
        FUNC_11(FUNC_2(FUNC_5(VAR_8, VAR_9, VAR_1), VAR_10, VAR_11), "execve");
    } else {

        int VAR_15;
        FUNC_11(FUNC_12(&VAR_15), "wait");
        if (!FUNC_0(VAR_15)) {
            FUNC_4(VAR_7, "child failed to start\n");
            FUNC_1(1);
        }
    }
    return VAR_13;
}
