
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int ctx; int (* fn ) (int ,char*) ;} ;
typedef TYPE_1__ ptls_minicrypto_log_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*,size_t,size_t,TYPE_1__*) ;
 size_t FUNC_1 (char*,size_t,size_t,int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,int ,int,TYPE_1__*) ;
 size_t FUNC_4 (scalar_t__ const*,size_t,size_t,int *,int*,size_t*,int*,int,TYPE_1__*) ;
 size_t FUNC_5 (scalar_t__ const*,size_t,int*,int*,int *,int*,int,TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*) ;

size_t FUNC_11(const uint8_t *VAR_1, size_t VAR_2, int *VAR_3, int VAR_4,
                                      ptls_minicrypto_log_ctx_t *VAR_5)
{

    int VAR_6 = 0;
    int VAR_7 = 0;
    uint32_t VAR_8 = 0;
    uint32_t VAR_9 = 0;
    int VAR_10 = 0;
    size_t VAR_11 = 0;

    size_t VAR_12 =
        FUNC_5(VAR_1, VAR_2, &VAR_6, &VAR_7, &VAR_8, VAR_3, VAR_4, VAR_5);

    if (*VAR_3 == 0 && VAR_5 != ((void*)0)) {
        FUNC_3(VAR_7, VAR_8, VAR_4, VAR_5);
    }


    VAR_12 =
        FUNC_4(VAR_1, VAR_2, VAR_12, &VAR_9, &VAR_10, &VAR_11, VAR_3, VAR_4, VAR_5);

    if (VAR_11 <= VAR_2) {
        if (VAR_6) {

            if (VAR_5 != ((void*)0)) {
                VAR_5->fn(VAR_5->ctx, " {\n");
            }

            while (VAR_12 < VAR_11) {
                if (VAR_10 != 0 && VAR_1[VAR_12] == 0) {
                    if (VAR_12 + 2 > VAR_2 || VAR_1[VAR_12 + 1] != 0) {
                        VAR_12 =
                            FUNC_1("EOC: unexpected end of content", VAR_2, VAR_12, VAR_4 + 1, VAR_5);

                        *VAR_3 = VAR_0;
                        VAR_12 = VAR_2;
                        break;
                    } else {
                        if (VAR_5 != ((void*)0)) {
                            FUNC_2(VAR_4, VAR_5);
                            VAR_5->fn(VAR_5->ctx, "EOC\n");
                        }
                        VAR_12 += 2;
                        break;
                    }
                } else {
                    VAR_12 += FUNC_11(VAR_1 + VAR_12, VAR_11 - VAR_12, VAR_3,
                                                                 VAR_4 + 1, VAR_5);

                    if (*VAR_3) {
                        VAR_12 = VAR_2;
                        break;
                    }
                }

                if (VAR_5 != ((void*)0)) {
                    if (VAR_12 < VAR_11) {
                        VAR_5->fn(VAR_5->ctx, ",");
                    }
                    VAR_5->fn(VAR_5->ctx, "\n");
                }
            }

            if (VAR_5 != ((void*)0)) {
                FUNC_2(VAR_4, VAR_5);
                VAR_5->fn(VAR_5->ctx, "}");
            }
        } else {
            FUNC_0(VAR_1, VAR_11, VAR_12, VAR_5);
            VAR_12 = VAR_11;
        }
    }

    return VAR_12;
}
