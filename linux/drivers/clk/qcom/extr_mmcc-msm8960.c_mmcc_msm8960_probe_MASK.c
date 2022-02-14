
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct TYPE_5__ {int * init; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
struct TYPE_8__ {TYPE_3__* s; TYPE_2__ clkr; int freq_tbl; } ;
struct TYPE_7__ {void* parent_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int *,struct regmap*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int ,char*) ;
 struct of_device_id* FUNC_4 (int ,struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct regmap* FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*,int ,struct regmap*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 struct regmap *VAR_10;
 bool VAR_11;
 struct device *VAR_12 = &VAR_8->dev;

 VAR_9 = FUNC_4(VAR_4, VAR_12);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_12->of_node, "qcom,mmcc-apq8064");
 if (VAR_11) {
  VAR_3.freq_tbl = VAR_1;
  VAR_3.clkr.hw.init = &VAR_2;
  VAR_3.s[0].parent_map = VAR_5;
  VAR_3.s[1].parent_map = VAR_5;
 }

 VAR_10 = FUNC_5(VAR_8, VAR_9->data);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_2(&VAR_6, VAR_10, &VAR_7, 0);

 return FUNC_6(VAR_8, VAR_9->data, VAR_10);
}
