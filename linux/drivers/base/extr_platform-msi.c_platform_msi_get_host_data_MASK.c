
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_msi_priv_data {void* host_data; } ;
struct irq_domain {struct platform_msi_priv_data* host_data; } ;



void *FUNC_0(struct irq_domain *VAR_0)
{
 struct platform_msi_priv_data *VAR_1 = VAR_0->host_data;
 return VAR_1->host_data;
}
