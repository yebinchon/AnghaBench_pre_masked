
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
typedef int h2o_token_t ;
typedef int h2o_qpack_decoder_t ;
struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int,int,char const**) ;
 int FUNC_2 (void*,int,char const**) ;
 TYPE_1__ FUNC_3 (int const*,int) ;
 int * FUNC_4 (int ,int ) ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (int *,int ,int ,int,int const*,int,char const**) ;
 int FUNC_6 (int *,int const*,int,int const*,int,char const**) ;

__attribute__((used)) static int FUNC_7(h2o_qpack_decoder_t *VAR_6, int VAR_7, const uint8_t *VAR_8, int64_t VAR_9, int VAR_10,
                                         const uint8_t *VAR_11, int64_t VAR_12, const char **VAR_13)
{
    h2o_iovec_t VAR_14;

    if (VAR_9 >= VAR_1) {
        *VAR_13 = VAR_4;
        return VAR_0;
    }
    if (VAR_12 >= VAR_2) {
        *VAR_13 = VAR_5;
        return VAR_0;
    }

    if (VAR_7) {
        VAR_14.base = FUNC_0(VAR_9 * 2);
        if ((VAR_14.len = FUNC_1(VAR_14.base, VAR_8, VAR_9, 1, VAR_13)) == VAR_3)
            return VAR_0;
    } else {
        if (!FUNC_2((void *)VAR_8, VAR_9, VAR_13))
            return VAR_0;
        VAR_14 = FUNC_3(VAR_8, VAR_9);
    }

    const h2o_token_t *VAR_15;
    if ((VAR_15 = FUNC_4(VAR_14.base, VAR_14.len)) != ((void*)0)) {
        return FUNC_6(VAR_6, VAR_15, VAR_10, VAR_11, VAR_12, VAR_13);
    } else {
        return FUNC_5(VAR_6, VAR_14.base, VAR_14.len, VAR_10, VAR_11, VAR_12, VAR_13);
    }
}
