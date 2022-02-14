
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rpm_clk_desc {size_t num_clks; struct clk_rpm** clks; } ;
struct rpm_cc {size_t num_clks; int xo_lock; struct clk_rpm** clks; } ;
struct qcom_rpm {int dummy; } ;
struct TYPE_5__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk_rpm {int hw; struct rpm_cc* rpm_cc; struct qcom_rpm* rpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clk_rpm*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct qcom_rpm* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 struct rpm_cc* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,struct rpm_cc*) ;
 struct rpm_clk_desc* FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct rpm_cc *VAR_6;
 int VAR_7;
 size_t VAR_8, VAR_9;
 struct qcom_rpm *VAR_10;
 struct clk_rpm **VAR_11;
 const struct rpm_clk_desc *VAR_12;

 VAR_10 = FUNC_2(VAR_5->dev.parent);
 if (!VAR_10) {
  FUNC_1(&VAR_5->dev, "Unable to retrieve handle to RPM\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_7(&VAR_5->dev);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = VAR_12->clks;
 VAR_8 = VAR_12->num_clks;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->clks = VAR_11;
 VAR_6->num_clks = VAR_8;
 FUNC_5(&VAR_6->xo_lock);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (!VAR_11[VAR_9])
   continue;

  VAR_11[VAR_9]->rpm = VAR_10;
  VAR_11[VAR_9]->rpm_cc = VAR_6;

  VAR_7 = FUNC_0(VAR_11[VAR_9]);
  if (VAR_7)
   goto err;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (!VAR_11[VAR_9])
   continue;

  VAR_7 = FUNC_3(&VAR_5->dev, &VAR_11[VAR_9]->hw);
  if (VAR_7)
   goto err;
 }

 VAR_7 = FUNC_6(VAR_5->dev.of_node, VAR_4,
         VAR_6);
 if (VAR_7)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_5->dev, "Error registering RPM Clock driver (%d)\n", VAR_7);
 return VAR_7;
}
