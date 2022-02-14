
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(void * const VAR_0, size_t VAR_1)
{
    unsigned char *VAR_2 = (unsigned char *) VAR_0;
    size_t VAR_3 = 256U;

    do {
        if (VAR_1 < VAR_3) {
            VAR_3 = VAR_1;
            FUNC_1(VAR_3 > (size_t) 0U);
        }
        if (FUNC_0(VAR_2, VAR_3) != 0) {
            return -1;
        }
        VAR_1 -= VAR_3;
        VAR_2 += VAR_3;
    } while (VAR_1 > (size_t) 0U);

    return 0;
}
