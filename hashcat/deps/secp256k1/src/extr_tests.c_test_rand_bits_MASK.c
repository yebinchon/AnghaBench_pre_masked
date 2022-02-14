
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int mults ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_0, int VAR_1) {


    static const unsigned int VAR_2[7] = {1, 30, 73, 156, 322, 653, 1316};


    static const uint32_t VAR_3[6] = {1, 3, 21, 289, 0x9999, 0x80402011};

    unsigned int VAR_4 = VAR_1 > 6 ? 6 : VAR_1;
    unsigned int VAR_5 = VAR_1 - VAR_4;


    uint64_t VAR_6[6][27] = {{0}};
    unsigned int VAR_7, VAR_8, VAR_9;


    for (VAR_7 = 0; VAR_7 < VAR_2[VAR_4]; VAR_7++) {
        uint32_t VAR_10 = (VAR_0 ? FUNC_1() : FUNC_2(VAR_1));
        FUNC_0((((uint64_t)VAR_10) >> VAR_1) == 0);
        for (VAR_9 = 0; VAR_9 < sizeof(VAR_3) / sizeof(VAR_3[0]); VAR_9++) {
            uint32_t VAR_11 = VAR_10 * VAR_3[VAR_9];
            for (VAR_8 = 0; VAR_8 <= VAR_5; VAR_8++) {
                VAR_6[VAR_9][VAR_8] |= (((uint64_t)1) << ((VAR_11 >> VAR_8) & ((1 << VAR_4) - 1)));
            }
        }
    }
    for (VAR_9 = 0; VAR_9 < sizeof(VAR_3) / sizeof(VAR_3[0]); VAR_9++) {
        for (VAR_8 = 0; VAR_8 <= VAR_5; VAR_8++) {

            FUNC_0(((~VAR_6[VAR_9][VAR_8]) << (64 - (1 << VAR_4))) == 0);
        }
    }
}
