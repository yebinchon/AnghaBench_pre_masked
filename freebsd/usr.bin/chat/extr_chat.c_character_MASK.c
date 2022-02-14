
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*,...) ;

char *
FUNC_1(int VAR_0)
{
    static char VAR_1[10];
    const char *VAR_2;

    VAR_2 = (VAR_0 & 0x80) ? "M-" : "";
    VAR_0 &= 0x7F;

    if (VAR_0 < 32)
 FUNC_0(VAR_1, "%s^%c", VAR_2, (int)VAR_0 + '@');
    else if (VAR_0 == 127)
 FUNC_0(VAR_1, "%s^?", VAR_2);
    else
 FUNC_0(VAR_1, "%s%c", VAR_2, VAR_0);

    return (VAR_1);
}
