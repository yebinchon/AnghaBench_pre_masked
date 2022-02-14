
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cpt_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct cpt_device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct cpt_device *VAR_0)
{
 int VAR_1 = 0;
 struct device *VAR_2 = &VAR_0->pdev->dev;

 VAR_1 = FUNC_0(VAR_0, "cpt8x-mc-ae.out", 1);
 if (VAR_1) {
  FUNC_1(VAR_2, "ae:cpt_ucode_load failed with ret: %d\n", VAR_1);
  return VAR_1;
 }
 VAR_1 = FUNC_0(VAR_0, "cpt8x-mc-se.out", 0);
 if (VAR_1) {
  FUNC_1(VAR_2, "se:cpt_ucode_load failed with ret: %d\n", VAR_1);
  return VAR_1;
 }

 return VAR_1;
}
