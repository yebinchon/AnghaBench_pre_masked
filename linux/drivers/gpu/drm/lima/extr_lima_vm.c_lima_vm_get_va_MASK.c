
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lima_vm {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct lima_bo_va {TYPE_1__ node; } ;
struct lima_bo {int lock; } ;


 struct lima_bo_va* FUNC_0 (struct lima_vm*,struct lima_bo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u32 FUNC_3(struct lima_vm *VAR_0, struct lima_bo *VAR_1)
{
 struct lima_bo_va *VAR_2;
 u32 VAR_3;

 FUNC_1(&VAR_1->lock);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = VAR_2->node.start;

 FUNC_2(&VAR_1->lock);

 return VAR_3;
}
