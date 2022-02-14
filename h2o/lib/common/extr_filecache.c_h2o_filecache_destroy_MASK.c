
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hash; int lru; } ;
typedef TYPE_1__ h2o_filecache_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;

void FUNC_6(h2o_filecache_t *VAR_1)
{
    FUNC_2(VAR_1);
    FUNC_0(FUNC_5(VAR_1->hash) == 0);
    FUNC_0(FUNC_3(&VAR_1->lru));
    FUNC_4(VAR_0, VAR_1->hash);
    FUNC_1(VAR_1);
}
