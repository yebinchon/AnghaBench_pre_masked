
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int secp256k1_fe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (int) ;

void FUNC_6(void) {
    secp256k1_fe VAR_1[16], VAR_2[16], VAR_3[16];
    int VAR_4;

    FUNC_4(VAR_2, VAR_1, 0);
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        size_t VAR_5;
        size_t VAR_6 = FUNC_5(15) + 1;
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            FUNC_3(&VAR_1[VAR_5]);
        }
        FUNC_4(VAR_2, VAR_1, VAR_6);
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            FUNC_0(FUNC_2(&VAR_1[VAR_5], &VAR_2[VAR_5]));
        }
        FUNC_4(VAR_3, VAR_2, VAR_6);
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            FUNC_0(FUNC_1(&VAR_1[VAR_5], &VAR_3[VAR_5]));
        }
    }
}
