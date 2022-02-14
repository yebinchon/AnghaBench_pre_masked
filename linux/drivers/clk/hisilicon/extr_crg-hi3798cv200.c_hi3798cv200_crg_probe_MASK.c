
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct hisi_crg_dev {int clk_data; int rstc; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* register_clks ) (struct platform_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hisi_crg_dev* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct platform_device*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct hisi_crg_dev*) ;
 int FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct hisi_crg_dev *VAR_4;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->funcs = FUNC_5(&VAR_3->dev);
 if (!VAR_4->funcs)
  return -VAR_0;

 VAR_4->rstc = FUNC_4(VAR_3);
 if (!VAR_4->rstc)
  return -VAR_1;

 VAR_4->clk_data = VAR_4->funcs->register_clks(VAR_3);
 if (FUNC_0(VAR_4->clk_data)) {
  FUNC_3(VAR_4->rstc);
  return FUNC_1(VAR_4->clk_data);
 }

 FUNC_6(VAR_3, VAR_4);
 return 0;
}
