
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbus_dram_target_info {int dummy; } ;
struct ahci_host_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahci_host_priv*,struct mbus_dram_target_info const*) ;
 int FUNC_1 (struct ahci_host_priv*) ;
 struct mbus_dram_target_info* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct ahci_host_priv *VAR_1)
{
 const struct mbus_dram_target_info *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2();
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
 else
  VAR_3 = -VAR_0;

 FUNC_1(VAR_1);

 return VAR_3;
}
