
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0)
{
    int VAR_1 = -1;
    if (VAR_0 >= '0' && VAR_0 <= '9') {
        VAR_1 = (int) (VAR_0 - '0');
    } else if (VAR_0 >= 'A' && VAR_0 <= 'F') {
        VAR_1 = (int) (VAR_0 - 'A') + 0x0a;
    } else if (VAR_0 >= 'a' && VAR_0 <= 'f') {
        VAR_1 = (int) (VAR_0 - 'a') + 0x0a;
    }
    return VAR_1;
}
