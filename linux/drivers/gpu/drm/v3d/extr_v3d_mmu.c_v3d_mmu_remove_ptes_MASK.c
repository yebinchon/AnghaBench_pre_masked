
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct v3d_dev {int dev; scalar_t__* pt; } ;
struct TYPE_6__ {size_t start; } ;
struct TYPE_4__ {size_t size; int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct v3d_bo {TYPE_3__ node; TYPE_2__ base; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct v3d_dev* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct v3d_dev*) ;

void FUNC_3(struct v3d_bo *VAR_1)
{
 struct v3d_dev *VAR_2 = FUNC_1(VAR_1->base.base.dev);
 u32 VAR_3 = VAR_1->base.base.size >> VAR_0;
 u32 VAR_4;

 for (VAR_4 = VAR_1->node.start; VAR_4 < VAR_1->node.start + VAR_3; VAR_4++)
  VAR_2->pt[VAR_4] = 0;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2->dev, "MMU flush timeout\n");
}
