
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpi_data {int dummy; } ;
struct device_node {struct dpi_data* data; } ;


 int FUNC_0 (struct device_node*) ;

void FUNC_1(struct device_node *VAR_0)
{
 struct dpi_data *VAR_1 = VAR_0->data;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0);
}
