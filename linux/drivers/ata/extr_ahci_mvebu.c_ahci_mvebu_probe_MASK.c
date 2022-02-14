
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ahci_mvebu_plat_data {int (* plat_config ) (struct ahci_host_priv*) ;int flags; } ;
struct ahci_host_priv {int stop_engine; void* plat_data; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int *,int *) ;
 int VAR_3 ;
 struct ahci_mvebu_plat_data* FUNC_6 (int *) ;
 int FUNC_7 (struct ahci_host_priv*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 const struct ahci_mvebu_plat_data *VAR_5;
 struct ahci_host_priv *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_6(&VAR_4->dev);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_4, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->flags |= VAR_5->flags;
 VAR_6->plat_data = (void *)VAR_5;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6->stop_engine = VAR_2;

 VAR_7 = VAR_5->plat_config(VAR_6);
 if (VAR_7)
  goto disable_resources;

 VAR_7 = FUNC_5(VAR_4, VAR_6, &VAR_1,
         &VAR_3);
 if (VAR_7)
  goto disable_resources;

 return 0;

disable_resources:
 FUNC_2(VAR_6);
 return VAR_7;
}
