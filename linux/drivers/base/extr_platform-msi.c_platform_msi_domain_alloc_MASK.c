
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_msi_priv_data {int arg; int dev; } ;
struct irq_domain {int parent; struct platform_msi_priv_data* host_data; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int,int *) ;
 int FUNC_1 (int ,unsigned int,unsigned int,struct platform_msi_priv_data*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;

int FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct platform_msi_priv_data *VAR_3 = VAR_0->host_data;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0->parent, VAR_3->dev,
           VAR_1, VAR_2, &VAR_3->arg);
 if (VAR_4)
  FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_4;
}
