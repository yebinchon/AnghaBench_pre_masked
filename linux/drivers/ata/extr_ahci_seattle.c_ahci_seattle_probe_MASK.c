
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ahci_host_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct ahci_host_priv*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 struct ahci_host_priv* FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct ahci_host_priv*,int ,int *) ;
 int VAR_0 ;
 int FUNC_6 (struct platform_device*,struct ahci_host_priv*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 int VAR_2;
 struct ahci_host_priv *VAR_3;

 VAR_3 = FUNC_4(VAR_1, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2 = FUNC_3(VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, VAR_3,
         FUNC_6(VAR_1, VAR_3),
         &VAR_0);
 if (VAR_2)
  goto disable_resources;

 return 0;
disable_resources:
 FUNC_2(VAR_3);
 return VAR_2;
}
