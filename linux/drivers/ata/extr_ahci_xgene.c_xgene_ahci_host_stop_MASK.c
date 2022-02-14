
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_host {struct ahci_host_priv* private_data; } ;
struct ahci_host_priv {int dummy; } ;


 int FUNC_0 (struct ahci_host_priv*) ;

__attribute__((used)) static void FUNC_1(struct ata_host *VAR_0)
{
 struct ahci_host_priv *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);
}
