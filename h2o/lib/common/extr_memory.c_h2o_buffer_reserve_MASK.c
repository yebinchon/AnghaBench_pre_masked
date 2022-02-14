
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_8__ {int capacity; } ;
typedef TYPE_2__ h2o_buffer_t ;


 TYPE_1__ FUNC_0 (TYPE_2__**,size_t) ;
 int FUNC_1 (char*,int ,size_t) ;

h2o_iovec_t FUNC_2(h2o_buffer_t **VAR_0, size_t VAR_1)
{
    h2o_iovec_t VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2.base == ((void*)0)) {
        FUNC_1("failed to reserve buffer; capacity: %zu, min_gurantee: %zu", (*VAR_0)->capacity, VAR_1);
    }
    return VAR_2;
}
