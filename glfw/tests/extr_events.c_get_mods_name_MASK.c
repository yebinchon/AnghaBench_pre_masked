
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
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static const char* FUNC_1(int VAR_6)
{
    static char VAR_7[512];

    if (VAR_6 == 0)
        return " no mods";

    VAR_7[0] = '\0';

    if (VAR_6 & VAR_4)
        FUNC_0(VAR_7, " shift");
    if (VAR_6 & VAR_2)
        FUNC_0(VAR_7, " control");
    if (VAR_6 & VAR_0)
        FUNC_0(VAR_7, " alt");
    if (VAR_6 & VAR_5)
        FUNC_0(VAR_7, " super");
    if (VAR_6 & VAR_1)
        FUNC_0(VAR_7, " capslock-on");
    if (VAR_6 & VAR_3)
        FUNC_0(VAR_7, " numlock-on");

    return VAR_7;
}
