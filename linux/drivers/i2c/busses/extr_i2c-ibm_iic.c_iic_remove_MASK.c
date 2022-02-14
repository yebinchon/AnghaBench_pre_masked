
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ibm_iic_private {int vaddr; scalar_t__ irq; int adap; } ;


 int FUNC_0 (scalar_t__,struct ibm_iic_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ibm_iic_private*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ibm_iic_private*) ;
 struct ibm_iic_private* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct ibm_iic_private *VAR_1 = FUNC_5(VAR_0);

 FUNC_1(&VAR_1->adap);

 if (VAR_1->irq) {
  FUNC_2(VAR_1, 0);
  FUNC_0(VAR_1->irq, VAR_1);
 }

 FUNC_3(VAR_1->vaddr);
 FUNC_4(VAR_1);

 return 0;
}
