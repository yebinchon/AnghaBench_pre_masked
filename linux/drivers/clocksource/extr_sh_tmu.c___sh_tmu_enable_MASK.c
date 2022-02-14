
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_channel {int index; TYPE_2__* tmu; } ;
struct TYPE_4__ {TYPE_1__* pdev; int clk; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct sh_tmu_channel*,int) ;
 int FUNC_3 (struct sh_tmu_channel*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct sh_tmu_channel *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4->tmu->clk);
 if (VAR_5) {
  FUNC_1(&VAR_4->tmu->pdev->dev, "ch%u: cannot enable clock\n",
   VAR_4->index);
  return VAR_5;
 }


 FUNC_2(VAR_4, 0);


 FUNC_3(VAR_4, VAR_1, 0xffffffff);
 FUNC_3(VAR_4, VAR_0, 0xffffffff);


 FUNC_3(VAR_4, VAR_2, VAR_3);


 FUNC_2(VAR_4, 1);

 return 0;
}
