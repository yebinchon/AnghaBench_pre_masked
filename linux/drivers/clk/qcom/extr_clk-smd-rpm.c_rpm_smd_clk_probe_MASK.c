
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rpm_smd_clk_desc {size_t num_clks; struct clk_smd_rpm** clks; } ;
struct rpm_cc {size_t num_clks; struct clk_smd_rpm** clks; } ;
struct qcom_smd_rpm {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_smd_rpm {int hw; struct qcom_smd_rpm* rpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qcom_smd_rpm*) ;
 int FUNC_1 (struct clk_smd_rpm*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct qcom_smd_rpm* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 struct rpm_cc* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,struct rpm_cc*) ;
 struct rpm_smd_clk_desc* FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct rpm_cc *VAR_6;
 int VAR_7;
 size_t VAR_8, VAR_9;
 struct qcom_smd_rpm *VAR_10;
 struct clk_smd_rpm **VAR_11;
 const struct rpm_smd_clk_desc *VAR_12;

 VAR_10 = FUNC_3(VAR_5->dev.parent);
 if (!VAR_10) {
  FUNC_2(&VAR_5->dev, "Unable to retrieve handle to RPM\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_7(&VAR_5->dev);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = VAR_12->clks;
 VAR_8 = VAR_12->num_clks;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->clks = VAR_11;
 VAR_6->num_clks = VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (!VAR_11[VAR_9])
   continue;

  VAR_11[VAR_9]->rpm = VAR_10;

  VAR_7 = FUNC_1(VAR_11[VAR_9]);
  if (VAR_7)
   goto err;
 }

 VAR_7 = FUNC_0(VAR_10);
 if (VAR_7)
  goto err;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (!VAR_11[VAR_9])
   continue;

  VAR_7 = FUNC_4(&VAR_5->dev, &VAR_11[VAR_9]->hw);
  if (VAR_7)
   goto err;
 }

 VAR_7 = FUNC_6(&VAR_5->dev, VAR_4,
         VAR_6);
 if (VAR_7)
  goto err;

 return 0;
err:
 FUNC_2(&VAR_5->dev, "Error registering SMD clock driver (%d)\n", VAR_7);
 return VAR_7;
}
