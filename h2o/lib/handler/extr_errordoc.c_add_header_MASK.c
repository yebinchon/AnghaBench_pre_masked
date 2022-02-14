
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_4__ {scalar_t__ size; int * entries; } ;
typedef TYPE_1__ h2o_headers_t ;
typedef int h2o_header_t ;


 int FUNC_0 (int *,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(h2o_mem_pool_t *VAR_0, h2o_headers_t *VAR_1, const h2o_header_t *VAR_2)
{
    FUNC_0(VAR_0, VAR_1, VAR_1->size + 1);
    VAR_1->entries[VAR_1->size++] = *VAR_2;
}
