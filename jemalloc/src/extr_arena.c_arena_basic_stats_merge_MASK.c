
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int ssize_t ;
struct TYPE_7__ {int eset_muzzy; int eset_dirty; int nactive; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 char** VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(tsdn_t *VAR_2, arena_t *VAR_3, unsigned *VAR_4,
    const char **VAR_5, ssize_t *VAR_6, ssize_t *VAR_7,
    size_t *VAR_8, size_t *VAR_9, size_t *VAR_10) {
 *VAR_4 += FUNC_3(VAR_3, 0);
 *VAR_5 = VAR_1[FUNC_1(VAR_3)];
 *VAR_6 = FUNC_0(VAR_3);
 *VAR_7 = FUNC_2(VAR_3);
 *VAR_8 += FUNC_4(&VAR_3->nactive, VAR_0);
 *VAR_9 += FUNC_5(&VAR_3->eset_dirty);
 *VAR_10 += FUNC_5(&VAR_3->eset_muzzy);
}
