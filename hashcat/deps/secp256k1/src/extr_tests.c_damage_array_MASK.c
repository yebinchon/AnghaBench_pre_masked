
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_0, size_t *VAR_1) {
    int VAR_2;
    int VAR_3 = FUNC_1(3);
    if (VAR_3 < 1 && *VAR_1 > 3) {

        VAR_2 = FUNC_2(*VAR_1);
        FUNC_0(VAR_0 + VAR_2, VAR_0 + VAR_2 + 1, *VAR_1 - VAR_2 - 1);
        (*VAR_1)--;
        return;
    } else if (VAR_3 < 2 && *VAR_1 < 2048) {

        VAR_2 = FUNC_2(1 + *VAR_1);
        FUNC_0(VAR_0 + VAR_2 + 1, VAR_0 + VAR_2, *VAR_1 - VAR_2);
        VAR_0[VAR_2] = FUNC_1(8);
        (*VAR_1)++;
        return;
    } else if (VAR_3 < 4) {

        VAR_0[FUNC_2(*VAR_1)] += 1 + FUNC_2(255);
        return;
    } else {

        VAR_0[FUNC_2(*VAR_1)] ^= 1 << FUNC_1(3);
        return;
    }
}
