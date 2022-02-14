
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_4__ {size_t len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 size_t FUNC_1 (char*,int const*,int,int,char const**) ;
 int FUNC_2 (int const**,int const*,int) ;
 int FUNC_3 (char*,int,char const**) ;
 int FUNC_4 (char*,int,char const**) ;
 int FUNC_5 (char*,int const*,int) ;

__attribute__((used)) static h2o_iovec_t *FUNC_6(h2o_mem_pool_t *VAR_1, const uint8_t **VAR_2, const uint8_t *VAR_3, int VAR_4,
                                  const char **VAR_5)
{
    h2o_iovec_t *VAR_6;
    int VAR_7;
    int64_t VAR_8;

    if (*VAR_2 >= VAR_3)
        return ((void*)0);

    VAR_7 = (**VAR_2 & 0x80) != 0;
    if ((VAR_8 = FUNC_2(VAR_2, VAR_3, 7)) < 0)
        return ((void*)0);

    if (VAR_7) {
        if (VAR_8 > VAR_3 - *VAR_2)
            return ((void*)0);
        VAR_6 = FUNC_0(VAR_1, VAR_8 * 2);
        if ((VAR_6->len = FUNC_1(VAR_6->base, *VAR_2, VAR_8, VAR_4, VAR_5)) == VAR_0)
            return ((void*)0);
        VAR_6->base[VAR_6->len] = '\0';
    } else {
        if (VAR_8 > VAR_3 - *VAR_2)
            return ((void*)0);
        if (VAR_4) {

            if (**VAR_2 != (uint8_t)':' && !FUNC_3((char *)*VAR_2, VAR_8, VAR_5))
                return ((void*)0);
        } else {
            FUNC_4((char *)*VAR_2, VAR_8, VAR_5);
        }
        VAR_6 = FUNC_0(VAR_1, VAR_8);
        FUNC_5(VAR_6->base, *VAR_2, VAR_8);
        VAR_6->base[VAR_8] = '\0';
    }
    *VAR_2 += VAR_8;

    return VAR_6;
}
