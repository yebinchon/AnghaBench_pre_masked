
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int prof_tctx_tree_t ;
struct TYPE_6__ {int state; TYPE_1__* gctx; } ;
typedef TYPE_2__ prof_tctx_t ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;




__attribute__((used)) static prof_tctx_t *
FUNC_2(prof_tctx_tree_t *VAR_0, prof_tctx_t *VAR_1, void *VAR_2) {
 tsdn_t *VAR_3 = (tsdn_t *)VAR_2;
 prof_tctx_t *VAR_4;

 FUNC_0(VAR_3, VAR_1->gctx->lock);

 switch (VAR_1->state) {
 case 129:

  break;
 case 130:
  VAR_1->state = 129;
  break;
 case 128:
  VAR_4 = VAR_1;
  goto label_return;
 default:
  FUNC_1();
 }

 VAR_4 = ((void*)0);
label_return:
 return VAR_4;
}
