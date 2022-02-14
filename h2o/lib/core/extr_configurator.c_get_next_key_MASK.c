
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_3, h2o_iovec_t *VAR_4, unsigned *VAR_5)
{
    const char *VAR_6 = FUNC_2(VAR_3, ':');
    if (VAR_6 == ((void*)0))
        goto Error;


    *VAR_4 = FUNC_1(VAR_3, VAR_6 - VAR_3);


    *VAR_5 = 0;
    for (++VAR_6; *VAR_6 != '\0'; ++VAR_6) {
        switch (*VAR_6) {
        case ',':
            return VAR_6 + 1;
        case 's':
            *VAR_5 |= 1u << VAR_1;
            break;
        case 'a':
            *VAR_5 |= 1u << VAR_2;
            break;
        case 'm':
            *VAR_5 |= 1u << VAR_0;
            break;
        case '*':
            *VAR_5 |= (1u << VAR_1) | (1u << VAR_2) | (1u << VAR_0);
            break;
        default:
            goto Error;
        }
    }

    return ((void*)0);

Error:
    FUNC_0("detected invalid or missing type specifier; input is: %s\n", VAR_3);
}
