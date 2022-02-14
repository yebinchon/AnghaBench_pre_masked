
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_3__ {int extent_avail_mtx; int extent_avail_cnt; int extent_avail; } ;
typedef TYPE_1__ arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(tsdn_t *VAR_1, arena_t *VAR_2, extent_t *VAR_3) {
 FUNC_2(VAR_1, &VAR_2->extent_avail_mtx);
 FUNC_1(&VAR_2->extent_avail, VAR_3);
 FUNC_0(&VAR_2->extent_avail_cnt, 1, VAR_0);
 FUNC_3(VAR_1, &VAR_2->extent_avail_mtx);
}
