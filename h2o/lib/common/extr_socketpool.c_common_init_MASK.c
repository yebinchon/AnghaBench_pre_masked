
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h2o_socketpool_target_t ;
struct TYPE_8__ {size_t size; int ** entries; } ;
struct TYPE_6__ {int sockets; int mutex; } ;
struct TYPE_7__ {size_t capacity; int timeout; int * balancer; TYPE_4__ targets; TYPE_1__ _shared; } ;
typedef TYPE_2__ h2o_socketpool_t ;
typedef int h2o_balancer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_4__*,size_t) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(h2o_socketpool_t *VAR_0, h2o_socketpool_target_t **VAR_1, size_t VAR_2, size_t VAR_3,
                        h2o_balancer_t *VAR_4)
{
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));

    VAR_0->capacity = VAR_3;
    VAR_0->timeout = 2000;

    FUNC_3(&VAR_0->_shared.mutex, ((void*)0));
    FUNC_0(&VAR_0->_shared.sockets);

    FUNC_1(((void*)0), &VAR_0->targets, VAR_2);
    for (; VAR_0->targets.size < VAR_2; ++VAR_0->targets.size)
        VAR_0->targets.entries[VAR_0->targets.size] = VAR_1[VAR_0->targets.size];

    VAR_0->balancer = VAR_4;
}
