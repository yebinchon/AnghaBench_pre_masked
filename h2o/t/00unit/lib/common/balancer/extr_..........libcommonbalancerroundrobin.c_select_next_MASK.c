
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct round_robin_t {scalar_t__ pos; scalar_t__ consumed_weight; } ;
struct TYPE_3__ {scalar_t__ size; } ;
typedef TYPE_1__ h2o_socketpool_target_vector_t ;



__attribute__((used)) static inline void FUNC_0(struct round_robin_t *VAR_0, h2o_socketpool_target_vector_t *VAR_1)
{
    VAR_0->pos += 1;
    if (VAR_0->pos == VAR_1->size)
        VAR_0->pos = 0;
    VAR_0->consumed_weight = 0;
}
