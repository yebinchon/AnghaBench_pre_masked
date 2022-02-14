
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct irq_domain* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,unsigned int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct irq_domain*,struct device*,unsigned int) ;

int FUNC_7(struct device *VAR_1,
     unsigned int VAR_2)
{
 struct irq_domain *VAR_3;
 int VAR_4;

 if (!FUNC_5(FUNC_2(VAR_1)))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto cleanup_msi_descs;
 }





 VAR_4 = FUNC_6(VAR_3, VAR_1, VAR_2);

 if (VAR_4) {
  FUNC_0(VAR_1, "Failed to allocate IRQs\n");
  goto cleanup_msi_descs;
 }

 return 0;

cleanup_msi_descs:
 FUNC_4(VAR_1);
 return VAR_4;
}
