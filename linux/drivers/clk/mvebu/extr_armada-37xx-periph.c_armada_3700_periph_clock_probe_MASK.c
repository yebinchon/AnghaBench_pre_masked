
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct clk_periph_driver_data {TYPE_1__* hw_data; int lock; int reg; } ;
struct clk_periph_data {scalar_t__ name; } ;
struct clk_hw {int dummy; } ;
struct TYPE_3__ {int num; struct clk_hw** hws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct clk_periph_data const*,int ,int *,struct device*,struct clk_hw**) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_5 ;
 struct clk_periph_data* FUNC_8 (struct device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct clk_periph_driver_data*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct clk_periph_driver_data *VAR_7;
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 const struct clk_periph_data *VAR_9;
 struct device *VAR_10 = &VAR_6->dev;
 int VAR_11 = 0, VAR_12, VAR_13;
 struct resource *VAR_14;

 VAR_9 = FUNC_8(VAR_10);
 if (!VAR_9)
  return -VAR_0;

 while (VAR_9[VAR_11].name)
  VAR_11++;

 VAR_7 = FUNC_6(VAR_10, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->hw_data = FUNC_6(VAR_10,
         FUNC_12(VAR_7->hw_data,
       VAR_4, VAR_11),
         VAR_2);
 if (!VAR_7->hw_data)
  return -VAR_1;
 VAR_7->hw_data->num = VAR_11;

 VAR_14 = FUNC_9(VAR_6, VAR_3, 0);
 VAR_7->reg = FUNC_5(VAR_10, VAR_14);
 if (FUNC_0(VAR_7->reg))
  return FUNC_1(VAR_7->reg);

 FUNC_11(&VAR_7->lock);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct clk_hw **VAR_15 = &VAR_7->hw_data->hws[VAR_12];
  if (FUNC_2(&VAR_9[VAR_12], VAR_7->reg,
        &VAR_7->lock, VAR_10, VAR_15))
   FUNC_4(VAR_10, "Can't register periph clock %s\n",
    VAR_9[VAR_12].name);
 }

 VAR_13 = FUNC_7(VAR_8, VAR_5,
         VAR_7->hw_data);
 if (VAR_13) {
  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
   FUNC_3(VAR_7->hw_data->hws[VAR_12]);
  return VAR_13;
 }

 FUNC_10(VAR_6, VAR_7);
 return 0;
}
