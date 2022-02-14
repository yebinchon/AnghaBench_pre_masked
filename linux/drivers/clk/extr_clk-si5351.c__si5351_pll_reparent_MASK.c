
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_driver_data {scalar_t__ variant; } ;
typedef enum si5351_pll_src { ____Placeholder_si5351_pll_src } si5351_pll_src ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct si5351_driver_data*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct si5351_driver_data *VAR_7,
    int VAR_8, enum si5351_pll_src VAR_9)
{
 u8 VAR_10 = (VAR_8 == 0) ? VAR_1 : VAR_2;

 if (VAR_9 == VAR_4)
  return 0;

 if (VAR_8 > 2)
  return -VAR_0;

 if (VAR_7->variant != VAR_6 &&
     VAR_9 != VAR_5)
  return -VAR_0;

 FUNC_0(VAR_7, VAR_3, VAR_10,
   (VAR_9 == VAR_5) ? 0 : VAR_10);
 return 0;
}
