
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdi_device {int vdds_sdi_reg; struct platform_device* pdev; struct dss_device* dss; int datapairs; } ;
struct platform_device {int dev; } ;
struct dss_device {int dummy; } ;
struct device_node {struct sdi_device* data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct sdi_device*) ;
 struct sdi_device* FUNC_5 (int,int ) ;
 struct device_node* FUNC_6 (struct device_node*,int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct sdi_device*) ;

int FUNC_10(struct dss_device *VAR_3, struct platform_device *VAR_4,
    struct device_node *VAR_5)
{
 struct sdi_device *VAR_6;
 struct device_node *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_5, ((void*)0));
 if (!VAR_7) {
  VAR_9 = 0;
  goto err_free;
 }

 VAR_9 = FUNC_8(VAR_7, "datapairs", &VAR_8);
 FUNC_7(VAR_7);
 if (VAR_9) {
  FUNC_0("failed to parse datapairs\n");
  goto err_free;
 }

 VAR_6->datapairs = VAR_8;
 VAR_6->dss = VAR_3;

 VAR_6->pdev = VAR_4;
 VAR_5->data = VAR_6;

 VAR_6->vdds_sdi_reg = FUNC_3(&VAR_4->dev, "vdds_sdi");
 if (FUNC_1(VAR_6->vdds_sdi_reg)) {
  VAR_9 = FUNC_2(VAR_6->vdds_sdi_reg);
  if (VAR_9 != -VAR_1)
   FUNC_0("can't get VDDS_SDI regulator\n");
  goto err_free;
 }

 VAR_9 = FUNC_9(VAR_6);
 if (VAR_9)
  goto err_free;

 return 0;

err_free:
 FUNC_4(VAR_6);

 return VAR_9;
}
