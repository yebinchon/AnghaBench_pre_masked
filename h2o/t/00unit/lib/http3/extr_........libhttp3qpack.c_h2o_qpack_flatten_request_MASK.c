
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_qpack_flatten_context_t {int dummy; } ;
typedef int int64_t ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ h2o_url_scheme_t ;
typedef int h2o_qpack_encoder_t ;
typedef int h2o_mem_pool_t ;
typedef int h2o_iovec_t ;
typedef int h2o_header_t ;
typedef int h2o_byte_vector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ const VAR_4 ;
 TYPE_1__ const VAR_5 ;
 int FUNC_0 (struct st_h2o_qpack_flatten_context_t*) ;
 int FUNC_1 (struct st_h2o_qpack_flatten_context_t*,int const*) ;
 int FUNC_2 (struct st_h2o_qpack_flatten_context_t*,int ,int ,int ) ;
 int FUNC_3 (struct st_h2o_qpack_flatten_context_t*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct st_h2o_qpack_flatten_context_t*,int *,int *,int ,int *,int *) ;

void FUNC_5(h2o_qpack_encoder_t *VAR_10, h2o_mem_pool_t *VAR_11, int64_t VAR_12,
                               h2o_byte_vector_t *VAR_13, h2o_byte_vector_t *VAR_14, h2o_iovec_t VAR_15,
                               const h2o_url_scheme_t *VAR_16, h2o_iovec_t VAR_17, h2o_iovec_t VAR_18, const h2o_header_t *VAR_19,
                               size_t VAR_20)
{
    struct st_h2o_qpack_flatten_context_t VAR_21;

    FUNC_4(&VAR_21, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);


    FUNC_2(&VAR_21, VAR_7, VAR_1, VAR_15);
    if (VAR_16 == &VAR_4) {
        FUNC_3(&VAR_21, 22);
    } else if (VAR_16 == &VAR_5) {
        FUNC_3(&VAR_21, 23);
    } else {
        FUNC_2(&VAR_21, VAR_9, VAR_3, VAR_16->name);
    }
    FUNC_2(&VAR_21, VAR_6, VAR_0, VAR_17);
    FUNC_2(&VAR_21, VAR_8, VAR_2, VAR_18);


    size_t VAR_22;
    for (VAR_22 = 0; VAR_22 != VAR_20; ++VAR_22)
        FUNC_1(&VAR_21, VAR_19 + VAR_22);

    FUNC_0(&VAR_21);
}
