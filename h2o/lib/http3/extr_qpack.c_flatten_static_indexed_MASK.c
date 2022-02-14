
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_qpack_flatten_context_t {TYPE_1__* headers_buf; int pool; } ;
typedef int int32_t ;
struct TYPE_3__ {size_t size; int* entries; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_qpack_flatten_context_t *VAR_1, int32_t VAR_2)
{
    FUNC_1(VAR_1->pool, VAR_1->headers_buf, VAR_1->headers_buf->size + VAR_0);
    VAR_1->headers_buf->entries[VAR_1->headers_buf->size] = 0xc0;
    FUNC_0(VAR_1->headers_buf, VAR_2, 6);
}
