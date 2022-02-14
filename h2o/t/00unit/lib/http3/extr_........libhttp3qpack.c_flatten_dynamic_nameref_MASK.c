
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_h2o_qpack_flatten_context_t {scalar_t__ largest_ref; scalar_t__ base_index; TYPE_2__* headers_buf; int pool; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_7__ {int size; int* entries; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_qpack_flatten_context_t *VAR_1, int64_t VAR_2, h2o_iovec_t VAR_3, int VAR_4)
{
    if (VAR_2 > VAR_1->largest_ref)
        VAR_1->largest_ref = VAR_2;

    FUNC_2(VAR_1->pool, VAR_1->headers_buf, VAR_1->headers_buf->size + VAR_0 * 2 + VAR_3.len);
    if (VAR_2 <= VAR_1->base_index) {
        VAR_1->headers_buf->entries[VAR_1->headers_buf->size] = 0x40 | (VAR_4 ? 0x20 : 0);
        FUNC_0(VAR_1->headers_buf, VAR_1->base_index - VAR_2, 4);
    } else {
        VAR_1->headers_buf->entries[VAR_1->headers_buf->size] = VAR_4 ? 0x8 : 0;
        FUNC_0(VAR_1->headers_buf, VAR_2 - VAR_1->base_index - 1, 3);
    }
    FUNC_1(VAR_1->headers_buf, VAR_3.base, VAR_3.len, 7, VAR_4);
}
