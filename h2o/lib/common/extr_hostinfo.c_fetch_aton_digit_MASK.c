
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, const char *VAR_1, unsigned char *VAR_2)
{
    size_t VAR_3 = 0;
    int VAR_4 = 0;

    while (VAR_0 != VAR_1 && ('0' <= *VAR_0 && *VAR_0 <= '9')) {
        VAR_4 = VAR_4 * 10 + *VAR_0++ - '0';
        ++VAR_3;
    }
    if (!(1 <= VAR_3 && VAR_3 <= 3))
        return ((void*)0);
    if (VAR_4 > 255)
        return ((void*)0);
    *VAR_2 = (unsigned char)VAR_4;
    return VAR_0;
}
