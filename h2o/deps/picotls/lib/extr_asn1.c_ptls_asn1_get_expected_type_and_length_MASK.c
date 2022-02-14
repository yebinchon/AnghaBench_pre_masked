
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int uint32_t ;
typedef int ptls_minicrypto_log_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,size_t,size_t,int ,int *) ;
 size_t FUNC_1 (scalar_t__ const*,size_t,size_t,int *,int*,size_t*,int*,int ,int *) ;

size_t FUNC_2(const uint8_t *VAR_2, size_t VAR_3, size_t VAR_4, uint8_t VAR_5,
                                              uint32_t *VAR_6, int *VAR_7, size_t *VAR_8, int *VAR_9,
                                              ptls_minicrypto_log_ctx_t *VAR_10)
{
    int VAR_11 = 0;


    if (VAR_2[VAR_4] != VAR_5) {
        VAR_4 = FUNC_0("Unexpected type", VAR_3, VAR_4, 0, VAR_10);
        *VAR_9 = VAR_1;
    } else {

        VAR_4++;
        VAR_4 =
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6, &VAR_11, VAR_8, VAR_9, 0, VAR_10);

        if (VAR_7 != ((void*)0)) {
            *VAR_7 = VAR_11;
        } else if (VAR_11) {
            VAR_4 = FUNC_0("Incorrect length for DER", VAR_3, VAR_4, 0, VAR_10);
            *VAR_9 = VAR_0;
        }
    }

    return VAR_4;
}
