
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int dss; int clk; } ;
struct dss_device {scalar_t__ video2_pll; scalar_t__ video1_pll; TYPE_1__ debugfs; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dss_device*) ;
 int FUNC_3 (struct dss_device*) ;
 int FUNC_4 (struct dss_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct dss_device*) ;
 int FUNC_7 (int *) ;
 struct dss_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct dss_device *VAR_2 = FUNC_8(VAR_1);

 FUNC_7(&VAR_1->dev);

 FUNC_0(&VAR_1->dev, &VAR_0);

 FUNC_1(VAR_2->debugfs.clk);
 FUNC_1(VAR_2->debugfs.dss);
 FUNC_4(VAR_2);

 FUNC_9(&VAR_1->dev);

 FUNC_3(VAR_2);

 if (VAR_2->video1_pll)
  FUNC_5(VAR_2->video1_pll);

 if (VAR_2->video2_pll)
  FUNC_5(VAR_2->video2_pll);

 FUNC_2(VAR_2);

 FUNC_6(VAR_2);

 return 0;
}
