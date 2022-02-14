
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_0, uint32_t *VAR_1)
{
    uint32_t VAR_2;


    FUNC_1();

    FUNC_4(0x0a, 4);

    FUNC_4(0x04, 3);

    FUNC_4(0x01, 1);


    if (FUNC_3())
        return -1;


    FUNC_4(VAR_0 & 0xFF, 8);

    if (FUNC_3())
        return -1;

    FUNC_4((VAR_0 & 0xFF00) >> 8, 8);

    if (FUNC_3())
        return -1;


    VAR_2 = (FUNC_0(8) & 0xFF);

    FUNC_4(0, 1);

    VAR_2 |= (FUNC_0(8) & 0xFF) << 8;

    FUNC_4(1, 1);


    FUNC_2();

    if (VAR_1)
        *VAR_1 = VAR_2;

    return 0;
}
