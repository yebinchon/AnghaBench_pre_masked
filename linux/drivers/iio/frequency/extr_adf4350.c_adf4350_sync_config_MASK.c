
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct adf4350_state {int* regs_hw; int* regs; TYPE_1__* spi; int val; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct adf4350_state *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_4 = VAR_1; VAR_4 >= VAR_0; VAR_4--) {
  if ((VAR_2->regs_hw[VAR_4] != VAR_2->regs[VAR_4]) ||
   ((VAR_4 == VAR_0) && VAR_5)) {
   switch (VAR_4) {
   case 129:
   case 128:
    VAR_5 = 1;
    break;
   }

   VAR_2->val = FUNC_0(VAR_2->regs[VAR_4] | VAR_4);
   VAR_3 = FUNC_2(VAR_2->spi, &VAR_2->val, 4);
   if (VAR_3 < 0)
    return VAR_3;
   VAR_2->regs_hw[VAR_4] = VAR_2->regs[VAR_4];
   FUNC_1(&VAR_2->spi->dev, "[%d] 0x%X\n",
    VAR_4, (u32)VAR_2->regs[VAR_4] | VAR_4);
  }
 }
 return 0;
}
