
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_di {int module; int ipu; int clk_di_pixel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct ipu_di *VAR_0)
{
 int VAR_1;

 FUNC_1(FUNC_0(VAR_0->clk_di_pixel));

 VAR_1 = FUNC_2(VAR_0->clk_di_pixel);
 if (VAR_1)
  return VAR_1;

 FUNC_3(VAR_0->ipu, VAR_0->module);

 return 0;
}
