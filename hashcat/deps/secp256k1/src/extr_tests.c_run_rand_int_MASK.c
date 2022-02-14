
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ss ;
typedef int ms ;


 int FUNC_0 (int const,int const) ;

void FUNC_1(void) {
    static const uint32_t VAR_0[] = {1, 3, 17, 1000, 13771, 999999, 33554432};
    static const uint32_t VAR_1[] = {1, 3, 6, 9, 13, 31, 64};
    unsigned int VAR_2, VAR_3;
    for (VAR_2 = 0; VAR_2 < sizeof(VAR_0) / sizeof(VAR_0[0]); VAR_2++) {
        for (VAR_3 = 0; VAR_3 < sizeof(VAR_1) / sizeof(VAR_1[0]); VAR_3++) {
            FUNC_0(VAR_0[VAR_2] * VAR_1[VAR_3], VAR_1[VAR_3]);
        }
    }
}
