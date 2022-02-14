
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si5351_driver_data {int dummy; } ;
typedef enum si5351_multisynth_src { ____Placeholder_si5351_multisynth_src } si5351_multisynth_src ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct si5351_driver_data*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct si5351_driver_data *VAR_5,
       int VAR_6, enum si5351_multisynth_src VAR_7)
{
 if (VAR_7 == VAR_3)
  return 0;

 if (VAR_6 > 8)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_1 + VAR_6, VAR_2,
   (VAR_7 == VAR_4) ? 0 :
   VAR_2);
 return 0;
}
