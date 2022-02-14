
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

int FUNC_1(void *VAR_0, const char *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3 = VAR_0;

    if (VAR_2 % 2 != 0)
        return -1;
    for (; VAR_2 != 0; VAR_2 -= 2) {
        int VAR_4, VAR_5;
        if ((VAR_4 = FUNC_0(*VAR_1++)) == -1 || (VAR_5 = FUNC_0(*VAR_1++)) == -1)
            return -1;
        *VAR_3++ = (VAR_4 << 4) | VAR_5;
    }
    return 0;
}
