
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,int ) ;

char *FUNC_1(char *VAR_0, const void *VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0;
    const char *VAR_4 = VAR_1, *VAR_5 = VAR_4 + VAR_2;

    for (; VAR_4 != VAR_5; ++VAR_4) {
        if (('0' <= *VAR_4 && *VAR_4 <= 0x7e) && !(*VAR_4 == '"' || *VAR_4 == '\'' || *VAR_4 == '\\')) {
            *VAR_3++ = *VAR_4;
        } else {
            *VAR_3++ = '\\';
            *VAR_3++ = 'x';
            FUNC_0(VAR_3, (uint8_t)*VAR_4);
        }
    }
    *VAR_3 = '\0';

    return VAR_0;
}
