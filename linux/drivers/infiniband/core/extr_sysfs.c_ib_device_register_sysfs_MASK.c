
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ alloc_hw_stats; } ;
struct ib_device {TYPE_1__ ops; int coredev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_device*,int *,int ) ;

int FUNC_2(struct ib_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->coredev);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->ops.alloc_hw_stats)
  FUNC_1(VAR_0, ((void*)0), 0);

 return 0;
}
