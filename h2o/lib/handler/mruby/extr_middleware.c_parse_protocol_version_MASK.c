
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, size_t VAR_1)
{
    int VAR_2;

    if (VAR_1 < 6)
        goto Default;
    if (FUNC_0(VAR_0, "HTTP/", 5) != 0)
        goto Default;
    if (!('0' <= VAR_0[5] && VAR_0[5] <= '9'))
        goto Default;
    VAR_2 = (VAR_0[5] - '0') * 0x100;
    if (VAR_1 >= 8 && VAR_0[6] == '.' && ('0' <= VAR_0[7] && VAR_0[7] <= '9'))
        VAR_2 += VAR_0[7] - '0';

    return VAR_2;
Default:
    return 0x101;
}
