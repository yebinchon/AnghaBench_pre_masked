
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct clk_plt_fixed {int clk; int lookup; } ;


 int VAR_0 ;
 struct clk_plt_fixed* FUNC_0 (int ) ;
 struct clk_plt_fixed* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,char const*,int ,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*,int *) ;
 struct clk_plt_fixed* FUNC_6 (int *,int,int ) ;

__attribute__((used)) static struct clk_plt_fixed *FUNC_7(struct platform_device *VAR_2,
       const char *VAR_3,
       const char *VAR_4,
       unsigned long VAR_5)
{
 struct clk_plt_fixed *VAR_6;

 VAR_6 = FUNC_6(&VAR_2->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_6->clk = FUNC_3(&VAR_2->dev, VAR_3, VAR_4,
            0, VAR_5);
 if (FUNC_2(VAR_6->clk))
  return FUNC_0(VAR_6->clk);

 VAR_6->lookup = FUNC_5(VAR_6->clk, VAR_3, ((void*)0));
 if (!VAR_6->lookup) {
  FUNC_4(VAR_6->clk);
  return FUNC_1(-VAR_0);
 }

 return VAR_6;
}
