
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_msi_priv_data {int arg; void* host_data; } ;
struct irq_domain_ops {int dummy; } ;
struct irq_domain {int parent; } ;
struct device {int fwnode; int msi_domain; } ;
typedef int irq_write_msi_msg_t ;


 scalar_t__ FUNC_0 (struct platform_msi_priv_data*) ;
 struct irq_domain* FUNC_1 (int ,int ,unsigned int,int ,struct irq_domain_ops const*,struct platform_msi_priv_data*) ;
 int FUNC_2 (struct irq_domain*) ;
 int FUNC_3 (int ,struct device*,unsigned int,int *) ;
 struct platform_msi_priv_data* FUNC_4 (struct device*,unsigned int,int ) ;
 int FUNC_5 (struct platform_msi_priv_data*) ;

struct irq_domain *
FUNC_6(struct device *VAR_0,
        unsigned int VAR_1,
        bool VAR_2,
        irq_write_msi_msg_t VAR_3,
        const struct irq_domain_ops *VAR_4,
        void *VAR_5)
{
 struct platform_msi_priv_data *VAR_6;
 struct irq_domain *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_3);
 if (FUNC_0(VAR_6))
  return ((void*)0);

 VAR_6->host_data = VAR_5;
 VAR_7 = FUNC_1(VAR_0->msi_domain, 0,
          VAR_2 ? 0 : VAR_1,
          VAR_0->fwnode, VAR_4, VAR_6);
 if (!VAR_7)
  goto free_priv;

 VAR_8 = FUNC_3(VAR_7->parent, VAR_0, VAR_1, &VAR_6->arg);
 if (VAR_8)
  goto free_domain;

 return VAR_7;

free_domain:
 FUNC_2(VAR_7);
free_priv:
 FUNC_5(VAR_6);
 return ((void*)0);
}
