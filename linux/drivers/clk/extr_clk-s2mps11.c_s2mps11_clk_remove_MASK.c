
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2mps11_clk {int lookup; int clk_np; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct s2mps11_clk* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct s2mps11_clk *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_1(VAR_2[0].clk_np);

 FUNC_2(VAR_2[0].clk_np);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (!VAR_2[VAR_3].lookup)
   continue;
  FUNC_0(VAR_2[VAR_3].lookup);
 }

 return 0;
}
