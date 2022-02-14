
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int,int) ;
 scalar_t__ FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int VAR_8 ;

int FUNC_9() {
    VAR_3 = FUNC_1();

    FUNC_6(VAR_3, &VAR_6, VAR_0, 0);
    FUNC_8(&VAR_6, 0);

    if (FUNC_5(&VAR_6, &VAR_8, &VAR_2)) {
        FUNC_0(VAR_4, "Could not get TTY information\n");
        FUNC_7();
        return 1;
    }

    FUNC_0(VAR_4, "Width %d, height %d\n", VAR_8, VAR_2);
    FUNC_3(VAR_3, &VAR_5);
    FUNC_4(&VAR_5, VAR_7, 200, 200);
    return FUNC_2(VAR_3, VAR_1);
}
