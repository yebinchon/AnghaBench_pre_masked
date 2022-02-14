
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;
typedef enum pll_status { ____Placeholder_pll_status } pll_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

enum pll_status FUNC_1(struct analogix_dp_device *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->reg_base + VAR_0);
 if (VAR_5 & VAR_1)
  return VAR_2;
 else
  return VAR_3;
}
