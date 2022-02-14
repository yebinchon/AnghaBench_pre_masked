
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent_sq; } ;
struct throtl_grp {TYPE_1__ service_queue; } ;
struct TYPE_4__ {int parent; } ;


 struct throtl_grp* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct throtl_grp*) ;
 int FUNC_2 (struct throtl_grp*) ;

__attribute__((used)) static bool FUNC_3(struct throtl_grp *VAR_0)
{
 while (1) {
  if (!FUNC_2(VAR_0))
   return 0;
  VAR_0 = FUNC_0(VAR_0->service_queue.parent_sq);
  if (!VAR_0 || !FUNC_1(VAR_0)->parent)
   break;
 }
 return 1;
}
