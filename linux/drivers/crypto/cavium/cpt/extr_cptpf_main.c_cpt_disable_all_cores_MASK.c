
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct cpt_device {int reg_base; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct cpt_device *VAR_2)
{
 u32 VAR_3, VAR_4 = 100;
 struct device *VAR_5 = &VAR_2->pdev->dev;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_4(VAR_2->reg_base, FUNC_2(0, VAR_3), 0);
  FUNC_6(VAR_1);
 }

 VAR_3 = FUNC_3(VAR_2->reg_base, FUNC_0(0));
 while (VAR_3) {
  FUNC_5(VAR_5, "Cores still busy");
  VAR_3 = FUNC_3(VAR_2->reg_base,
         FUNC_0(0));
  if (VAR_4--)
   break;

  FUNC_6(VAR_1);
 }

 FUNC_4(VAR_2->reg_base, FUNC_1(0), 0);
}
