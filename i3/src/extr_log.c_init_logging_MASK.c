
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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (char*) ;
 int * VAR_9 ;
 int FUNC_7 () ;
 long long VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 char* FUNC_8 (int ) ;
 long long FUNC_9 (int ) ;
 int FUNC_10 (int*,int,long long*,size_t*,int *,int ) ;

void FUNC_11(void) {
    if (!VAR_8) {
        if (!(VAR_8 = FUNC_6("errorlog")))
            FUNC_5(VAR_13, "Could not initialize errorlog\n");
        else {
            VAR_7 = FUNC_4(VAR_8, "w");
            if (!VAR_7) {
                FUNC_5(VAR_13, "Could not initialize errorlog on %s: %s\n",
                        VAR_8, FUNC_8(VAR_6));
            } else {
                if (FUNC_2(FUNC_3(VAR_7), VAR_2, VAR_1)) {
                    FUNC_5(VAR_13, "Could not set close-on-exec flag\n");
                }
            }
        }
    }
    if (VAR_10 == 0) {





        VAR_10 = (long long)FUNC_9(VAR_5) *
                             FUNC_9(VAR_4);

    }



    if (VAR_12 > 0 && VAR_9 == ((void*)0))
        FUNC_7();
    else if (VAR_12 <= 0 && VAR_9)
        FUNC_1();
    FUNC_0(VAR_11);
}
