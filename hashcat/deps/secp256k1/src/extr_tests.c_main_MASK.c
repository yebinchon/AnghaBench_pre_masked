
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint64_t ;
typedef int seed16 ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned char**,int,int,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int FUNC_42 () ;
 int FUNC_43 (int) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int ,unsigned char*) ;
 int FUNC_46 (unsigned char*) ;
 scalar_t__ FUNC_47 (int) ;
 int FUNC_48 (unsigned char*) ;
 int FUNC_49 (char const*,char*,unsigned short*) ;
 int VAR_4 ;
 int FUNC_50 (char*,int *,int ) ;
 unsigned char FUNC_51 (int *) ;

int FUNC_52(int VAR_5, char **VAR_6) {
    unsigned char VAR_7[16] = {0};
    unsigned char VAR_8[32] = {0};

    if (VAR_5 > 1) {
        VAR_2 = FUNC_50(VAR_6[1], ((void*)0), 0);
    }


    if (VAR_5 > 2) {
        int VAR_9 = 0;
        const char* VAR_10 = VAR_6[2];
        while (VAR_9 < 16 && VAR_10[0] != 0 && VAR_10[1] != 0) {
            unsigned short VAR_11;
            if ((FUNC_49(VAR_10, "%2hx", &VAR_11)) == 1) {
                VAR_7[VAR_9] = VAR_11;
            } else {
                break;
            }
            VAR_10 += 2;
            VAR_9++;
        }
    } else {
        FILE *VAR_12 = FUNC_2("/dev/urandom", "r");
        if ((VAR_12 == ((void*)0)) || FUNC_4(&VAR_7, 1, sizeof(VAR_7), VAR_12) != sizeof(VAR_7)) {
            uint64_t VAR_13 = FUNC_51(((void*)0)) * (uint64_t)1337;
            FUNC_3(VAR_4, "WARNING: could not read 16 bytes from /dev/urandom; falling back to insecure PRNG\n");
            VAR_7[0] ^= VAR_13;
            VAR_7[1] ^= VAR_13 >> 8;
            VAR_7[2] ^= VAR_13 >> 16;
            VAR_7[3] ^= VAR_13 >> 24;
            VAR_7[4] ^= VAR_13 >> 32;
            VAR_7[5] ^= VAR_13 >> 40;
            VAR_7[6] ^= VAR_13 >> 48;
            VAR_7[7] ^= VAR_13 >> 56;
        }
        if (VAR_12) {
            FUNC_1(VAR_12);
        }
    }
    FUNC_48(VAR_7);

    FUNC_5("test count = %i\n", VAR_2);
    FUNC_5("random seed = %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n", VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3], VAR_7[4], VAR_7[5], VAR_7[6], VAR_7[7], VAR_7[8], VAR_7[9], VAR_7[10], VAR_7[11], VAR_7[12], VAR_7[13], VAR_7[14], VAR_7[15]);


    FUNC_6(0);
    FUNC_6(1);
    FUNC_38();
    VAR_3 = FUNC_43(VAR_0 | VAR_1);
    if (FUNC_47(1)) {
        FUNC_46(VAR_8);
        FUNC_0(FUNC_45(VAR_3, FUNC_47(1) ? VAR_8 : ((void*)0)));
    }

    FUNC_32();
    FUNC_33();

    FUNC_39();
    FUNC_29();
    FUNC_36();



    FUNC_30();



    FUNC_37();


    FUNC_23();
    FUNC_25();
    FUNC_24();
    FUNC_26();
    FUNC_22();
    FUNC_40();
    FUNC_41();


    FUNC_27();
    FUNC_28();


    FUNC_42();
    FUNC_31();
    FUNC_16();
    FUNC_18();
    FUNC_19();
    FUNC_17();
    FUNC_20();
    FUNC_7();







    FUNC_8();


    FUNC_15();







    FUNC_34();
    FUNC_10();
    FUNC_14();
    FUNC_12();
    FUNC_11();
    FUNC_46(VAR_8);
    FUNC_5("random run = %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\n", VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7], VAR_8[8], VAR_8[9], VAR_8[10], VAR_8[11], VAR_8[12], VAR_8[13], VAR_8[14], VAR_8[15]);


    FUNC_44(VAR_3);

    FUNC_5("no problems found\n");
    return 0;
}
