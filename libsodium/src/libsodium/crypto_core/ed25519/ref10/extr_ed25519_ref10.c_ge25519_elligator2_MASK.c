
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int ge25519_p1p1 ;
typedef int * fe25519 ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int * const) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (unsigned char*,int *) ;
 scalar_t__ FUNC_13 (int *,unsigned char*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (unsigned char*,int *) ;

__attribute__((used)) static void
FUNC_19(unsigned char VAR_1[32], const fe25519 VAR_2, const unsigned char VAR_3)
{
    fe25519 VAR_4;
    fe25519 VAR_5;
    fe25519 VAR_6;
    fe25519 VAR_7, VAR_8, VAR_9;
    ge25519_p3 VAR_10;
    ge25519_p1p1 VAR_11;
    ge25519_p2 VAR_12;
    unsigned int VAR_13;

    FUNC_10(VAR_6, VAR_2);
    VAR_6[0]++;
    FUNC_6(VAR_6, VAR_6);
    FUNC_7(VAR_7, VAR_0, VAR_6);
    FUNC_8(VAR_7, VAR_7);

    FUNC_9(VAR_8, VAR_7);
    FUNC_7(VAR_9, VAR_7, VAR_8);
    FUNC_4(VAR_4, VAR_9, VAR_7);
    FUNC_7(VAR_8, VAR_8, VAR_0);
    FUNC_4(VAR_4, VAR_8, VAR_4);

    FUNC_1(VAR_4, VAR_4);

    FUNC_12(VAR_1, VAR_4);
    VAR_13 = VAR_1[1] & 1;
    FUNC_8(VAR_5, VAR_7);
    FUNC_5(VAR_7, VAR_5, VAR_13);
    FUNC_2(VAR_8);
    FUNC_5(VAR_8, VAR_0, VAR_13);
    FUNC_11(VAR_7, VAR_7, VAR_8);


    {
        fe25519 VAR_14;
        fe25519 VAR_15;
        fe25519 VAR_16;
        fe25519 VAR_17;
        fe25519 VAR_18;

        FUNC_3(VAR_14);
        FUNC_4(VAR_15, VAR_7, VAR_14);
        FUNC_11(VAR_17, VAR_7, VAR_14);
        FUNC_6(VAR_16, VAR_15);
        FUNC_7(VAR_18, VAR_17, VAR_16);
        FUNC_12(VAR_1, VAR_18);
    }


    VAR_1[31] |= VAR_3;
    if (FUNC_13(&VAR_10, VAR_1) != 0) {
        FUNC_0();
    }


    FUNC_17(&VAR_11, &VAR_10);
    FUNC_14(&VAR_12, &VAR_11);
    FUNC_16(&VAR_11, &VAR_12);
    FUNC_14(&VAR_12, &VAR_11);
    FUNC_16(&VAR_11, &VAR_12);
    FUNC_15(&VAR_10, &VAR_11);

    FUNC_18(VAR_1, &VAR_10);
}
