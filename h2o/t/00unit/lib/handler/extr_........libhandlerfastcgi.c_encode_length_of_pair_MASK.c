
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, size_t VAR_1)
{
    if (VAR_1 < 127) {
        *VAR_0++ = (char)VAR_1;
    } else {
        *VAR_0++ = (unsigned char)(VAR_1 >> 24) | 0x80;
        *VAR_0++ = (unsigned char)(VAR_1 >> 16);
        *VAR_0++ = (unsigned char)(VAR_1 >> 8);
        *VAR_0++ = (unsigned char)VAR_1;
    }
    return VAR_0;
}
