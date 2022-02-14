
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ khiter_t ;
struct TYPE_4__ {int hash; } ;
typedef TYPE_1__ h2o_filecache_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

void FUNC_6(h2o_filecache_t *VAR_0)
{
    khiter_t VAR_1;
    for (VAR_1 = FUNC_1(VAR_0->hash); VAR_1 != FUNC_2(VAR_0->hash); ++VAR_1) {
        if (!FUNC_3(VAR_0->hash, VAR_1))
            continue;
        FUNC_5(VAR_0, VAR_1);
    }
    FUNC_0(FUNC_4(VAR_0->hash) == 0);
}
