
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Y; int T; int X; int Z; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,unsigned char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (unsigned char const*) ;
 int FUNC_11 (int ,int ,int ) ;

int
FUNC_12(ge25519_p3 *VAR_1, const unsigned char *VAR_2)
{
    fe25519 VAR_3;
    fe25519 VAR_4;
    fe25519 VAR_5;
    fe25519 VAR_6;
    fe25519 VAR_7, VAR_8;
    fe25519 VAR_9, VAR_10;
    fe25519 VAR_11;
    fe25519 VAR_12;
    int VAR_13;

    if (FUNC_10(VAR_2) == 0) {
        return -1;
    }
    FUNC_3(VAR_5, VAR_2);
    FUNC_8(VAR_6, VAR_5);

    FUNC_0(VAR_7);
    FUNC_9(VAR_7, VAR_7, VAR_6);
    FUNC_8(VAR_9, VAR_7);

    FUNC_0(VAR_8);
    FUNC_2(VAR_8, VAR_8, VAR_6);
    FUNC_8(VAR_10, VAR_8);

    FUNC_6(VAR_11, VAR_0, VAR_9);
    FUNC_7(VAR_11, VAR_11);
    FUNC_9(VAR_11, VAR_11, VAR_10);

    FUNC_6(VAR_12, VAR_11, VAR_10);

    FUNC_0(VAR_4);
    VAR_13 = FUNC_11(VAR_3, VAR_4, VAR_12);
    FUNC_6(VAR_1->X, VAR_3, VAR_8);
    FUNC_6(VAR_1->Y, VAR_3, VAR_1->X);
    FUNC_6(VAR_1->Y, VAR_1->Y, VAR_11);

    FUNC_6(VAR_1->X, VAR_1->X, VAR_5);
    FUNC_2(VAR_1->X, VAR_1->X, VAR_1->X);
    FUNC_1(VAR_1->X, VAR_1->X);
    FUNC_6(VAR_1->Y, VAR_7, VAR_1->Y);
    FUNC_0(VAR_1->Z);
    FUNC_6(VAR_1->T, VAR_1->X, VAR_1->Y);

    return - ((1 - VAR_13) |
              FUNC_4(VAR_1->T) | FUNC_5(VAR_1->Y));
}
