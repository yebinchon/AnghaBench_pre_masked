
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpi_ts {int fw_regs_phys; int fw_regs_va; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct rpi_ts *VAR_2 = VAR_1;
 struct device *VAR_3 = &VAR_2->pdev->dev;

 FUNC_0(VAR_3, VAR_0, VAR_2->fw_regs_va, VAR_2->fw_regs_phys);
}
