
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct platform_device {int dev; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_20__ {int hw; } ;
struct TYPE_19__ {int nb; } ;
struct TYPE_18__ {int hw; } ;
struct TYPE_17__ {int hw; } ;
struct TYPE_16__ {int hw; } ;
struct TYPE_15__ {int nb; struct clk_hw* xtal; } ;
struct TYPE_14__ {int nb; } ;
struct TYPE_13__ {struct clk_hw** hws; } ;
struct TYPE_12__ {int hw; } ;
struct TYPE_11__ {int hw; } ;


 size_t VAR_0 ;
 struct clk* FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int ) ;
 int FUNC_3 (struct clk*,int *) ;
 int FUNC_4 (int *,char*) ;
 int VAR_1 ;
 TYPE_10__ VAR_2 ;
 TYPE_9__ VAR_3 ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_5 (struct platform_device*,struct clk_hw**) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_12)
{
 struct clk_hw **VAR_13 = VAR_10.hws;
 const char *VAR_14;
 struct clk *VAR_15;
 struct clk_hw *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_5(VAR_12, VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_16 = FUNC_2(VAR_13[VAR_0], 0);


 VAR_14 = FUNC_1(&VAR_3.hw);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15, &VAR_1);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the cpu_clk notifier\n");
  return VAR_17;
 }


 VAR_14 = FUNC_1(&VAR_11.hw);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15,
        &VAR_4.nb);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the sys1_pll notifier\n");
  return VAR_17;
 }




 VAR_8.xtal = VAR_16;
 VAR_14 = FUNC_1(&VAR_7);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15,
        &VAR_8.nb);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the cpub_clk_postmux0 notifier\n");
  return VAR_17;
 }


 VAR_14 = FUNC_1(&VAR_6.hw);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15, &VAR_1);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the cpub_clk_dyn notifier\n");
  return VAR_17;
 }


 VAR_14 = FUNC_1(&VAR_5.hw);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15, &VAR_1);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the cpub_clk notifier\n");
  return VAR_17;
 }


 VAR_14 = FUNC_1(&VAR_2.hw);
 VAR_15 = FUNC_0(VAR_14);
 VAR_17 = FUNC_3(VAR_15,
        &VAR_9.nb);
 if (VAR_17) {
  FUNC_4(&VAR_12->dev, "failed to register the sys_pll notifier\n");
  return VAR_17;
 }

 return 0;
}
