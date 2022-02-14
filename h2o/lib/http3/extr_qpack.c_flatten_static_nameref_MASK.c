
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_h2o_qpack_flatten_context_t {TYPE_2__* headers_buf; int pool; } ;
typedef int int32_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_7__ {int size; int* entries; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_qpack_flatten_context_t *VAR_1, int32_t VAR_2, h2o_iovec_t VAR_3, int VAR_4)
{
    FUNC_2(VAR_1->pool, VAR_1->headers_buf, VAR_1->headers_buf->size + VAR_0 * 2 + VAR_3.len);
    VAR_1->headers_buf->entries[VAR_1->headers_buf->size] = 0x50 | (VAR_4 ? 0x20 : 0);
    FUNC_0(VAR_1->headers_buf, VAR_2, 4);
    FUNC_1(VAR_1->headers_buf, VAR_3.base, VAR_3.len, 7, VAR_4);
}
