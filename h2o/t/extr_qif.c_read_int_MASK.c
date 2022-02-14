
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static uint64_t FUNC_1(FILE *VAR_2, size_t VAR_3)
{
    uint64_t VAR_4 = 0;
    size_t VAR_5;
    int VAR_6;
    for (VAR_5 = 0; VAR_5 != VAR_3; ++VAR_5) {
        if ((VAR_6 = FUNC_0(VAR_2)) == VAR_0)
            return VAR_1;
        VAR_4 = (VAR_4 << 8) | VAR_6;
    }
    return VAR_4;
}
