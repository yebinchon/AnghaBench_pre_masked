
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct analogix_dp_device *VAR_9)
{
 u32 VAR_10;

 VAR_10 = VAR_8 | VAR_7 | VAR_6;
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_0);

 VAR_10 = 0x0;
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_1);

 VAR_10 = FUNC_0(4) | VAR_5;
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_2);

 VAR_10 = 0x0;
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_3);

 VAR_10 = FUNC_1(2) | FUNC_2(0);
 FUNC_3(VAR_10, VAR_9->reg_base + VAR_4);
}
