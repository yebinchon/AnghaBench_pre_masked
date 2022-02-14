
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct dss_device {int dummy; } ;
struct dpi_data {int dss_model; int lock; struct dss_device* dss; struct platform_device* pdev; int data_lines; } ;
struct device_node {struct dpi_data* data; } ;
typedef enum dss_model { ____Placeholder_dss_model } dss_model ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dpi_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct dpi_data*,struct device_node*) ;
 int FUNC_3 (struct dpi_data*) ;
 int FUNC_4 (int *) ;
 struct device_node* FUNC_5 (struct device_node*,int *) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char*,int *) ;

int FUNC_8(struct dss_device *VAR_2, struct platform_device *VAR_3,
    struct device_node *VAR_4, enum dss_model VAR_5)
{
 struct dpi_data *VAR_6;
 struct device_node *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_4, ((void*)0));
 if (!VAR_7)
  return 0;

 VAR_9 = FUNC_7(VAR_7, "data-lines", &VAR_8);
 FUNC_6(VAR_7);
 if (VAR_9) {
  FUNC_0("failed to parse datalines\n");
  return VAR_9;
 }

 VAR_6->data_lines = VAR_8;

 VAR_6->pdev = VAR_3;
 VAR_6->dss_model = VAR_5;
 VAR_6->dss = VAR_2;
 VAR_4->data = VAR_6;

 FUNC_4(&VAR_6->lock);

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9)
  return VAR_9;

 return FUNC_2(VAR_6, VAR_4);
}
