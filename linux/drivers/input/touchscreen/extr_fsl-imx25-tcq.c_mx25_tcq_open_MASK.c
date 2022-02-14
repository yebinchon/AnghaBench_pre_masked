
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx25_tcq_priv {int clk; } ;
struct device {int dummy; } ;
struct input_dev {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct mx25_tcq_priv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct mx25_tcq_priv*) ;
 int FUNC_5 (struct mx25_tcq_priv*) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct mx25_tcq_priv *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk);
 if (VAR_3) {
  FUNC_2(VAR_1, "Failed to enable ipg clock\n");
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1, "Failed to init tcq\n");
  FUNC_0(VAR_2->clk);
  return VAR_3;
 }

 FUNC_5(VAR_2);

 return 0;
}
