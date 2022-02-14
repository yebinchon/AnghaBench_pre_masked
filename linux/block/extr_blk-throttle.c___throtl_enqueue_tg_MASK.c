
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent_sq; } ;
struct throtl_grp {TYPE_2__ service_queue; int flags; } ;
struct TYPE_3__ {int nr_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct throtl_grp*) ;

__attribute__((used)) static void FUNC_1(struct throtl_grp *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_1->flags |= VAR_0;
 VAR_1->service_queue.parent_sq->nr_pending++;
}
