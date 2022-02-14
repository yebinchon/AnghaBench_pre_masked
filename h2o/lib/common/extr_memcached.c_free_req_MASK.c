
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_7__* base; int len; } ;
struct TYPE_15__ {TYPE_4__ value; } ;
struct TYPE_12__ {TYPE_7__* base; int len; } ;
struct TYPE_11__ {int link; } ;
struct TYPE_13__ {TYPE_2__ value; TYPE_1__ message; } ;
struct TYPE_16__ {TYPE_5__ set; TYPE_3__ get; } ;
struct TYPE_17__ {int type; TYPE_6__ data; int pending; } ;
typedef TYPE_7__ h2o_memcached_req_t ;





 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(h2o_memcached_req_t *VAR_0)
{
    FUNC_0(!FUNC_2(&VAR_0->pending));
    switch (VAR_0->type) {
    case 129:
        FUNC_0(!FUNC_2(&VAR_0->data.get.message.link));
        FUNC_3(VAR_0->data.get.value.base, 0, VAR_0->data.get.value.len);
        FUNC_1(VAR_0->data.get.value.base);
        break;
    case 128:
        FUNC_3(VAR_0->data.set.value.base, 0, VAR_0->data.set.value.len);
        FUNC_1(VAR_0->data.set.value.base);
        break;
    case 130:
        break;
    default:
        FUNC_0(!"FIXME");
        break;
    }
    FUNC_1(VAR_0);
}
