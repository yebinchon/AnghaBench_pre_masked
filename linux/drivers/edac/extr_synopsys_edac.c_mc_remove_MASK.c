
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synps_edac_priv {TYPE_1__* p_data; } ;
struct platform_device {int dev; } ;
struct mem_ctl_info {struct synps_edac_priv* pvt_info; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct synps_edac_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_4(VAR_2);
 struct synps_edac_priv *VAR_4 = VAR_3->pvt_info;

 if (VAR_4->p_data->quirks & VAR_1)
  FUNC_0(VAR_4);






 FUNC_1(&VAR_2->dev);
 FUNC_2(VAR_3);

 return 0;
}
