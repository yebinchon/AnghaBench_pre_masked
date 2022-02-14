
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_1(void)
{
    int VAR_13 = 0;

    if (FUNC_0(VAR_12) & 0x8000)
        VAR_13 |= VAR_4;
    if (FUNC_0(VAR_7) & 0x8000)
        VAR_13 |= VAR_2;
    if (FUNC_0(VAR_9) & 0x8000)
        VAR_13 |= VAR_0;
    if ((FUNC_0(VAR_8) | FUNC_0(VAR_11)) & 0x8000)
        VAR_13 |= VAR_5;
    if (FUNC_0(VAR_6) & 1)
        VAR_13 |= VAR_1;
    if (FUNC_0(VAR_10) & 1)
        VAR_13 |= VAR_3;

    return VAR_13;
}
