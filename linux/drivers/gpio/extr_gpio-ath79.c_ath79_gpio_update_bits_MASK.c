
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath79_gpio_ctrl {int dummy; } ;


 int FUNC_0 (struct ath79_gpio_ctrl*,unsigned int) ;
 int FUNC_1 (struct ath79_gpio_ctrl*,unsigned int,int) ;

__attribute__((used)) static bool FUNC_2(
 struct ath79_gpio_ctrl *VAR_0, unsigned VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_5 = (VAR_4 & ~VAR_2) | (VAR_3 & VAR_2);

 if (VAR_5 != VAR_4)
  FUNC_1(VAR_0, VAR_1, VAR_5);

 return VAR_5 != VAR_4;
}
