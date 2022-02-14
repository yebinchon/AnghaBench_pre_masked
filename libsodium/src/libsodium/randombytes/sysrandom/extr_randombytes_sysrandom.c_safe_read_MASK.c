
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (int const,unsigned char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(const int VAR_4, void * const VAR_5, size_t VAR_6)
{
    unsigned char *VAR_7 = (unsigned char *) VAR_5;
    ssize_t VAR_8;

    FUNC_0(VAR_6 > (size_t) 0U);
    FUNC_0(VAR_6 <= VAR_2);
    do {
        while ((VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_6)) < (ssize_t) 0 &&
               (VAR_3 == VAR_1 || VAR_3 == VAR_0));
        if (VAR_8 < (ssize_t) 0) {
            return VAR_8;
        }
        if (VAR_8 == (ssize_t) 0) {
            break;
        }
        VAR_6 -= (size_t) VAR_8;
        VAR_7 += VAR_8;
    } while (VAR_6 > (ssize_t) 0);

    return (ssize_t) (VAR_7 - (unsigned char *) VAR_5);
}
