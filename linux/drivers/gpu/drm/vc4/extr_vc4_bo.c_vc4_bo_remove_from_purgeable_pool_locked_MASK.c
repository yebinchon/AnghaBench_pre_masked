
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int num; } ;
struct vc4_dev {TYPE_1__ purgeable; } ;
struct TYPE_5__ {scalar_t__ size; int dev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct vc4_bo {TYPE_3__ base; int size_head; } ;


 int FUNC_0 (int *) ;
 struct vc4_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vc4_bo *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_1(VAR_0->base.base.dev);
 FUNC_0(&VAR_0->size_head);
 VAR_1->purgeable.num--;
 VAR_1->purgeable.size -= VAR_0->base.base.size;
}
