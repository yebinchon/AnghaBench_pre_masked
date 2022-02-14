
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_mem_recycle_chunk_t {struct st_h2o_mem_recycle_chunk_t* next; } ;
struct TYPE_3__ {scalar_t__ cnt; scalar_t__ max; struct st_h2o_mem_recycle_chunk_t* _link; } ;
typedef TYPE_1__ h2o_mem_recycle_t ;


 int FUNC_0 (void*) ;

void FUNC_1(h2o_mem_recycle_t *VAR_0, void *VAR_1)
{
    struct st_h2o_mem_recycle_chunk_t *VAR_2;
    if (VAR_0->cnt == VAR_0->max) {
        FUNC_0(VAR_1);
        return;
    }

    VAR_2 = VAR_1;
    VAR_2->next = VAR_0->_link;
    VAR_0->_link = VAR_2;
    ++VAR_0->cnt;
}
