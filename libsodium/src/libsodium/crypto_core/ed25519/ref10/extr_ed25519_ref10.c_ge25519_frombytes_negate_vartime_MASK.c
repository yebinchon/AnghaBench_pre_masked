
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Y; int X; int T; int Z; } ;
typedef TYPE_1__ ge25519_p3 ;
typedef int fe25519 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,unsigned char const*) ;
 unsigned char const FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_1 ;

int
FUNC_10(ge25519_p3 *VAR_2, const unsigned char *VAR_3)
{
    fe25519 VAR_4;
    fe25519 VAR_5;
    fe25519 VAR_6;
    fe25519 VAR_7;
    fe25519 VAR_8, VAR_9;

    FUNC_2(VAR_2->Y, VAR_3);
    FUNC_0(VAR_2->Z);
    FUNC_8(VAR_4, VAR_2->Y);
    FUNC_5(VAR_5, VAR_4, VAR_0);
    FUNC_9(VAR_4, VAR_4, VAR_2->Z);
    FUNC_1(VAR_5, VAR_5, VAR_2->Z);

    FUNC_8(VAR_6, VAR_5);
    FUNC_5(VAR_6, VAR_6, VAR_5);
    FUNC_8(VAR_2->X, VAR_6);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_5);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_4);

    FUNC_7(VAR_2->X, VAR_2->X);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_6);
    FUNC_5(VAR_2->X, VAR_2->X, VAR_4);

    FUNC_8(VAR_7, VAR_2->X);
    FUNC_5(VAR_7, VAR_7, VAR_5);
    FUNC_9(VAR_8, VAR_7, VAR_4);
    if (FUNC_4(VAR_8) == 0) {
        FUNC_1(VAR_9, VAR_7, VAR_4);
        if (FUNC_4(VAR_9) == 0) {
            return -1;
        }
        FUNC_5(VAR_2->X, VAR_2->X, VAR_1);
    }

    if (FUNC_3(VAR_2->X) == (VAR_3[31] >> 7)) {
        FUNC_6(VAR_2->X, VAR_2->X);
    }
    FUNC_5(VAR_2->T, VAR_2->X, VAR_2->Y);

    return 0;
}
