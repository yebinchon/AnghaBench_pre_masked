
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_kscan_drv {int kscan_base; int clk; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct lpc32xx_kscan_drv* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0)
{
 struct lpc32xx_kscan_drv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 FUNC_3(1, FUNC_0(VAR_1->kscan_base));

 return 0;
}
