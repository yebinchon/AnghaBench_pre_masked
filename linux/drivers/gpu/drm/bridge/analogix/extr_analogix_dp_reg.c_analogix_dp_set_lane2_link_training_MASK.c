
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(struct analogix_dp_device *VAR_1,
      u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3, VAR_1->reg_base + VAR_0);
}
