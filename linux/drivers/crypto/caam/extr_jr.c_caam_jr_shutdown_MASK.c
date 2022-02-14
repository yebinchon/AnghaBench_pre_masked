
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct caam_drv_private_jr {int irqtask; } ;


 int FUNC_0 (struct device*) ;
 struct caam_drv_private_jr* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct caam_drv_private_jr *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->irqtask);

 return VAR_2;
}
