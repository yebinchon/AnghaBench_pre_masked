
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ _refcnt; int fd; int _lru; } ;
typedef TYPE_1__ h2o_filecache_ref_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(h2o_filecache_ref_t *VAR_0)
{
    if (--VAR_0->_refcnt != 0)
        return;
    FUNC_0(!FUNC_3(&VAR_0->_lru));
    if (VAR_0->fd != -1) {
        FUNC_1(VAR_0->fd);
        VAR_0->fd = -1;
    }
    FUNC_2(VAR_0);
}
