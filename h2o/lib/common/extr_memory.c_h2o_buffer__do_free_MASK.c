
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ capacity; int _fd; TYPE_2__* _prototype; } ;
typedef TYPE_3__ h2o_buffer_t ;
struct TYPE_7__ {scalar_t__ capacity; } ;
struct TYPE_8__ {int allocator; TYPE_1__ _initial_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(h2o_buffer_t *VAR_0)
{

    if (VAR_0->capacity == VAR_0->_prototype->_initial_buf.capacity) {
        FUNC_2(&VAR_0->_prototype->allocator, VAR_0);
    } else if (VAR_0->_fd != -1) {
        FUNC_0(VAR_0->_fd);
        FUNC_3((void *)VAR_0, FUNC_4(VAR_0->capacity));
    } else {
        FUNC_1(VAR_0);
    }
}
