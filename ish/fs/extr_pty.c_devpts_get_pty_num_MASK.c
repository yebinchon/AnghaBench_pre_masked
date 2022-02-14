
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2) {
    if (FUNC_4(VAR_2, "") == 0)
        return -1;
    if (VAR_2[0] != '/' || VAR_2[1] == '\0' || FUNC_3(VAR_2 + 1, '/') != ((void*)0))
        return VAR_1;


    const char *VAR_3 = VAR_2 + 1;
    if (!FUNC_2(VAR_3))
        return VAR_1;

    long VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 > VAR_0)
        return VAR_1;
    int VAR_5 = (int) VAR_4;
    if (!FUNC_1(VAR_5))
        return VAR_1;
    return VAR_5;
}
