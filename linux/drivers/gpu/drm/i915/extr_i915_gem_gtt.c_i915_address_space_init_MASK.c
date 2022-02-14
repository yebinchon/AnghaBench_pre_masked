
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int color; } ;
struct TYPE_4__ {TYPE_1__ head_node; } ;
struct i915_address_space {int bound_list; int unbound_list; int free_pages; TYPE_2__ mm; int total; int mutex; int i915; int rcu; int ref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct i915_address_space *VAR_2, int VAR_3)
{
 FUNC_5(&VAR_2->ref);
 FUNC_2(&VAR_2->rcu, VAR_1);






 FUNC_7(&VAR_2->mutex);
 FUNC_6(&VAR_2->mutex, VAR_3);
 FUNC_4(VAR_2->i915, &VAR_2->mutex);

 FUNC_0(!VAR_2->total);
 FUNC_3(&VAR_2->mm, 0, VAR_2->total);
 VAR_2->mm.head_node.color = VAR_0;

 FUNC_8(&VAR_2->free_pages);

 FUNC_1(&VAR_2->unbound_list);
 FUNC_1(&VAR_2->bound_list);
}
