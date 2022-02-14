
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;


 int FUNC_0 (unsigned char*,int ,size_t) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, size_t VAR_1) {
    size_t VAR_2 = 0;
    FUNC_0(VAR_0, 0, VAR_1);
    while (VAR_2 < VAR_1 * 8) {
        int VAR_3;
        uint32_t VAR_4;
        VAR_3 = 1 + (FUNC_1(6) * FUNC_1(5) + 16) / 31;
        VAR_4 = FUNC_1(1);
        while (VAR_3 > 0 && VAR_2 < VAR_1 * 8) {
            VAR_0[VAR_2 / 8] |= VAR_4 << (VAR_2 % 8);
            VAR_3--;
            VAR_2++;
        }
    }
}
