
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char * VAR_0, char VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_2 < 1) VAR_2 = 1;
    if (VAR_3) {
 *VAR_0 = VAR_1;
 for (VAR_4=1; VAR_4< VAR_2; VAR_4++) VAR_0[VAR_4] = ' ';
    } else {
 for (VAR_4=0; VAR_4< VAR_2-1; VAR_4++) VAR_0[VAR_4] = ' ';
 VAR_0[VAR_2 - 1] = VAR_1;
    }
    return VAR_2;
}
