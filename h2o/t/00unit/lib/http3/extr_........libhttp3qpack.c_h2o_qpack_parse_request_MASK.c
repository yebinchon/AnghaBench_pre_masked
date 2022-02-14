
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_h2o_qpack_decode_header_ctx_t {int dummy; } ;
typedef int int64_t ;
typedef int h2o_url_scheme_t ;
typedef int h2o_qpack_decoder_t ;
typedef int h2o_mem_pool_t ;
typedef int h2o_iovec_t ;
typedef int h2o_headers_t ;
typedef int h2o_cache_digests_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct st_h2o_qpack_decode_header_ctx_t*,int *,int const**,int *,int *,int *,int*,size_t*,int **,int const*,int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct st_h2o_qpack_decode_header_ctx_t*,int ,int const**,int const*) ;
 size_t FUNC_3 (int *,struct st_h2o_qpack_decode_header_ctx_t*,int *,int ) ;

int FUNC_4(h2o_mem_pool_t *VAR_1, h2o_qpack_decoder_t *VAR_2, int64_t VAR_3, h2o_iovec_t *VAR_4,
                            const h2o_url_scheme_t **VAR_5, h2o_iovec_t *VAR_6, h2o_iovec_t *VAR_7, h2o_headers_t *VAR_8,
                            int *VAR_9, size_t *VAR_10, h2o_cache_digests_t **VAR_11, uint8_t *VAR_12,
                            size_t *VAR_13, const uint8_t *VAR_14, size_t VAR_15, const char **VAR_16)
{
    struct st_h2o_qpack_decode_header_ctx_t VAR_17;
    const uint8_t *VAR_18 = VAR_14, *VAR_19 = VAR_18 + VAR_15;
    int VAR_20;

    if ((VAR_20 = FUNC_2(VAR_2, &VAR_17, VAR_3, &VAR_18, VAR_19)) != 0)
        return VAR_20;
    if ((VAR_20 = FUNC_0(VAR_1, VAR_0, &VAR_17, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                                       VAR_9, VAR_10, VAR_11, VAR_18, VAR_19 - VAR_18, VAR_16)) != 0)
        return FUNC_1(VAR_20);

    *VAR_13 = FUNC_3(VAR_2, &VAR_17, VAR_12, VAR_3);
    return 0;
}
