
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_l2_pdata {scalar_t__ l2_vbase; } ;
struct edac_device_ctl_info {struct mpc85xx_l2_pdata* pvt_info; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct edac_device_ctl_info
            *VAR_1, const char *VAR_2,
            size_t VAR_3)
{
 struct mpc85xx_l2_pdata *VAR_4 = VAR_1->pvt_info;
 if (FUNC_0(*VAR_2)) {
  FUNC_1(VAR_4->l2_vbase + VAR_0,
    FUNC_2(VAR_2, ((void*)0), 0));
  return VAR_3;
 }
 return 0;
}
