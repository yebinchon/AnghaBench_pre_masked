
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct analogix_dp_device *VAR_5, bool VAR_6)
{
 u32 VAR_7;

 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_5->reg_base + VAR_0);
  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_1 | VAR_3;
  FUNC_1(VAR_7, VAR_5->reg_base + VAR_0);
 } else {
  VAR_7 = FUNC_0(VAR_5->reg_base + VAR_0);
  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_4;
  FUNC_1(VAR_7, VAR_5->reg_base + VAR_0);
 }
}
