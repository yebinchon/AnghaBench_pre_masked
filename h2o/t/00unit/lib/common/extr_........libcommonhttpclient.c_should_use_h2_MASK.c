
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;



__attribute__((used)) static int FUNC_0(int8_t VAR_0, int8_t *VAR_1)
{

    if (*VAR_1 < 0)
        *VAR_1 = VAR_0 == 0 ? 0 : 50 / VAR_0;
    int VAR_2 = (((int)VAR_0 * *VAR_1) % 100) + VAR_0 >= 100;
    if (++*VAR_1 == 100)
        *VAR_1 = 0;
    return VAR_2;
}
