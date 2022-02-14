
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_ahci_plat {int dummy; } ;
struct ahci_host_priv {struct mtk_ahci_plat* plat_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_ahci_plat* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct ahci_host_priv*,struct device*) ;
 int FUNC_8 (struct ahci_host_priv*,struct device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct mtk_ahci_plat *VAR_6;
 struct ahci_host_priv *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_4, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->plat_data = VAR_6;

 VAR_8 = FUNC_7(VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_8(VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_4, VAR_7, &VAR_3,
          &VAR_2);
 if (VAR_8)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_2(VAR_7);
 return VAR_8;
}
