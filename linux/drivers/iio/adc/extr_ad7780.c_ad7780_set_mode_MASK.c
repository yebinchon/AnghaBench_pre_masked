
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad7780_state {int powerdown_gpio; } ;
typedef enum ad_sigma_delta_mode { ____Placeholder_ad_sigma_delta_mode } ad_sigma_delta_mode ;




 struct ad7780_state* FUNC_0 (struct ad_sigma_delta*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ad_sigma_delta *VAR_0,
      enum ad_sigma_delta_mode VAR_1)
{
 struct ad7780_state *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;

 switch (VAR_1) {
 case 128:
 case 129:
  VAR_3 = 1;
  break;
 default:
  VAR_3 = 0;
  break;
 }

 FUNC_1(VAR_2->powerdown_gpio, VAR_3);

 return 0;
}
