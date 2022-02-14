
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef int int32_t ;
struct TYPE_3__ {char* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 char* FUNC_0 (char const*,char const*,unsigned char*) ;

int FUNC_1(h2o_iovec_t VAR_0, struct in_addr *VAR_1)
{
    union {
        int32_t n;
        unsigned char c[4];
    } VAR_2;
    const char *VAR_3 = VAR_0.base, *VAR_4 = VAR_3 + VAR_0.len;
    size_t VAR_5 = 0;

    while (1) {
        if ((VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_2.c + VAR_5)) == ((void*)0))
            return -1;
        if (VAR_5 == 3)
            break;
        if (VAR_3 == VAR_4 || !(*VAR_3 == '.'))
            return -1;
        ++VAR_3;
        ++VAR_5;
    }
    if (VAR_3 != VAR_4)
        return -1;

    VAR_1->s_addr = VAR_2.n;
    return 0;
}
