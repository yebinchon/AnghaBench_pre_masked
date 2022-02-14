
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_ahci_drv_data {scalar_t__ pwr_rst; scalar_t__ sw_rst; scalar_t__ pwr; } ;
struct device {int dummy; } ;
struct ahci_host_priv {struct st_ahci_drv_data* plat_data; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ahci_host_priv *VAR_0,
    struct device *VAR_1)
{
 struct st_ahci_drv_data *VAR_2 = VAR_0->plat_data;
 int VAR_3;

 if (VAR_2->pwr) {
  VAR_3 = FUNC_1(VAR_2->pwr);
  if (VAR_3) {
   FUNC_0(VAR_1, "unable to bring out of pwrdwn\n");
   return VAR_3;
  }
 }

 if (VAR_2->sw_rst) {
  VAR_3 = FUNC_1(VAR_2->sw_rst);
  if (VAR_3) {
   FUNC_0(VAR_1, "unable to bring out of sw-rst\n");
   return VAR_3;
  }
 }

 if (VAR_2->pwr_rst) {
  VAR_3 = FUNC_1(VAR_2->pwr_rst);
  if (VAR_3) {
   FUNC_0(VAR_1, "unable to bring out of pwr-rst\n");
   return VAR_3;
  }
 }

 return 0;
}
