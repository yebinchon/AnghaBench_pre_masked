
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_mem_recycle_chunk_t {struct st_h2o_mem_recycle_chunk_t* next; } ;
struct TYPE_3__ {struct st_h2o_mem_recycle_chunk_t* _link; int cnt; } ;
typedef TYPE_1__ h2o_mem_recycle_t ;


 int FUNC_0 (struct st_h2o_mem_recycle_chunk_t*) ;

void FUNC_1(h2o_mem_recycle_t *VAR_0)
{
    struct st_h2o_mem_recycle_chunk_t *VAR_1;

    while (VAR_0->cnt-- > 0) {
        VAR_1 = VAR_0->_link;
        VAR_0->_link = VAR_0->_link->next;
        FUNC_0(VAR_1);
    }
}
