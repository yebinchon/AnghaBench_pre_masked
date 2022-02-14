
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_rng {unsigned long skip_init; int clk; int base; int lock; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct qcom_rng* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct qcom_rng*) ;
 int VAR_2 ;
 struct qcom_rng* VAR_3 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct qcom_rng *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_10(VAR_4, VAR_5);
 FUNC_9(&VAR_5->lock);

 VAR_5->base = FUNC_7(VAR_4, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);


 if (!FUNC_8(&VAR_4->dev)) {
  VAR_5->clk = FUNC_5(&VAR_4->dev, "core");
  if (FUNC_0(VAR_5->clk))
   return FUNC_1(VAR_5->clk);
 }


 VAR_5->skip_init = (unsigned long)FUNC_4(&VAR_4->dev);

 VAR_3 = VAR_5;
 VAR_6 = FUNC_2(&VAR_2);
 if (VAR_6) {
  FUNC_3(&VAR_4->dev, "Register crypto rng failed: %d\n", VAR_6);
  VAR_3 = ((void*)0);
 }

 return VAR_6;
}
