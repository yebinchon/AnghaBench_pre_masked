
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * baseline; } ;
struct TYPE_5__ {int attr_session; int * mkdir_map; int * index; int tmp; int target_path; int * pfx; int update_conflicts; int remove_conflicts; int pool; int removes; TYPE_1__ opts; scalar_t__ opts_free_baseline; } ;
typedef TYPE_2__ checkout_data ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(checkout_data *VAR_0)
{
 if (VAR_0->opts_free_baseline) {
  FUNC_6(VAR_0->opts.baseline);
  VAR_0->opts.baseline = ((void*)0);
 }

 FUNC_7(&VAR_0->removes);
 FUNC_4(&VAR_0->pool);

 FUNC_8(&VAR_0->remove_conflicts);
 FUNC_8(&VAR_0->update_conflicts);

 FUNC_0(VAR_0->pfx);
 VAR_0->pfx = ((void*)0);

 FUNC_2(&VAR_0->target_path);
 FUNC_2(&VAR_0->tmp);

 FUNC_3(VAR_0->index);
 VAR_0->index = ((void*)0);

 FUNC_5(VAR_0->mkdir_map);
 VAR_0->mkdir_map = ((void*)0);

 FUNC_1(&VAR_0->attr_session);
}
