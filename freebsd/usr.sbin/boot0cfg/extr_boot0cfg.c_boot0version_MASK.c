
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int
FUNC_1(const u_int8_t *VAR_1)
{

    int VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 != 0)
        return VAR_2 << 8;


    return *(const int *)(VAR_1 + VAR_0) & 0xffff;
}
