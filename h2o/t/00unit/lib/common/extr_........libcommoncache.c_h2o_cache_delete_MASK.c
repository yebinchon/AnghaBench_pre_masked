
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int khiter_t ;
struct TYPE_12__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;
struct TYPE_13__ {int table; } ;
typedef TYPE_2__ h2o_cache_t ;
struct TYPE_14__ {scalar_t__ keyhash; TYPE_1__ key; } ;
typedef TYPE_3__ h2o_cache_ref_t ;
typedef scalar_t__ h2o_cache_hashcode_t ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(h2o_cache_t *VAR_0, uint64_t VAR_1, h2o_iovec_t VAR_2, h2o_cache_hashcode_t VAR_3)
{
    h2o_cache_ref_t VAR_4;
    khiter_t VAR_5;

    if (VAR_3 == 0)
        VAR_3 = FUNC_1(VAR_2.base, VAR_2.len);
    VAR_4.key = VAR_2;
    VAR_4.keyhash = VAR_3;

    FUNC_4(VAR_0);

    FUNC_5(VAR_0, VAR_1);

    if ((VAR_5 = FUNC_3(VAR_0, VAR_0->table, &VAR_4)) != FUNC_2(VAR_0->table))
        FUNC_0(VAR_0, VAR_5, 0);

    FUNC_6(VAR_0);
}
