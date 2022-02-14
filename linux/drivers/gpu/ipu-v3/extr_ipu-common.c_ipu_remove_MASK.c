
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ipu_soc {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipu_soc*) ;
 int FUNC_2 (struct ipu_soc*) ;
 int FUNC_3 (struct platform_device*) ;
 struct ipu_soc* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct ipu_soc *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_0);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_0(VAR_1->clk);

 return 0;
}
