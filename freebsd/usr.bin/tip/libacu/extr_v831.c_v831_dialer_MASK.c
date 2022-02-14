
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 void* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (void*) ;
 char FUNC_3 (char*,char*) ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_16 ;
 int FUNC_6 (int,int ) ;
 void* FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int*) ;

int
FUNC_15(char *VAR_17, char *VAR_18)
{
        int VAR_19;
        int VAR_20;
 pid_t VAR_21;

        if (FUNC_1(FUNC_13(VAR_12)))
                FUNC_8("\nstarting call...");



        if ((VAR_0 = FUNC_7(VAR_18, VAR_5)) < 0) {
                if (VAR_15 == VAR_2)
                        FUNC_8("line busy...");
                else
                        FUNC_8("acu open error...");
                return (0);
        }
        if (FUNC_9(VAR_16)) {
                FUNC_6(VAR_14, VAR_8);
                FUNC_2(VAR_0);
                return (0);
        }
        FUNC_10(VAR_6, VAR_13);
        VAR_20 = 5 * FUNC_12(VAR_17);
        FUNC_0(VAR_20 < 30 ? 30 : VAR_20);
        if ((VAR_14 = FUNC_5()) == 0) {



                FUNC_10(VAR_6, VAR_11);
  FUNC_10(VAR_7, VAR_11);
                FUNC_10(VAR_9, VAR_11);
                FUNC_11(2);
                FUNC_4(FUNC_3(VAR_17, VAR_18) != 'A');
        }



        if ((VAR_4 = FUNC_7(VAR_1, VAR_5)) < 0) {



                if (VAR_15 == VAR_3)
                        FUNC_8("lost carrier...");
                else
                        FUNC_8("dialup line open failed...");
                FUNC_0(0);
                FUNC_6(VAR_14, VAR_8);
                FUNC_2(VAR_0);
                return (0);
        }
        FUNC_0(0);
        FUNC_10(VAR_6, VAR_10);
        while ((VAR_21 = FUNC_14(&VAR_19)) != VAR_14 && VAR_21 != -1)
                ;
        if (VAR_19) {
                FUNC_2(VAR_0);
                return (0);
        }
        return (1);
}
