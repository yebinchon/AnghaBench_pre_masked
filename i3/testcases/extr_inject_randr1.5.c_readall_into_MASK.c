
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,void*,size_t const) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, const size_t VAR_1, int VAR_2) {
    size_t VAR_3 = 0;
    while (VAR_3 < VAR_1) {
        ssize_t VAR_4 = FUNC_0(VAR_2, VAR_0 + VAR_3, VAR_1 - VAR_3);
        if (VAR_4 <= 0) {
            return VAR_4;
        }
        VAR_3 += (size_t)VAR_4;
    }
    return VAR_3;
}
