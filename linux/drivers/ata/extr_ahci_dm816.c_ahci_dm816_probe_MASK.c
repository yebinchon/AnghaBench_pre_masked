
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ahci_host_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*,struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ahci_host_priv*) ;
 int FUNC_4 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct ahci_host_priv *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2, 0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto disable_resources;

 VAR_5 = FUNC_6(VAR_2, VAR_4,
         &VAR_1,
         &VAR_0);
 if (VAR_5)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_3(VAR_4);

 return VAR_5;
}
