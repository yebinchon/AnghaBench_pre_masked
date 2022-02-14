
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_6__ {int hw; } ;
struct TYPE_5__ {int hw; } ;
struct TYPE_4__ {int nb; struct clk_hw* xtal; } ;


 size_t VAR_0 ;
 struct clk* FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int ) ;
 int FUNC_3 (struct clk*,int *) ;
 int FUNC_4 (int *,char*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5,
     struct clk_hw **VAR_6)
{
 const char *VAR_7;
 struct clk *VAR_8;
 struct clk_hw *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6[VAR_0], 0);


 VAR_4.xtal = VAR_9;
 VAR_7 = FUNC_1(&VAR_3);
 VAR_8 = FUNC_0(VAR_7);
 VAR_10 = FUNC_3(VAR_8,
        &VAR_4.nb);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to register the cpu_clk_postmux0 notifier\n");
  return VAR_10;
 }


 VAR_7 = FUNC_1(&VAR_1.hw);
 VAR_8 = FUNC_0(VAR_7);
 VAR_10 = FUNC_3(VAR_8, &VAR_2);
 if (VAR_10) {
  FUNC_4(&VAR_5->dev, "failed to register the cpu_clk_dyn notifier\n");
  return VAR_10;
 }

 return 0;
}
