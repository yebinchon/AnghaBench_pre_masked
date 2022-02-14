
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int) ;

int
FUNC_3(unsigned char *VAR_2,
                                     const unsigned char *VAR_3)
{
    unsigned char VAR_4[VAR_0];

    FUNC_0(VAR_4, VAR_3, 32);
    VAR_4[0] &= 248;
    VAR_4[31] &= 127;
    VAR_4[31] |= 64;
    FUNC_1(VAR_2, VAR_4, VAR_1);
    FUNC_2(VAR_4, sizeof VAR_4);

    return 0;
}
