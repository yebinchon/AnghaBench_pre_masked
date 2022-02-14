
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int h2o_qpack_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const**,int const*,int) ;
 int FUNC_1 (int *,int ,char const**) ;
 int FUNC_2 (int *,int ,char const**) ;
 int FUNC_3 (int *,int ,char const**) ;

int FUNC_4(h2o_qpack_encoder_t *VAR_1, const uint8_t **VAR_2, const uint8_t *VAR_3, const char **VAR_4)
{
    const uint8_t *VAR_5 = *VAR_2;
    int VAR_6 = 0;

    while (VAR_5 != VAR_3 && VAR_6 == 0) {
        switch (*VAR_5 >> 6) {
        case 0: {
            int64_t VAR_7;
            if ((VAR_6 = FUNC_0(&VAR_7, &VAR_5, VAR_3, 6)) != 0)
                goto Exit;
            VAR_6 = FUNC_3(VAR_1, VAR_7, VAR_4);
        } break;
        default: {
            int64_t VAR_8;
            if ((VAR_6 = FUNC_0(&VAR_8, &VAR_5, VAR_3, 7)) != 0)
                goto Exit;
            VAR_6 = FUNC_1(VAR_1, VAR_8, VAR_4);
        } break;
        case 1: {
            int64_t VAR_9;
            if ((VAR_6 = FUNC_0(&VAR_9, &VAR_5, VAR_3, 6)) != 0)
                goto Exit;
            VAR_6 = FUNC_2(VAR_1, VAR_9, VAR_4);
        } break;
        }
        *VAR_2 = VAR_5;
    }

Exit:
    if (VAR_6 == VAR_0)
        VAR_6 = 0;
    return (int)VAR_6;
}
