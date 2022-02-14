
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ring_int; } ;
struct radeon_device {TYPE_1__ irq; } ;


 int FUNC_0 (int *) ;

bool FUNC_1(struct radeon_device *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->irq.ring_int[VAR_1]) == 1;
}
