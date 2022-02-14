
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc {int dummy; } ;
struct dce_aux {struct ddc* ddc; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dce_aux*) ;
 int FUNC_1 (struct ddc*) ;
 int FUNC_2 (struct ddc*,int ,int ) ;
 int FUNC_3 (struct dce_aux*) ;

__attribute__((used)) static bool FUNC_4(
 struct dce_aux *VAR_3,
 struct ddc *VAR_4)
{
 enum gpio_result VAR_5;

 if (!FUNC_3(VAR_3))
  return 0;

 VAR_5 = FUNC_2(VAR_4, VAR_1,
  VAR_0);

 if (VAR_5 != VAR_2)
  return 0;

 if (!FUNC_0(VAR_3)) {
  FUNC_1(VAR_4);
  return 0;
 }

 VAR_3->ddc = VAR_4;

 return 1;
}
