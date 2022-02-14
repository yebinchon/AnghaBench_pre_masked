
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {int irq_tasklet; scalar_t__ use_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct ccp_device*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ccp_device *VAR_3 = (struct ccp_device *)VAR_2;

 FUNC_0(VAR_3);
 if (VAR_3->use_tasklet)
  FUNC_2(&VAR_3->irq_tasklet);
 else
  FUNC_1((unsigned long)VAR_3);

 return VAR_0;
}
