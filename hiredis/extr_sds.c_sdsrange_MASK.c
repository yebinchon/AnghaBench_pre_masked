
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* sds ;


 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;
 size_t FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,size_t) ;

void FUNC_3(sds VAR_0, int VAR_1, int VAR_2) {
    size_t VAR_3, VAR_4 = FUNC_1(VAR_0);

    if (VAR_4 == 0) return;
    if (VAR_1 < 0) {
        VAR_1 = VAR_4+VAR_1;
        if (VAR_1 < 0) VAR_1 = 0;
    }
    if (VAR_2 < 0) {
        VAR_2 = VAR_4+VAR_2;
        if (VAR_2 < 0) VAR_2 = 0;
    }
    VAR_3 = (VAR_1 > VAR_2) ? 0 : (VAR_2-VAR_1)+1;
    if (VAR_3 != 0) {
        if (VAR_1 >= (signed)VAR_4) {
            VAR_3 = 0;
        } else if (VAR_2 >= (signed)VAR_4) {
            VAR_2 = VAR_4-1;
            VAR_3 = (VAR_1 > VAR_2) ? 0 : (VAR_2-VAR_1)+1;
        }
    } else {
        VAR_1 = 0;
    }
    if (VAR_1 && VAR_3) FUNC_0(VAR_0, VAR_0+VAR_1, VAR_3);
    VAR_0[VAR_3] = 0;
    FUNC_2(VAR_0,VAR_3);
}
