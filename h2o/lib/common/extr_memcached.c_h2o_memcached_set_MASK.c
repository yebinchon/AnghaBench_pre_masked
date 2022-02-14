
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {int base; int len; } ;
struct TYPE_11__ {int expiration; TYPE_7__ value; } ;
struct TYPE_12__ {TYPE_1__ set; } ;
struct TYPE_13__ {TYPE_2__ data; } ;
typedef TYPE_3__ h2o_memcached_req_t ;
typedef int h2o_memcached_context_t ;
struct TYPE_14__ {int len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int ,TYPE_4__,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int,int) ;
 TYPE_7__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int) ;

void FUNC_6(h2o_memcached_context_t *VAR_3, h2o_iovec_t VAR_4, h2o_iovec_t VAR_5, uint32_t VAR_6, int VAR_7)
{
    h2o_memcached_req_t *VAR_8 = FUNC_0(VAR_3, VAR_2, VAR_4, (VAR_7 & VAR_0) != 0);
    if ((VAR_7 & VAR_1) != 0) {
        VAR_8->data.set.value.base = FUNC_4((VAR_5.len + 2) / 3 * 4 + 1);
        VAR_8->data.set.value.len = FUNC_2(VAR_8->data.set.value.base, VAR_5.base, VAR_5.len, 1);
    } else {
        VAR_8->data.set.value = FUNC_3(FUNC_4(VAR_5.len), VAR_5.len);
        FUNC_5(VAR_8->data.set.value.base, VAR_5.base, VAR_5.len);
    }
    VAR_8->data.set.expiration = VAR_6;
    FUNC_1(VAR_3, VAR_8);
}
