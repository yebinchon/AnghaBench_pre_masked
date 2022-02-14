
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int message; int receiver; } ;
struct TYPE_7__ {TYPE_1__ get; } ;
struct TYPE_8__ {int type; TYPE_2__ data; } ;
typedef TYPE_3__ h2o_memcached_req_t ;



 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(h2o_memcached_req_t *VAR_0)
{
    switch (VAR_0->type) {
    case 128:
        FUNC_1(VAR_0->data.get.receiver, &VAR_0->data.get.message);
        break;
    default:
        FUNC_0(VAR_0);
        break;
    }
}
