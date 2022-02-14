
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cec {scalar_t__ regs; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mtk_cec* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;

bool FUNC_2(struct device *VAR_3)
{
 struct mtk_cec *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_4->regs + VAR_2);

 return (VAR_5 & (VAR_1 | VAR_0)) == (VAR_1 | VAR_0);
}
