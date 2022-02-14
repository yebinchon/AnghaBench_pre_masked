
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synps_edac_priv {int dummy; } ;
struct platform_device {int dev; } ;
struct mem_ctl_info {struct synps_edac_priv* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ,int ,int ,struct mem_ctl_info*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (struct synps_edac_priv*) ;
 int VAR_2 ;
 int FUNC_4 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct mem_ctl_info *VAR_3,
       struct platform_device *VAR_4)
{
 struct synps_edac_priv *VAR_5 = VAR_3->pvt_info;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_4(VAR_4, 0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_1, VAR_0,
       "No IRQ %d in DT\n", VAR_7);
  return VAR_7;
 }

 VAR_6 = FUNC_1(&VAR_4->dev, VAR_7, VAR_2,
          0, FUNC_0(&VAR_4->dev), VAR_3);
 if (VAR_6 < 0) {
  FUNC_2(VAR_1, VAR_0, "Failed to request IRQ\n");
  return VAR_6;
 }

 FUNC_3(VAR_5);

 return 0;
}
