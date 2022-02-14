
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; int X; int T; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (unsigned char*,int ) ;
 int VAR_0 ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_1 ;

void
FUNC_12(unsigned char *VAR_2, const ge25519_p3 *VAR_3)
{
    fe25519 VAR_4, VAR_5;
    fe25519 VAR_6;
    fe25519 VAR_7;
    fe25519 VAR_8;
    fe25519 VAR_9, VAR_10;
    fe25519 VAR_11;
    fe25519 VAR_12;
    fe25519 VAR_13;
    fe25519 VAR_14, VAR_15;
    fe25519 VAR_16;
    fe25519 VAR_17, VAR_18;
    fe25519 VAR_19;
    fe25519 VAR_20;
    fe25519 VAR_21;
    int VAR_22;

    FUNC_2(VAR_14, VAR_3->Z, VAR_3->Y);
    FUNC_9(VAR_21, VAR_3->Z, VAR_3->Y);
    FUNC_7(VAR_14, VAR_14, VAR_21);
    FUNC_7(VAR_15, VAR_3->X, VAR_3->Y);

    FUNC_8(VAR_16, VAR_15);
    FUNC_7(VAR_16, VAR_14, VAR_16);

    FUNC_0(VAR_11);
    (void) FUNC_11(VAR_8, VAR_11, VAR_16);
    FUNC_7(VAR_4, VAR_8, VAR_14);
    FUNC_7(VAR_5, VAR_8, VAR_15);
    FUNC_7(VAR_20, VAR_4, VAR_5);
    FUNC_7(VAR_20, VAR_20, VAR_3->T);

    FUNC_7(VAR_9, VAR_3->X, VAR_1);
    FUNC_7(VAR_10, VAR_3->Y, VAR_1);
    FUNC_7(VAR_7, VAR_4, VAR_0);

    FUNC_7(VAR_13, VAR_3->T, VAR_20);
    VAR_22 = FUNC_6(VAR_13);

    FUNC_5(VAR_17, VAR_3->X);
    FUNC_5(VAR_18, VAR_3->Y);
    FUNC_5(VAR_6, VAR_5);

    FUNC_3(VAR_17, VAR_10, VAR_22);
    FUNC_3(VAR_18, VAR_9, VAR_22);
    FUNC_3(VAR_6, VAR_7, VAR_22);

    FUNC_7(VAR_19, VAR_17, VAR_20);
    FUNC_4(VAR_18, VAR_18, FUNC_6(VAR_19));

    FUNC_9(VAR_12, VAR_3->Z, VAR_18);
    FUNC_7(VAR_12, VAR_6, VAR_12);
    FUNC_1(VAR_12, VAR_12);
    FUNC_10(VAR_2, VAR_12);
}
