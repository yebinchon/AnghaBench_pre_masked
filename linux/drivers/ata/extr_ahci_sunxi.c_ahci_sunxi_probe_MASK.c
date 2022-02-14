
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ahci_host_priv {int flags; int mmio; int start_engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_5 ;
 int FUNC_6 (struct device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct ahci_host_priv *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_9, VAR_4);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_11->start_engine = VAR_7;

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_6(VAR_10, VAR_11->mmio);
 if (VAR_12)
  goto disable_resources;

 VAR_11->flags = VAR_0 | VAR_1 |
         VAR_3;






 if (!VAR_8)
  VAR_11->flags |= VAR_2;

 VAR_12 = FUNC_5(VAR_9, VAR_11, &VAR_6,
         &VAR_5);
 if (VAR_12)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_2(VAR_11);
 return VAR_12;
}
