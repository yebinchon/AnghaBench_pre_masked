
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (scalar_t__*,int,int const,int) ;
 int FUNC_1 (scalar_t__*,int,int const,int) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
    static const U32 VAR_1 = 2654435761U;
    BYTE VAR_2[VAR_0];
    U32 VAR_3 = VAR_1;

    int VAR_4;
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
        VAR_2[VAR_4] = (BYTE)(VAR_3>>24);
        VAR_3 *= VAR_3;
    }

    FUNC_0(((void*)0), 0, 0, 0x02CC5D05);
    FUNC_0(((void*)0), 0, VAR_1, 0x36B78AE7);
    FUNC_0(VAR_2, 1, 0, 0xB85CBEE5);
    FUNC_0(VAR_2, 1, VAR_1, 0xD5845D64);
    FUNC_0(VAR_2, 14, 0, 0xE5AA0AB4);
    FUNC_0(VAR_2, 14, VAR_1, 0x4481951D);
    FUNC_0(VAR_2, VAR_0, 0, 0x1F1AA412);
    FUNC_0(VAR_2, VAR_0, VAR_1, 0x498EC8E2);

    FUNC_1(((void*)0) , 0, 0, 0xEF46DB3751D8E999ULL);
    FUNC_1(((void*)0) , 0, VAR_1, 0xAC75FDA2929B17EFULL);
    FUNC_1(VAR_2, 1, 0, 0x4FCE394CC88952D8ULL);
    FUNC_1(VAR_2, 1, VAR_1, 0x739840CB819FA723ULL);
    FUNC_1(VAR_2, 14, 0, 0xCFFA8DB881BC3A3DULL);
    FUNC_1(VAR_2, 14, VAR_1, 0x5B9611585EFCC9CBULL);
    FUNC_1(VAR_2, VAR_0, 0, 0x0EAB543384F878ADULL);
    FUNC_1(VAR_2, VAR_0, VAR_1, 0xCAA65939306F1E21ULL);

    FUNC_2(3, "\r%70s\r", "");
    FUNC_2(3, "Sanity check -- all tests ok\n");
}
