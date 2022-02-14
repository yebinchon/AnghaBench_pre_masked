
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t capacity; size_t size; void* entries; } ;
typedef TYPE_1__ h2o_vector_t ;
typedef int h2o_mem_pool_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,size_t,size_t) ;
 void* FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,void*,size_t) ;

void FUNC_4(h2o_mem_pool_t *VAR_0, h2o_vector_t *VAR_1, size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
    void *VAR_5;
    FUNC_0(VAR_1->capacity < VAR_4);
    if (VAR_1->capacity == 0)
        VAR_1->capacity = 4;
    while (VAR_1->capacity < VAR_4)
        VAR_1->capacity *= 2;
    if (VAR_0 != ((void*)0)) {
        VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_3 * VAR_1->capacity);
        FUNC_3(VAR_5, VAR_1->entries, VAR_3 * VAR_1->size);
    } else {
        VAR_5 = FUNC_2(VAR_1->entries, VAR_3 * VAR_1->capacity);
    }
    VAR_1->entries = VAR_5;
}
