
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int prof_tctx_tree_t ;
struct TYPE_6__ {int state; TYPE_5__* gctx; } ;
typedef TYPE_1__ prof_tctx_t ;
struct TYPE_7__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_5__*) ;




__attribute__((used)) static prof_tctx_t *
FUNC_3(prof_tctx_tree_t *VAR_0, prof_tctx_t *VAR_1, void *VAR_2) {
 tsdn_t *VAR_3 = (tsdn_t *)VAR_2;

 FUNC_0(VAR_3, VAR_1->gctx->lock);

 switch (VAR_1->state) {
 case 129:

  break;
 case 130:
 case 128:
  FUNC_2(VAR_3, VAR_1, VAR_1->gctx);
  break;
 default:
  FUNC_1();
 }

 return ((void*)0);
}
