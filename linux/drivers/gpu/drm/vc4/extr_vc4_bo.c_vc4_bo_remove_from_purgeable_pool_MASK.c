
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct vc4_dev {TYPE_3__ purgeable; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct vc4_bo {TYPE_2__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vc4_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct vc4_bo*) ;

void FUNC_4(struct vc4_bo *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_2(VAR_0->base.base.dev);

 FUNC_0(&VAR_1->purgeable.lock);
 FUNC_3(VAR_0);
 FUNC_1(&VAR_1->purgeable.lock);
}
