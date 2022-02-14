
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int bo_lock; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct vc4_bo {int size_head; int unref_head; TYPE_2__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vc4_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vc4_bo *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_2(VAR_0->base.base.dev);

 FUNC_1(&VAR_1->bo_lock);
 FUNC_0(&VAR_0->unref_head);
 FUNC_0(&VAR_0->size_head);
}
