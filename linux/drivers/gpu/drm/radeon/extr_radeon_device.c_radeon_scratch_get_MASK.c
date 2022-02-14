
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int num_reg; int* free; int * reg; } ;
struct radeon_device {TYPE_1__ scratch; } ;


 int VAR_0 ;

int FUNC_0(struct radeon_device *VAR_1, uint32_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->scratch.num_reg; VAR_3++) {
  if (VAR_1->scratch.free[VAR_3]) {
   VAR_1->scratch.free[VAR_3] = 0;
   *VAR_2 = VAR_1->scratch.reg[VAR_3];
   return 0;
  }
 }
 return -VAR_0;
}
