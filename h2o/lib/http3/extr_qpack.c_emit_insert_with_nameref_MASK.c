
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef int h2o_qpack_encoder_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_8__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_9__ {int size; int* entries; } ;
typedef TYPE_2__ h2o_byte_vector_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(h2o_qpack_encoder_t *VAR_1, h2o_mem_pool_t *VAR_2, h2o_byte_vector_t *VAR_3, int VAR_4,
                                     int64_t VAR_5, h2o_iovec_t VAR_6)
{
    FUNC_2(VAR_2, VAR_3, VAR_3->size + (VAR_0 * 2) + VAR_6.len);
    VAR_3->entries[VAR_3->size] = 0x80 | (VAR_4 ? 0x40 : 0);
    FUNC_0(VAR_3, VAR_5, 6);
    FUNC_1(VAR_3, VAR_6.base, VAR_6.len, 7, 0);
}
