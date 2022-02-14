
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_kscan_drv {int matrix_sz; int input; int kscan_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpc32xx_kscan_drv*,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct lpc32xx_kscan_drv *VAR_3 = VAR_2;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->matrix_sz; VAR_4++)
  FUNC_2(VAR_3, VAR_4);

 FUNC_3(1, FUNC_0(VAR_3->kscan_base));

 FUNC_1(VAR_3->input);

 return VAR_0;
}
