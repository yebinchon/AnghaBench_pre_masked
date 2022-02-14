
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static long
FUNC_1(const char *VAR_0)
{
        char *VAR_1;
        long VAR_2;

        if (VAR_0 == ((void*)0))
                return (0);
        VAR_2 = FUNC_0(VAR_0, &VAR_1, 0);
        if (VAR_1 == VAR_0 || (VAR_1[0] != '\0' && VAR_1[1] != '\0')) {
                return (0);
        }
        switch (VAR_1[0]) {
        case 't': case 'T':
                VAR_2 *= 1024;

        case 'g': case 'G':
                VAR_2 *= 1024;

        case 'm': case 'M':
                VAR_2 *= 1024;

        case 'k': case 'K':
                VAR_2 *= 1024;

        case '\0':
                break;
        default:
                return (0);
        }
        return (VAR_2);
}
