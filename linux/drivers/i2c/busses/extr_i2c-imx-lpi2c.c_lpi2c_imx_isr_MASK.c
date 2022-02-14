
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {int complete; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpi2c_imx_struct*,int ) ;
 int FUNC_2 (struct lpi2c_imx_struct*) ;
 int FUNC_3 (struct lpi2c_imx_struct*) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct lpi2c_imx_struct *VAR_7 = VAR_6;
 unsigned int VAR_8;

 FUNC_1(VAR_7, 0);
 VAR_8 = FUNC_4(VAR_7->base + VAR_1);

 if (VAR_8 & VAR_3)
  FUNC_2(VAR_7);

 if (VAR_8 & VAR_4)
  FUNC_3(VAR_7);

 if (VAR_8 & VAR_2)
  FUNC_0(&VAR_7->complete);

 return VAR_0;
}
