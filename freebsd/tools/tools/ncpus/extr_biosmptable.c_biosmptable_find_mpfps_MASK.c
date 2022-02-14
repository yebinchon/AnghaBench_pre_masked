
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int * mpfps_t ;
typedef int addr ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static mpfps_t
FUNC_3(void)
{
    mpfps_t VAR_0;
    uint16_t VAR_1;


    if (!FUNC_2(FUNC_0(0x40E), &VAR_1, sizeof(VAR_1)))
 return (((void*)0));
    VAR_0 = FUNC_1(FUNC_0(VAR_1 << 4), 0x400);
    if (VAR_0 != ((void*)0))
 return (VAR_0);


    VAR_0 = FUNC_1(FUNC_0(0xf0000), 0x10000);
    if (VAR_0 != ((void*)0))
 return (VAR_0);

    return (((void*)0));
}
