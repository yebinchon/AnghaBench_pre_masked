
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,void*,size_t) ;

__attribute__((used)) static int FUNC_1(int VAR_2, void *VAR_3, size_t VAR_4)
{
    while (VAR_4 != 0) {
        ssize_t VAR_5;
        while ((VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4)) == -1 && VAR_1 == VAR_0)
            ;
        if (VAR_5 == -1) {
            return -1;
        } else if (VAR_5 == 0) {
            VAR_1 = 0;
            return -1;
        }
        VAR_3 = (char *)VAR_3 + VAR_5;
        VAR_4 -= VAR_5;
    }
    return 0;
}
