
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint64_t ;
typedef int FILE ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, uint64_t VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 != VAR_2; ++VAR_3)
        FUNC_0((uint8_t)(VAR_1 >> ((VAR_2 - VAR_3 - 1) * 8)), VAR_0);
}
