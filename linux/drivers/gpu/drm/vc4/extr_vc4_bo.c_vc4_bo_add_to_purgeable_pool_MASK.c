
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; int size; int num; int list; } ;
struct vc4_dev {TYPE_3__ purgeable; } ;
struct TYPE_4__ {scalar_t__ size; int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vc4_bo {TYPE_2__ base; int size_head; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vc4_dev* FUNC_3 (int ) ;

void FUNC_4(struct vc4_bo *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_3(VAR_0->base.base.dev);

 FUNC_1(&VAR_1->purgeable.lock);
 FUNC_0(&VAR_0->size_head, &VAR_1->purgeable.list);
 VAR_1->purgeable.num++;
 VAR_1->purgeable.size += VAR_0->base.base.size;
 FUNC_2(&VAR_1->purgeable.lock);
}
