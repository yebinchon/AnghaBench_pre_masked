
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_h2o_qpack_flatten_context_t {TYPE_3__* headers_buf; int * pool; scalar_t__ header_data_prefix_at; scalar_t__ largest_ref; scalar_t__ base_index; TYPE_3__* encoder_buf; int stream_id; TYPE_2__* qpack; } ;
typedef int int64_t ;
struct TYPE_8__ {scalar_t__ first; scalar_t__ last; scalar_t__ base_offset; } ;
struct TYPE_9__ {scalar_t__ num_blocked; scalar_t__ max_blocked; TYPE_1__ table; } ;
typedef TYPE_2__ h2o_qpack_encoder_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_3__ h2o_byte_vector_t ;


 int FUNC_0 (int *,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct st_h2o_qpack_flatten_context_t *VAR_0, h2o_qpack_encoder_t *VAR_1, h2o_mem_pool_t *VAR_2,
                            int64_t VAR_3, h2o_byte_vector_t *VAR_4, h2o_byte_vector_t *VAR_5)
{
    VAR_0->qpack = VAR_1;
    VAR_0->pool = VAR_2;
    VAR_0->stream_id = VAR_3;
    VAR_0->encoder_buf = VAR_1 != ((void*)0) && VAR_1->num_blocked < VAR_1->max_blocked ? VAR_4 : ((void*)0);
    VAR_0->headers_buf = VAR_5;
    VAR_0->base_index = VAR_1 != ((void*)0) ? VAR_1->table.base_offset + VAR_1->table.last - VAR_1->table.first - 1 : 0;
    VAR_0->largest_ref = 0;
    VAR_0->header_data_prefix_at = VAR_5->size;


    FUNC_0(VAR_0->pool, VAR_0->headers_buf, VAR_0->headers_buf->size + 2);
    VAR_0->headers_buf->size += 2;
}
