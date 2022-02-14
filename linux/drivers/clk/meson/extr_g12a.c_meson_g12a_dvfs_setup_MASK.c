
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_8__ {int hw; } ;
struct TYPE_7__ {struct clk_hw** hws; } ;
struct TYPE_6__ {int hw; } ;
struct TYPE_5__ {int nb; } ;


 struct clk* FUNC_0 (char const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (struct clk*,int *) ;
 int FUNC_3 (int *,char*) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (struct platform_device*,struct clk_hw**) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct clk_hw **VAR_6 = VAR_2.hws;
 const char *VAR_7;
 struct clk *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;


 VAR_7 = FUNC_1(&VAR_0.hw);
 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = FUNC_2(VAR_8, &VAR_1);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "failed to register the cpu_clk notifier\n");
  return VAR_9;
 }


 VAR_7 = FUNC_1(&VAR_3.hw);
 VAR_8 = FUNC_0(VAR_7);
 VAR_9 = FUNC_2(VAR_8, &VAR_4.nb);
 if (VAR_9) {
  FUNC_3(&VAR_5->dev, "failed to register the sys_pll notifier\n");
  return VAR_9;
 }

 return 0;
}
