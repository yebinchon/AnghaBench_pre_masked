
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;
typedef int h2o_cache_digests_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,size_t) ;
 scalar_t__ FUNC_3 (char const*,size_t,int ) ;
 int FUNC_4 (char const*,size_t,int ) ;
 char* FUNC_5 (int *,char,size_t*,int *) ;
 int FUNC_6 (int **,char const*,size_t,int,int) ;

void FUNC_7(h2o_cache_digests_t **VAR_0, const char *VAR_1, size_t VAR_2)
{
    h2o_iovec_t VAR_3 = FUNC_2(VAR_1, VAR_2);
    const char *VAR_4;
    size_t VAR_5;

    do {
        const char *VAR_6;
        size_t VAR_7;
        int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
        h2o_iovec_t VAR_12;

        if ((VAR_6 = FUNC_5(&VAR_3, ';', &VAR_7, ((void*)0))) == ((void*)0))
            return;
        while ((VAR_4 = FUNC_5(&VAR_3, ';', &VAR_5, &VAR_12)) != ((void*)0) &&
               !FUNC_4(VAR_4, VAR_5, FUNC_0(","))) {
            if (FUNC_3(VAR_4, VAR_5, FUNC_0("reset"))) {
                VAR_8 = 1;
            } else if (FUNC_3(VAR_4, VAR_5, FUNC_0("validators"))) {
                VAR_9 = 1;
            } else if (FUNC_3(VAR_4, VAR_5, FUNC_0("complete"))) {
                VAR_10 = 1;
            } else {
                VAR_11 = 1;
            }
        }

        if (VAR_8 && *VAR_0 != ((void*)0)) {
            FUNC_1(*VAR_0);
            *VAR_0 = ((void*)0);
        }

        if (VAR_11) {

        } else {
            FUNC_6(VAR_0, VAR_6, VAR_7, VAR_9, VAR_10);
        }
    } while (VAR_4 != ((void*)0));
}
