
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; int * bytes; TYPE_1__* _prototype; } ;
typedef TYPE_2__ h2o_buffer_t ;
struct TYPE_5__ {TYPE_2__ _initial_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(h2o_buffer_t **VAR_0, size_t VAR_1)
{
    h2o_buffer_t *VAR_2 = *VAR_0;

    if (VAR_1 != 0) {
        FUNC_0(VAR_2->bytes != ((void*)0));
        if (VAR_2->size == VAR_1) {
            *VAR_0 = &VAR_2->_prototype->_initial_buf;
            FUNC_1(VAR_2);
        } else {
            VAR_2->size -= VAR_1;
            VAR_2->bytes += VAR_1;
        }
    }
}
