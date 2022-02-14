
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dw_i3c_master {int core_clk; int core_rst; int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct dw_i3c_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct dw_i3c_master *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_3(VAR_1->core_rst);

 FUNC_0(VAR_1->core_clk);

 return 0;
}
