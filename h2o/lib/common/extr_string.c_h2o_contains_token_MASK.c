
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;


 int FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,size_t,char const*,size_t) ;
 char* FUNC_2 (int *,int,size_t*,int *) ;

int FUNC_3(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4)
{
    h2o_iovec_t VAR_5 = FUNC_0(VAR_0, VAR_1);
    const char *VAR_6 = ((void*)0);
    size_t VAR_7 = 0;

    while ((VAR_6 = FUNC_2(&VAR_5, VAR_4, &VAR_7, ((void*)0))) != ((void*)0)) {
        if (FUNC_1(VAR_6, VAR_7, VAR_2, VAR_3)) {
            return 1;
        }
    }
    return 0;
}
