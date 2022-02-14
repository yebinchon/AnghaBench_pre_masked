
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sec_pmic_dev {int dummy; } ;
struct TYPE_13__ {TYPE_1__* init; } ;
struct s2mps11_clk {int mask; unsigned int reg; int lookup; int clk_np; TYPE_7__ hw; int clk; struct sec_pmic_dev* iodev; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct clk_hw_onecell_data {int num; TYPE_7__** hws; } ;
typedef enum sec_device_type { ____Placeholder_sec_device_type } sec_device_type ;
struct TYPE_11__ {int driver_data; } ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;

 unsigned int VAR_6 ;

 unsigned int VAR_7 ;

 unsigned int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,int *) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 struct sec_pmic_dev* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_7__*) ;
 struct s2mps11_clk* FUNC_7 (TYPE_4__*,int,int,int ) ;
 struct clk_hw_onecell_data* FUNC_8 (TYPE_4__*,int ,int ) ;
 int VAR_9 ;
 int FUNC_9 (int ,int ,struct clk_hw_onecell_data*) ;
 int VAR_10 ;
 TYPE_3__* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (struct platform_device*,struct s2mps11_clk*) ;
 int FUNC_12 (struct platform_device*,TYPE_1__*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_13 (struct clk_hw_onecell_data*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_12)
{
 struct sec_pmic_dev *VAR_13 = FUNC_5(VAR_12->dev.parent);
 struct s2mps11_clk *VAR_14;
 struct clk_hw_onecell_data *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18 = 0;
 enum sec_device_type VAR_19 = FUNC_10(VAR_12)->driver_data;

 VAR_14 = FUNC_7(&VAR_12->dev, VAR_3,
    sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_8(&VAR_12->dev,
    FUNC_13(VAR_15, VAR_9, VAR_3),
    VAR_2);
 if (!VAR_15)
  return -VAR_1;

 switch (VAR_19) {
 case 131:
  VAR_16 = VAR_5;
  break;
 case 130:
  VAR_16 = VAR_6;
  break;
 case 129:
  VAR_16 = VAR_7;
  break;
 case 128:
  VAR_16 = VAR_8;
  break;
 default:
  FUNC_4(&VAR_12->dev, "Invalid device type\n");
  return -VAR_0;
 }


 VAR_14->clk_np = FUNC_12(VAR_12, VAR_11);
 if (FUNC_0(VAR_14->clk_np))
  return FUNC_1(VAR_14->clk_np);

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  if (VAR_17 == VAR_4 && VAR_19 == 129)
   continue;
  VAR_14[VAR_17].iodev = VAR_13;
  VAR_14[VAR_17].hw.init = &VAR_11[VAR_17];
  VAR_14[VAR_17].mask = 1 << VAR_17;
  VAR_14[VAR_17].reg = VAR_16;

  VAR_14[VAR_17].clk = FUNC_6(&VAR_12->dev,
       &VAR_14[VAR_17].hw);
  if (FUNC_0(VAR_14[VAR_17].clk)) {
   FUNC_4(&VAR_12->dev, "Fail to register : %s\n",
      VAR_11[VAR_17].name);
   VAR_18 = FUNC_1(VAR_14[VAR_17].clk);
   goto err_reg;
  }

  VAR_14[VAR_17].lookup = FUNC_3(&VAR_14[VAR_17].hw,
     VAR_11[VAR_17].name, ((void*)0));
  if (!VAR_14[VAR_17].lookup) {
   VAR_18 = -VAR_1;
   goto err_reg;
  }
  VAR_15->hws[VAR_17] = &VAR_14[VAR_17].hw;
 }

 VAR_15->num = VAR_3;
 FUNC_9(VAR_14->clk_np, VAR_10,
          VAR_15);

 FUNC_11(VAR_12, VAR_14);

 return VAR_18;

err_reg:
 while (--VAR_17 >= 0)
  FUNC_2(VAR_14[VAR_17].lookup);

 return VAR_18;
}
