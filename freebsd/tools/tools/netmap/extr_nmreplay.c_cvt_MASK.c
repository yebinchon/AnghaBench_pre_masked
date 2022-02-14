
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,void const*,int) ;

__attribute__((used)) static uint32_t
FUNC_3(const void *VAR_0, int VAR_1, char VAR_2)
{
    uint32_t VAR_3 = 0;
    if (VAR_1 != 2 && VAR_1 != 4) {
 FUNC_0("Invalid size %d\n", VAR_1);
 FUNC_1(1);
    }
    FUNC_2(&VAR_3, VAR_0, VAR_1);
    if (VAR_2) {
 unsigned char VAR_4, *VAR_5 = (unsigned char *)&VAR_3;
 int VAR_6;
        for (VAR_6 = 0; VAR_6 < VAR_1 / 2; VAR_6++) {
            VAR_4 = VAR_5[VAR_6];
            VAR_5[VAR_6] = VAR_5[VAR_1 - (1 + VAR_6)];
            VAR_5[VAR_1 - (1 + VAR_6)] = VAR_4;
        }
    }
    return VAR_3;
}
