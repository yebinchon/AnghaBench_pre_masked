
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int prof_gctx_tree_t ;
struct TYPE_4__ {int lock; int cnt_summed; int nlimbo; } ;
typedef TYPE_1__ prof_gctx_t ;
typedef int prof_cnt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_1, prof_gctx_t *VAR_2, prof_gctx_tree_t *VAR_3) {
 FUNC_0(VAR_0);

 FUNC_2(VAR_1, VAR_2->lock);






 VAR_2->nlimbo++;
 FUNC_1(VAR_3, VAR_2);

 FUNC_4(&VAR_2->cnt_summed, 0, sizeof(prof_cnt_t));

 FUNC_3(VAR_1, VAR_2->lock);
}
