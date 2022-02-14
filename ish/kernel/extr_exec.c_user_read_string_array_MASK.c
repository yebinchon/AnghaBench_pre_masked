
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,char) ;

__attribute__((used)) static int FUNC_1(addr_t VAR_2, char *VAR_3, size_t VAR_4) {
    size_t VAR_5 = 0;
    size_t VAR_6 = 0;
    for (;;) {
        addr_t VAR_7;
        if (FUNC_0(VAR_2 + VAR_5 * sizeof(addr_t), VAR_7))
            return VAR_1;
        if (VAR_7 == 0)
            break;
        size_t VAR_8 = 0;
        for (;;) {
            if (VAR_6 >= VAR_4)
                return VAR_0;
            if (FUNC_0(VAR_7 + VAR_8, VAR_3[VAR_6]))
                return VAR_1;
            VAR_8++;
            VAR_6++;
            if (VAR_3[VAR_6 - 1] == '\0')
                break;
        }
        VAR_5++;
    }
    if (VAR_6 >= VAR_4)
        return VAR_0;
    VAR_3[VAR_6] = '\0';
    return 0;
}
