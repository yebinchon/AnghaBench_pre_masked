
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; int base; } ;
struct TYPE_6__ {TYPE_1__ key; } ;
typedef TYPE_2__ h2o_cache_ref_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(h2o_cache_ref_t *VAR_0, h2o_cache_ref_t *VAR_1)
{
    return VAR_0->key.len == VAR_1->key.len && FUNC_0(VAR_0->key.base, VAR_1->key.base, VAR_0->key.len) == 0;
}
