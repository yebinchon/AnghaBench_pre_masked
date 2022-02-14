
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent_sq; } ;
struct throtl_grp {int flags; TYPE_1__ service_queue; int rb_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct throtl_grp *VAR_1)
{
 FUNC_0(&VAR_1->rb_node, VAR_1->service_queue.parent_sq);
 VAR_1->flags &= ~VAR_0;
}
