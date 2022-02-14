
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_l2_pdata {scalar_t__ l2_vbase; } ;
struct edac_device_ctl_info {struct mpc85xx_l2_pdata* pvt_info; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct edac_device_ctl_info
        *VAR_1, char *VAR_2)
{
 struct mpc85xx_l2_pdata *VAR_3 = VAR_1->pvt_info;
 return FUNC_1(VAR_2, "0x%08x",
         FUNC_0(VAR_3->l2_vbase + VAR_0));
}
