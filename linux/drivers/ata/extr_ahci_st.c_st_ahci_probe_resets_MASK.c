
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_ahci_drv_data {int * pwr_rst; int * sw_rst; int * pwr; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct st_ahci_drv_data* plat_data; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct ahci_host_priv*,struct device*) ;

__attribute__((used)) static int FUNC_5(struct ahci_host_priv *VAR_0,
    struct device *VAR_1)
{
 struct st_ahci_drv_data *VAR_2 = VAR_0->plat_data;

 VAR_2->pwr = FUNC_3(VAR_1, "pwr-dwn");
 if (FUNC_0(VAR_2->pwr)) {
  FUNC_2(VAR_1, "power reset control not defined\n");
  VAR_2->pwr = ((void*)0);
 }

 VAR_2->sw_rst = FUNC_3(VAR_1, "sw-rst");
 if (FUNC_0(VAR_2->sw_rst)) {
  FUNC_2(VAR_1, "soft reset control not defined\n");
  VAR_2->sw_rst = ((void*)0);
 }

 VAR_2->pwr_rst = FUNC_3(VAR_1, "pwr-rst");
 if (FUNC_0(VAR_2->pwr_rst)) {
  FUNC_1(VAR_1, "power soft reset control not defined\n");
  VAR_2->pwr_rst = ((void*)0);
 }

 return FUNC_4(VAR_0, VAR_1);
}
