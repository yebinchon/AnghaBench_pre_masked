
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,size_t) ;

ssize_t FUNC_1(int VAR_3, const void *VAR_4, size_t VAR_5) {
    size_t VAR_6 = 0;

    while (VAR_6 < VAR_5) {
        const ssize_t VAR_7 = FUNC_0(VAR_3, ((char *)VAR_4) + VAR_6, VAR_5 - VAR_6);
        if (VAR_7 == -1) {
            if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
                continue;
            return VAR_7;
        }
        VAR_6 += (size_t)VAR_7;
    }

    return VAR_6;
}
