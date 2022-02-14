
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(int VAR_9,
                                      DWORD* VAR_10,
                                      DWORD* VAR_11,
                                      DWORD* VAR_12,
                                      DWORD* VAR_13)
{
    *VAR_10 = *VAR_12 = *VAR_13 = *VAR_11 = 0;

    if ((VAR_9 & VAR_8)==VAR_7)
    {
        *VAR_10 = VAR_2;
        *VAR_11 = VAR_4;
        *VAR_12 = VAR_1;
    }
    else if (VAR_9 & VAR_6)
    {
        *VAR_10 = VAR_3 | VAR_2;
        *VAR_11 = VAR_4;
    }
    else if (VAR_9 & VAR_5)
    {
        *VAR_10 = VAR_3 | VAR_2;
        *VAR_11 = VAR_0;
    }
}
