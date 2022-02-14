
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct prof_gctx_dump_iter_arg_s {int tsdn; int propagate_err; } ;
typedef int prof_gctx_tree_t ;
struct TYPE_5__ {int lock; int bt; } ;
typedef TYPE_1__ prof_gctx_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*,int *,int *) ;

__attribute__((used)) static prof_gctx_t *
FUNC_3(prof_gctx_tree_t *VAR_0, prof_gctx_t *VAR_1, void *VAR_2) {
 prof_gctx_t *VAR_3;
 struct prof_gctx_dump_iter_arg_s *VAR_4 =
     (struct prof_gctx_dump_iter_arg_s *)VAR_2;

 FUNC_0(VAR_4->tsdn, VAR_1->lock);

 if (FUNC_2(VAR_4->tsdn, VAR_4->propagate_err, VAR_1, &VAR_1->bt,
     VAR_0)) {
  VAR_3 = VAR_1;
  goto label_return;
 }

 VAR_3 = ((void*)0);
label_return:
 FUNC_1(VAR_4->tsdn, VAR_1->lock);
 return VAR_3;
}
