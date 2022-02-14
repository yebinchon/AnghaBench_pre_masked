
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct analogix_dp_device *VAR_3,
     u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->reg_base + VAR_0);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_4 << VAR_2;
 FUNC_1(VAR_5, VAR_3->reg_base + VAR_0);
}
