
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const char *VAR_0, size_t VAR_1, size_t VAR_2)
{
    size_t VAR_3 = VAR_1, VAR_4 = VAR_1 - VAR_2;

    if (VAR_4 == 2 && VAR_0[VAR_1 - 1] == '.') {
        --VAR_1;
    } else if (VAR_4 == 3 && VAR_0[VAR_1 - 2] == '.' && VAR_0[VAR_1 - 1] == '.') {
        VAR_1 -= 2;
        if (VAR_1 > 1) {
            for (--VAR_1; VAR_0[VAR_1 - 1] != '/'; --VAR_1)
                ;
        }
    }
    return VAR_3 - VAR_1;
}
