
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(uint8_t * VAR_3, uint8_t * VAR_4, uint8_t * VAR_5, int VAR_6) {
        uint8_t VAR_7[VAR_1];
        uint8_t VAR_8 = 0;
        uint8_t VAR_9;
        int VAR_10;
        int VAR_11 = VAR_0;
        uint8_t VAR_12;
        uint8_t VAR_13 = 0;
        FUNC_0(VAR_7, VAR_2, VAR_1);
        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
                VAR_8 += VAR_7[VAR_10] + VAR_3[VAR_10];
                VAR_9 = VAR_7[VAR_10];
                VAR_7[VAR_10] = VAR_7[VAR_8];
                VAR_7[VAR_8] = VAR_9;
        }
        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
                VAR_9 = VAR_11 - VAR_4[VAR_11-1];
                VAR_12 = 0;
                while(VAR_9 != VAR_7[VAR_12]) {
                        VAR_12++;
                }
                VAR_13 += VAR_7[VAR_11];
                VAR_12 -= (VAR_8+VAR_13);
                VAR_5[VAR_10] = VAR_12;
                VAR_11++;
        }
        return;
}
