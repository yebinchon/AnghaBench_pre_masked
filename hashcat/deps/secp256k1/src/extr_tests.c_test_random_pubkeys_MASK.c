
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_ge ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,size_t) ;
 int FUNC_4 (int *,unsigned char*,size_t*,int) ;
 int FUNC_5 (unsigned char*) ;
 size_t FUNC_6 (int) ;

void FUNC_7(void) {
    secp256k1_ge VAR_0;
    secp256k1_ge VAR_1;
    unsigned char VAR_2[65];

    size_t VAR_3 = FUNC_6(2) == 0 ? 65 : 33;
    if (FUNC_6(2) == 0) {
        VAR_3 = FUNC_6(6);
    }
    if (VAR_3 == 65) {
      VAR_2[0] = FUNC_6(1) ? 4 : (FUNC_6(1) ? 6 : 7);
    } else {
      VAR_2[0] = FUNC_6(1) ? 2 : 3;
    }
    if (FUNC_6(3) == 0) {
        VAR_2[0] = FUNC_6(8);
    }
    if (VAR_3 > 1) {
        FUNC_5(&VAR_2[1]);
    }
    if (VAR_3 > 33) {
        FUNC_5(&VAR_2[33]);
    }
    if (FUNC_3(&VAR_0, VAR_2, VAR_3)) {
        unsigned char VAR_4[65];
        unsigned char VAR_5;
        int VAR_6;
        size_t VAR_7 = VAR_3;
        VAR_5 = VAR_2[0];

        FUNC_0(FUNC_4(&VAR_0, VAR_4, &VAR_7, VAR_3 == 33));
        FUNC_0(VAR_7 == VAR_3);
        FUNC_0(FUNC_2(&VAR_2[1], &VAR_4[1], VAR_3-1) == 0);

        if ((VAR_2[0] != 6) && (VAR_2[0] != 7)) {
            FUNC_0(VAR_2[0] == VAR_4[0]);
        }
        VAR_7 = 65;
        FUNC_0(FUNC_4(&VAR_0, VAR_2, &VAR_7, 0));
        FUNC_0(VAR_7 == 65);
        FUNC_0(FUNC_3(&VAR_1, VAR_2, VAR_7));
        FUNC_1(&VAR_0,&VAR_1);

        VAR_2[0] = FUNC_6(1) ? 6 : 7;
        VAR_6 = FUNC_3(&VAR_1, VAR_2, VAR_7);
        if (VAR_5 == 2 || VAR_5 == 3) {
            if (VAR_2[0] == VAR_5 + 4) {
              FUNC_0(VAR_6);
            } else {
              FUNC_0(!VAR_6);
            }
        }
        if (VAR_6) {
            FUNC_1(&VAR_0,&VAR_1);
            FUNC_0(FUNC_4(&VAR_0, VAR_4, &VAR_7, 0));
            FUNC_0(FUNC_2(&VAR_2[1], &VAR_4[1], 64) == 0);
        }
    }
}
