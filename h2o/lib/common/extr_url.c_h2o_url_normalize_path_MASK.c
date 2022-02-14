
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_5__ {char* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,int,char const*,int,char*) ;
 TYPE_1__ FUNC_2 (char*,int) ;
 size_t FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 TYPE_1__ FUNC_5 (int *,char const*,size_t,size_t*,size_t**) ;

h2o_iovec_t FUNC_6(h2o_mem_pool_t *VAR_1, const char *VAR_2, size_t VAR_3, size_t *VAR_4, size_t **VAR_5)
{
    const char *VAR_6 = VAR_2, *VAR_7 = VAR_2 + VAR_3;
    h2o_iovec_t VAR_8;

    *VAR_4 = VAR_0;
    *VAR_5 = ((void*)0);

    if (VAR_3 == 0) {
        VAR_8 = FUNC_2("/", 1);
        return VAR_8;
    }

    if (VAR_2[0] != '/')
        goto Rewrite;

    for (; VAR_6 + 1 < VAR_7; ++VAR_6) {
        if ((VAR_6[0] == '/' && VAR_6[1] == '.') || VAR_6[0] == '%') {

            goto Rewrite;
        } else if (VAR_6[0] == '?') {
            *VAR_4 = VAR_6 - VAR_2;
            goto Return;
        }
    }
    for (; VAR_6 < VAR_7; ++VAR_6) {
        if (VAR_6[0] == '?') {
            *VAR_4 = VAR_6 - VAR_2;
            goto Return;
        }
    }

Return:
    VAR_8.base = (char *)VAR_2;
    VAR_8.len = VAR_6 - VAR_2;
    return VAR_8;

Rewrite:
    VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_8.len == 0)
        goto RewriteError;
    if (VAR_8.base[0] != '/')
        goto RewriteError;
    if (FUNC_3(VAR_8.base, VAR_8.len, FUNC_0("/../")) != VAR_0)
        goto RewriteError;
    if (VAR_8.len >= 3 && FUNC_4(VAR_8.base + VAR_8.len - 3, "/..", 3) == 0)
        goto RewriteError;
    return VAR_8;
RewriteError:
    FUNC_1("failed to normalize path: `%.*s` => `%.*s`\n", (int)VAR_3, VAR_2, (int)VAR_8.len, VAR_8.base);
    VAR_8 = FUNC_2("/", 1);
    return VAR_8;
}
