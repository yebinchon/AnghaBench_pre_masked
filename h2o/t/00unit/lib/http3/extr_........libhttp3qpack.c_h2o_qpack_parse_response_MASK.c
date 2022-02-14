
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_h2o_qpack_decode_header_ctx_t {int dummy; } ;
typedef int int64_t ;
typedef int h2o_qpack_decoder_t ;
typedef int h2o_mem_pool_t ;
typedef int h2o_headers_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct st_h2o_qpack_decode_header_ctx_t*,int*,int *,int const*,int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct st_h2o_qpack_decode_header_ctx_t*,int ,int const**,int const*) ;
 size_t FUNC_3 (int *,struct st_h2o_qpack_decode_header_ctx_t*,int *,int ) ;

int FUNC_4(h2o_mem_pool_t *VAR_1, h2o_qpack_decoder_t *VAR_2, int64_t VAR_3, int *VAR_4,
                             h2o_headers_t *VAR_5, uint8_t *VAR_6, size_t *VAR_7, const uint8_t *VAR_8, size_t VAR_9,
                             const char **VAR_10)
{
    struct st_h2o_qpack_decode_header_ctx_t VAR_11;
    const uint8_t *VAR_12 = VAR_8, *VAR_13 = VAR_12 + VAR_9;
    int VAR_14;

    if ((VAR_14 = FUNC_2(VAR_2, &VAR_11, VAR_3, &VAR_12, VAR_13)) != 0)
        return VAR_14;
    if ((VAR_14 = FUNC_0(VAR_1, VAR_0, &VAR_11, VAR_4, VAR_5, VAR_12, VAR_13 - VAR_12, VAR_10)) != 0)
        return FUNC_1(VAR_14);

    *VAR_7 = FUNC_3(VAR_2, &VAR_11, VAR_6, VAR_3);
    return 0;
}
